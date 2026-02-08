//https://www.luogu.com.cn/problem/P1644
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//int m, n, ans;
//int dx[4] = { 2,1,-1,-2 };
//int dy[4] = { 1,2, 2, 1 };
//
//void dfs(int x, int y) {
//    if (x == n && y == m) { ans++; return; }
//    for (int i = 0; i < 4; i++) {
//        int a = x + dx[i], b = y + dy[i];
//        if (a<0 || a>n || b > m) continue;
//        // printf("(%d,%d)\n",a,b);
//        dfs(a, b);
//    }
//}
//int main() {
//    cin >> n >> m;
//    dfs(0, 0);
//    cout << ans;
//    return 0;
//}