//Floyd算法
// https://www.luogu.com.cn/problem/B3647
//#include <iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//const int N = 505, inf = 0x3f3f3f3f;
//int g[N][N], n, m, path[N][N];
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++)//初始化距离
//        memset(g[i], 0x3f, sizeof g[i] ), memset(path[i], -1, sizeof path[i]);
//    for (int i = 1; i <= n; i++)g[i][i] = 0, path[i][i] = i;
//    int x, y, z;
//    while (m--)
//    {
//        cin >> x >> y >> z;
//        if (z < g[x][y])
//        {
//            g[x][y] = z; g[y][x] = z;
//            path[x][y] = y; path[y][x] = x;
//        }
//    }
//     for(int k=1;k<=n;k++)
//         for(int i=1;i<=n;i++)
//             for (int j = 1; j <= n; j++)
//             {
//                 if (g[i][k] + g[k][j] < g[i][j])
//                 {
//                     g[i][j] = g[i][k] + g[k][j];
//                     g[j][i] = g[j][k] + g[k][i];
//                     path[i][j] = k; path[j][i] = k;
//                 }
//             }
//     //输出
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= n; j++)
//            cout << g[i][j] << " ";
//        cout << "\n";
//    }
//    return 0;
//}
