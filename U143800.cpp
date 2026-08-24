////https://www.luogu.com.cn/problem/U143800
////树上边差分，附加边是为路径上的两条边加上1的权值
////注意1：如果值为0的话，减去任意辅助边都可
//#include <iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//const int N = 1e5 + 5;
//vector<int> e[N];
//int n, m, dep[N],fa[N][21],d[N];
//long long ans = 0;
//void dfs1(int u, int f)
//{
//    dep[u] = dep[f] + 1;
//    fa[u][0] = f;
//    //更新fa数组
//    for (int i = 1; i <= 20; i++)fa[u][i] = fa[fa[u][i - 1]][i - 1];
//    for (int v:e[u])
//    {
//        if (v == f)continue;
//        else dfs1(v, u);
//    }
//}
//void dfs2(int u, int f)//后序遍历
//{
//    for (int v : e[u])
//    {
//        if (v == f)continue;
//        dfs2(v, u);
//    }
//    d[f] += d[u];
//}
//int lca(int u, int v)
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
//    int u, v;
//    for (int i = 1; i < n; i++)
//    {
//        cin >> u >> v;
//        e[u].push_back(v);
//        e[v].push_back(u);
//    }
//    dfs1(1, 0);
//    int x, y,z;
//    for(int i=0;i<m;i++)
//    {
//        cin >> x >> y;
//        z = lca(x, y);
//        d[x]++; d[y]++; d[z] -= 2;
//    }
//    //将差分合并完，并对答案统计
//    dfs2(1, 0);
//    for (int i = 2; i <= n; i++)
//        if (d[i] == 1)ans++;
//        else if(d[i] == 0) ans += m; 
//    cout << ans;
//    return 0;
//}
