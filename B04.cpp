//https://www.luogu.com.cn/problem/P1605
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//const int N = 10;
//int m, n, t, sx, sy, fx, fy, a, b, ans;
//int g[N][N];
//int dx[4] = { -1,0,1, 0 }, dy[4] = { 0,1,0,-1 };
//
//void dfs(int x, int y) {
//    if (x == fx && y == fy) { ans++; return; }
//    for (int i = 0; i < 4; i++) {
//        int a = x + dx[i], b = y + dy[i];
//        if (a<1 || a>n || b<1 || b>m || g[a][b])continue;
//        g[a][b] = 1; //锁定现场
//        dfs(a, b);
//        g[a][b] = 0; //恢复现场
//    }
//}
//int main() {
//    cin >> n >> m >> t >> sx >> sy >> fx >> fy;
//    for (int i = 0; i < t; i++)cin >> a >> b, g[a][b] = 1;
//    g[sx][sy] = 1;
//    dfs(sx, sy);
//    cout << ans;
//    return 0;
//}