////最长公共祖先
////https://www.luogu.com.cn/problem/P3379
// 注意，这里要加特判，因为回到同一层后uv可能是同一个，这样会出现
//#include <iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//const int N = 5e5 + 5;
//int fa[N][21], dep[N];
//vector<int> e[N];
//int n, m, s;
//
//void dfs(int u, int f)
//{
//    dep[u] = dep[f] + 1;
//    fa[u][0] = f;
//    //打表
//    for (int i = 1; i <=20; i++)
//    {
//        fa[u][i] = fa[fa[u][i-1]][i-1];
//    }
//    //深搜
//    for (int i : e[u])
//    {
//        if (i == f)continue;
//        dfs(i, u);
//    }
//}
//int lca(int u, int v)
//{
//    if (dep[u] < dep[v])swap(u, v);
//    //跳到同一层
//    for (int i = 20; i >= 0; i--)
//    {
//        if (dep[fa[u][i]] < dep[v])continue;
//        u = fa[u][i];
//    }
//    //特判
//    if (u == v)return u;
//    //找最近祖先
//    for (int i = 20; i >= 0; i--)
//    {
//        if (fa[u][i] == fa[v][i])continue;
//        else
//        {
//            u = fa[u][i], v = fa[v][i];
//        }
//    }
//    return fa[u][0];
//}
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> m >> s;
//    int a, b;
//    for (int i = 1; i < n; i++)
//    {
//        cin >> a >> b;
//        e[a].push_back(b);
//        e[b].push_back(a);
//    }
//    //打st表
//    dfs(s, 0);
//    //查询
//    int u, v;
//    while (m--)
//    {
//        cin >> u >> v;
//        cout << lca(u, v)<<"\n";
//    }
//    return 0;
//}
