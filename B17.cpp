////双端队列bfs(zero-one bfs)
////https://www.luogu.com.cn/problem/P4667
//#include<iostream>
//#include<deque>
//#include<cstring>
//
//using namespace std;
//
//typedef pair<int, int> pai;
//const int N = 505;
//const int INF = 0x3f3f3f3f;
//
//int n, m;
//char g[N][N];
//int steps[N][N];
//bool vis[N][N];
//
//// 严格对应的方向数组
//// 0:右下(+1,+1), 1:左下(+1,-1), 2:右上(-1,+1), 3:左上(-1,-1)
//int dx[4] = { 1, 1, -1, -1 };
//int dy[4] = { 1, -1, 1, -1 };
//
//// 对应方向移动时，格点(x,y)所跨越的那个格子的坐标偏移
//int gx[4] = { 0, 0, -1, -1 };
//int gy[4] = { 0, -1, 0, -1 };
//
//// 对应方向上，如果不旋转则需要的原始字符
//char f[] = {'\\', '/', '/', '\\'}; 
//void zobfs()
//{
//    // 1. 必须初始化为极大值
//    memset(steps, 0x3f, sizeof steps);
//    memset(vis, false, sizeof vis);
//
//    deque<pai> q;
//
//    // 奇偶性检查：起点到终点的曼哈顿距离必须是偶数
//    if ((n + m) % 2 != 0) return;
//
//    steps[0][0] = 0;
//    q.push_back({ 0, 0 });
//
//    while (!q.empty())
//    {
//        pai cur = q.front();
//        q.pop_front();
//
//        int x = cur.first, y = cur.second;
//
//        // Dijkstra 思想：出队时再标记完成，确保拿到的是最小值
//        if (vis[x][y]) continue;
//        vis[x][y] = true;
//
//        for (int i = 0; i < 4; i++)
//        {
//            int nx = x + dx[i];
//            int ny = y + dy[i];
//
//            if (nx >= 0 && nx <= n && ny >= 0 && ny <= m)
//            {
//                int cx = x + gx[i];
//                int cy = y + gy[i];
//
//                // 判断当前格子字符是否与移动方向匹配，匹配代价为0，不匹配代价为1
//                int weight = (g[cx][cy] != f[i]);
//
//                if (steps[x][y] + weight < steps[nx][ny])
//                {
//                    steps[nx][ny] = steps[x][y] + weight;
//                    if (weight == 0) q.push_front({ nx, ny });
//                    else q.push_back({ nx, ny });
//                }
//            }
//        }
//    }
//}
//
//int main()
//{
//  
//    cin >> n >> m;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            cin >> g[i][j];
//    zobfs();
//    if (steps[n][m] == INF) cout << "NO SOLUTION" << endl;
//    else cout << steps[n][m] << endl;
//    return 0;
//}