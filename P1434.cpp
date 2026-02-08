//法一：暴力bfs,逻辑是有错的，会重复搜索，应该dfs
//#include<iostream>
//#include<queue>
//
//using namespace std;
//struct Node
//{
//	int x, y, depth;
//};
//const int N = 102;
//int r, c, g[N][N];
//int dx[4] = { -1,0,1,0 };
//int dy[4] = { 0,1,0,-1 };
//int ans = 0;
//void bfs(int x,int y)
//{
//	queue<Node> q;
//	q.push({ x,y,1 });
//	Node n;
//	while (q.size())
//	{
//		n = q.front();
//		q.pop();
//		for (int i = 0; i < 4; i++)
//		{
//			int x = n.x + dx[i];
//			int y = n.y + dy[i];
//			int depth = n.depth + 1;
//			if (x <= 0 || x > r || y <= 0 || y > c||g[x][y]>=g[n.x][n.y])continue;
//			if (depth > ans)ans = depth;
//			q.push({ x,y,depth });
//		}
//	}
//}
//
//int main()
//{
//	cin >> r >> c;
//	for (int i = 1; i <= r; i++)
//		for (int j = 1; j <= c; j++)
//			cin >> g[i][j];
//	for (int i = 1; i <= r; i++)
//		for (int j = 1; j <= c; j++)
//			bfs(i, j);
//	cout << ans;
//	return 0;
//}
//#include<iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//
//const int N = 102;
//int r, c;           // r=行数，c=列数
//int g[N][N];        // 地图
//int dp[N][N];       // dp[i][j] = 从(i,j)出发的最长路径
//int dx[4] = { -1, 0, 1, 0 };
//int dy[4] = { 0, 1, 0, -1 };
//
//// 返回从(x,y)出发能滑的最长距离
//int dfs(int x, int y)
//{
//    // 如果已经计算过，直接返回（记忆化）
//    if (dp[x][y] != -1) return dp[x][y];
//
//    dp[x][y] = 1;  // 至少包含自己这一个点
//
//    // 尝试向四个方向滑
//    for (int i = 0; i < 4; i++)
//    {
//        int nx = x + dx[i];
//        int ny = y + dy[i];
//
//        // 边界检查 + 高度递减检查
//        if (nx < 1 || nx > r || ny < 1 || ny > c) continue;
//        if (g[nx][ny] >= g[x][y]) continue;  // 只能滑向更低的地方
//
//        // 递归计算，取最大值
//        dp[x][y] = max(dp[x][y], dfs(nx, ny) + 1);
//    }
//
//    return dp[x][y];
//}
//
//int main()
//{
//    cin >> r >> c;
//
//    for (int i = 1; i <= r; i++)
//        for (int j = 1; j <= c; j++)
//            cin >> g[i][j];
//
//    memset(dp, -1, sizeof dp);  // 初始化为-1表示未计算
//
//    int ans = 0;
//    // 尝试从每个点出发
//    for (int i = 1; i <= r; i++)
//        for (int j = 1; j <= c; j++)
//            ans = max(ans, dfs(i, j));
//
//    cout << ans << endl;
//
//    return 0;
//}