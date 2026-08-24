////树上差分
////https://www.luogu.com.cn/problem/P3128
////链式前向星+差分+lca
//#include <iostream>
//#include<algorithm>
//using namespace std;
//const int N = 50005, M = 2 * N;
//int h[N], to[M], ne[M], total;//h[i]节点i的第一条边，to[j]第j条边的指向，ne[j]链表中的下一个节点
//int n, m,dep[N],fa[N][21],d[N],depth;//d[N]代表节点的差分值,depth表示叶子深度
//int max_ans = 0; // 记录最大牛奶量
//void add(int x, int y)
//{
//    to[++total] = y;
//    ne[total] = h[x];
//    h[x] = total;
//}
//void dfs1(int u, int f)
//{
//    dep[u] = dep[f] + 1;
//    fa[u][0] = f;
//    //depth = depth >= dep[u] ? depth : dep[u];
//    //更新fa数组
//    for (int i = 1; i <= 20; i++)fa[u][i] = fa[fa[u][i - 1]][i - 1];
//    for (int i = h[u]; i != 0; i = ne[i])
//    {
//        int v = to[i];
//        if (v == f)continue;
//        else dfs1(v, u);
//    }
//}
//void dfs2(int u, int f) 
//{
//    for (int i = h[u]; i != 0; i = ne[i]) 
//    {
//        int v = to[i];
//        if (v == f) continue;
//        dfs2(v, u);       
//        d[u] += d[v];     
//    }
//    max_ans = max(max_ans, d[u]); 
//}
//int lca(int u, int v)//这次返回公共祖先不一定是二者的长辈，但之前那题必须是长辈
//{
//    if (dep[u] < dep[v])swap(u, v);
//    for (int i = 20; i >= 0; i--)
//    {
//        if (dep[fa[u][i]] < dep[v])continue;//如果跳多了就不跳
//        else u = fa[u][i];
//    }
//    //特判
//    if (u == v)return u;
//    for (int i = 20; i >= 0; i--)
//    {
//        if (fa[u][i] == fa[v][i])continue;
//        u = fa[u][i]; v = fa[v][i];
//    }
//    return fa[u][0];
//}
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> m;
//    //加边
//    int x, y;
//    for (int i = 1; i < n; i++)
//    {
//        cin >> x >> y;
//        add(x, y), add(y, x);
//    }
//    //初始化，做差分，默认一节点是根
//    dfs1(1, 0);
//    while (m--)
//    {
//        cin >> x >> y;
//        int lc = lca(x, y);
//        d[x]++; d[y]++; d[lc]--; d[fa[lc][0]]--;
//    }
//    //统计答案
//    dfs2(1, 0);
//    cout << max_ans << endl;
//    return 0;
//}
//
