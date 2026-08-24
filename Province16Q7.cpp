//#include <iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//const int N = 1005;
//int n, a[N];
//bool f[N][N];
//vector<int> e[N], tmp;
//void dfs(int x, int fa)
//{
//    if (e[x].size() == 1 && x != 1) f[x][a[x]] = true;
//    //注意有可能是一条链
//    f[x][0] = true;
//    for (auto u : e[x])
//    {   
//        if (u == fa)continue;
//        dfs(u, x);
//        tmp.clear();
//        for (int i = 0; i <= a[x]; i++)
//            if (f[x][i])for (int j = 0; i + j <= a[x]; j++)
//                if (f[u][j]) tmp.push_back(i + j);
//        for (auto y : tmp) f[x][y] = true;
//    }
//}
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    cin >> n;
//    for (int i = 1; i <= n; i++) cin >> a[i];
//    for (int i = 1, x, y; i < n; e[x].push_back(y), e[y].push_back(x), i++) cin >> x >> y;
//    dfs(1, 0);
//    for (int i = a[1]; i >= 0; i--)if (f[1][i])
//    {
//        cout << i;
//        return 0;
//    }
//}
