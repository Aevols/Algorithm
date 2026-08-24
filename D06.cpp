////https://www.luogu.com.cn/problem/P6175
//#include <iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//const int N = 105, inf = 1e8;//e9±¬intÒòÎª*3±¶ÁË
//int d[N][N], n, m,ans,w[N][N];
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> m;
//    int x, y, z;
//    ans = inf;
//    for (int i = 1; i <= n; i++)
//        for (int j = 1; j <= n; j++)
//            if (i != j) d[i][j] = 1e8;
//    while (m--)
//    {
//        cin >> x >> y >> z;
//        d[x][y] = min(d[x][y], z);
//        d[y][x] = min(d[y][x], z);
//    }
//    memcpy(w,d,sizeof d);
//    for (int k = 1; k <= n; k++)
//    {
//        for(int i=1;i<k;i++)
//            for (int j = i + 1; j < k; j++)
//                ans = min(ans, d[i][j] + w[i][k] + w[k][j]);
//        for (int i = 1; i <= n; i++)
//            for (int j = 1; j <= n; j++)
//                d[i][j] = d[j][i] = min(d[i][j], d[i][k] + d[k][j]);
//    }
//    if (ans == inf) cout << "No solution.";
//    else cout << ans;
//    return 0;
//}
