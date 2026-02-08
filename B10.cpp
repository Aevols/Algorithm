////https://www.luogu.com.cn/problem/P1596
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//
//const int N = 1010;
//int n, m;
//char g[N][N];
//int dx[8] = { -1,-1,-1,0,1,1,1,0 };
//int dy[8] = { -1,0,1,1,1,0,-1,-1 };
//
//void dfs(int x, int y) {
//    g[x][y] = '.';
//    for (int i = 0; i < 8; i++) {
//        int a = x + dx[i], b = y + dy[i];
//        if (a < 0 || a >= n || b < 0 || b >= m)continue;
//        if (g[a][b] == '.')continue;
//        dfs(a, b);
//    }
//}
//int main() {
//    cin >> n >> m;
//    for (int i = 0; i < n; i++)
//        scanf("%s", g[i]);
//    int ans = 0;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            if (g[i][j] == 'W')
//                ans++, dfs(i, j);
//    cout << ans << endl;
//    return 0;
//}
//
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//#include<queue>
//using namespace std;
//
//const int N = 1010;
//int n, m;
//char g[N][N];
//int dx[8] = { -1,-1,-1,0,1,1,1,0 };
//int dy[8] = { -1,0,1,1,1,0,-1,-1 };
//
//typedef pair<int, int> PII;
//
//void bfs(int sx, int sy) {
//    queue<PII> q;
//    q.push({ sx, sy });
//    g[sx][sy] = '.';
//
//    while (!q.empty()) {
//        PII t = q.front();
//        q.pop();
//
//        for (int i = 0; i < 8; i++) {
//            int a = t.first + dx[i], b = t.second + dy[i];
//            if (a < 0 || a >= n || b < 0 || b >= m) continue;
//            if (g[a][b] == '.') continue;
//
//            g[a][b] = '.';
//            q.push({ a, b });
//        }
//    }
//}
//
//int main() {
//    cin >> n >> m;
//    for (int i = 0; i < n; i++)
//        scanf("%s", g[i]);
//
//    int ans = 0;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            if (g[i][j] == 'W')
//                ans++, bfs(i, j);
//
//    cout << ans << endl;
//    return 0;
//}