////https://www.luogu.com.cn/problem/P4427
//这道题卡cin，cout，用C语言的输入输出可以过
//#include <iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//using LL = long long;
//const int N = 3e5 + 5;
//const int M = 52;
//const int mod = 998244353;
//vector<int> e[N];
//int n, m,dep[N],fa[N][21]; 
//bool vis[N];
//LL mi[N],s[N][M];//dep的k次幂
//void dfs(int u, int f)
//{   
//    vis[u] = true;
//    dep[u] = dep[f] + 1;
//    fa[u][0] = f;
//    for (int i = 1; i <= 20; i++)
//        fa[u][i] = fa[fa[u][i - 1]][i - 1];
//    for (int i = 1; i < M; i++)mi[i] = mi[i - 1] * dep[u]%mod;
//    for (int i = 0; i < M; i++)s[u][i] = (s[fa[u][0]][i] + mi[i])%mod;
//    for (int v : e[u])
//    {
//        if (vis[v])continue;
//        dfs(v, u);
//    }
//}
//int lca(int u, int v)
//{
//    if (dep[u] < dep[v])swap(u, v);
//    for (int i = 20; i >= 0; i--)
//    {
//        if (dep[fa[u][i]] < dep[v])continue;
//        u = fa[u][i];
//    }
//    for (int i = 20; i >= 0; i--)
//    {
//        if (fa[u][i] == fa[v][i])continue;
//        u = fa[u][i], v = fa[v][i];
//    }
//    return fa[u][0];
//}
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n;
//    int x, y;
//    dep[0] = -1;
//    mi[0] = 1;
//    for (int i = 1; i < n; i++)
//    {
//        cin >> x >> y;
//        e[x].push_back(y), e[y].push_back(x);
//    }
//    dfs(1, 0);
//    cin >> m;
//    int k,z;
//    while (m--)
//    {
//        cin >> x >> y >> k;
//        z = lca(x, y);
//        cout << (s[x][k] + s[y][k] - s[z][k] - s[fa[z][0]][k] + 2 * mod) % mod<< "\n";
//    }
//    return 0;
//}
