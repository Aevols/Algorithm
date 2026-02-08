////http://poj.org/problem?id=3984
//#include<iostream>
//#include<queue>
//using namespace std;
//
//const int N=1005;
//int n, g[N][N];
//int dx[4] = { -1,0,1,0 };
//int dy[4] = { 0,1,0,-1 };
//pair<int, int> path[N][N];
//
////int cnt = 0;
//void bfs(int x, int y)
//{
//	pair<int, int> node = { x,y };
//	queue<pair<int, int>> q;
//	q.push(node);
//	g[x][y] = 1;
//	while (q.size())
//	{
//		pair<int, int> u = q.front();
//		q.pop();
//		for (int i = 0; i < 4; i++)
//		{
//			int a = u.first + dx[i];
//			int b = u.second + dy[i];//这里i写成了1
//			if (a < 0 || a >= n || b < 0 || b >= n)continue;
//			if (g[a][b])continue;
//			g[a][b] = 1;
//			q.push({ a,b });
//			path[a][b] = u;
//			if (a == n - 1 && b == n - 1)return;
//		}
//	}
//
//}
//void print(int x, int y)
//{
//	if (x == 0 && y == 0)
//	{	
//		printf("(0,0)\n");
//		return;
//	}
//	//cnt++;
//	print(path[x][y].first, path[x][y].second);
//	cout << '(' << x << ',' << y << ')' << endl;
//}
//int main()
//{
//	//cin >> n;
//	n = 5;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> g[i][j];
//		}
//	}
//	bfs(0, 0);
//	print(n - 1, n - 1);
//	//cout << cnt;
//	return 0;
//}
