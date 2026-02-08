//这道题还是搜索问题，我们还是使用前向星和深搜，会有环路出现
//不对，不能用前向星，因为它是走尽可能大的边，先走小边就
//也不对，可以用二分法找是否有通路，有通路就接受
//https://www.luogu.com.cn/problem/P1967
//法一：dfs+二分（当然是超时了）
//#include<iostream>
//#include<cstring>
//using namespace std;
//const int N = 1e4 + 5;
//const int M = 1e5 + 5;
//struct Edge
//{
//	int v, w, ne;//v是边指哪，w权值，ne指向h中的下一条边
//};
//
//int n, m, q;
//int h[N]; Edge e[M];
//int cnt = 0;//统计边数
//int vis[N];//判断是否访问过该节点
//void add(int x, int y, int z)//加边函数
//{
//	e[cnt] = { y,z,h[x] };
//	h[x] = cnt++;
//}
//bool dfs(int x, int y, int mid)
//{	
//	if (x == y) return true;
//	vis[x] = 1;
//	for (int i = h[x]; i != -1; i = e[i].ne)
//	{
//		if (e[i].w < mid||vis[e[i].v])continue;
//		if (e[i].v == y)return true;
//		//return dfs(e[i].v, y, mid);这是错的，只尝试了第一条边
//		if (dfs(e[i].v, y, mid))
//			return true;
//	}
//	return false;
//}
//int main()
//{
//	cin >> n >> m;
//	int x, y, z;
//	memset(h, -1, sizeof h);
//	for (int i = 0; i < m; i++)
//	{
//		cin >> x >> y >> z;
//		add(x, y, z);
//		add(y,x, z);
//	}
//	cin >> q;
//	for (int i = 0; i < q; i++)
//	{	
//		cin >> x >> y;
//		int l = -1, r = 1e5 + 1;
//		//memset(vis, 0, sizeof vis);这个应该放到while循环里面才对
//		//二分查找逻辑
//		while (l+1<r)
//		{
//			memset(vis, 0, sizeof vis);
//			int mid = (l + r) >> 1;
//			if (dfs(x, y, mid) == true)l = mid;
//			else r = mid;
//		}
//		cout << l << endl;
//	}
//	return 0;
//	
//}
//法二：最大生成树+倍增LCA
//#include<iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//
//const int N = 1e4 + 5;
//const int M = 5e4 + 5;
//
//struct Edge
//{
//    int u, v, w;
//    bool operator < (const Edge& other) const
//    {
//        return w > other.w;  // 按权值从大到小排序
//    }
//} edges[M];
//
//struct TreeEdge
//{
//    int v, w, next;
//} tree[N * 2];
//
//int n, m, q;
//int p[N];           // 并查集
//int h[N], cnt;      // 树的邻接表
//int depth[N];       // 深度
//int fa[N][16];      // fa[i][j] = i的第2^j个祖先
//int minw[N][16];    // minw[i][j] = i到第2^j个祖先路径上的最小边权
//int root[N];        // 所在连通块的根
//
//// 并查集
//int find(int x)
//{
//    return p[x] == x ? x : p[x] = find(p[x]);
//}
//
//// 添加树边
//void add(int u, int v, int w)
//{
//    tree[cnt] = { v, w, h[u] };
//    h[u] = cnt++;
//}
//
//// Kruskal 构建最大生成树
//void kruskal()
//{
//    for (int i = 1; i <= n; i++) p[i] = i;
//
//    sort(edges, edges + m);
//
//    for (int i = 0; i < m; i++)
//    {
//        int u = edges[i].u, v = edges[i].v, w = edges[i].w;
//        int pu = find(u), pv = find(v);
//        if (pu != pv)
//        {
//            p[pu] = pv;
//            add(u, v, w);
//            add(v, u, w);
//        }
//    }
//}
//
//// DFS预处理倍增数组
//void dfs(int u, int father, int rt)
//{
//    root[u] = rt;
//    depth[u] = depth[father] + 1;
//    fa[u][0] = father;
//
//    // 倍增预处理
//    for (int i = 1; i < 16; i++)
//    {
//        fa[u][i] = fa[fa[u][i - 1]][i - 1];
//        minw[u][i] = min(minw[u][i - 1], minw[fa[u][i - 1]][i - 1]);
//    }
//
//    for (int i = h[u]; i != -1; i = tree[i].next)
//    {
//        int v = tree[i].v;
//        if (v == father) continue;
//        minw[v][0] = tree[i].w;
//        dfs(v, u, rt);
//    }
//}
//
//// 查询u到v路径上的最小边权
//int query(int u, int v)
//{
//    // 不在同一连通块
//    if (root[u] != root[v]) return -1;
//
//    int ans = 1e9;
//
//    // 让u和v在同一深度
//    if (depth[u] < depth[v]) swap(u, v);
//
//    for (int i = 15; i >= 0; i--)
//    {
//        if (depth[fa[u][i]] >= depth[v])
//        {
//            ans = min(ans, minw[u][i]);
//            u = fa[u][i];
//        }
//    }
//
//    if (u == v) return ans;
//
//    // 同时向上跳，找LCA
//    for (int i = 15; i >= 0; i--)
//    {
//        if (fa[u][i] != fa[v][i])
//        {
//            ans = min(ans, min(minw[u][i], minw[v][i]));
//            u = fa[u][i];
//            v = fa[v][i];
//        }
//    }
//
//    ans = min(ans, min(minw[u][0], minw[v][0]));
//
//    return ans;
//}
//
//int main()
//{
//    cin >> n >> m;
//
//    memset(h, -1, sizeof h);
//    memset(minw, 0x3f, sizeof minw);
//
//    for (int i = 0; i < m; i++)
//    {
//        cin >> edges[i].u >> edges[i].v >> edges[i].w;
//    }
//
//    kruskal();
//
//    // 处理每个连通块
//    for (int i = 1; i <= n; i++)
//    {
//        if (!depth[i])
//        {
//            dfs(i, 0, i);
//        }
//    }
//
//    cin >> q;
//    while (q--)
//    {
//        int u, v;
//        cin >> u >> v;
//        cout << query(u, v) << '\n';
//    }
//
//    return 0;
//}
//法三：最大生成树+邻接矩阵