//#include<iostream>
//#include<cmath>
//using namespace std;
//const int N=5005;
//
//int n, m;
//int g[N][N];
//int ans = 0;
//int main()
//{
//	cin >> n >> m;
//	int x1, x2, y1, y2;
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> x1 >> y1 >> x2 >> y2;
//		g[x1][y1]++;
//		g[x1][y2 + 1]--;
//		g[x2 + 1][y1]--;
//		g[x2 + 1][y2 + 1]++;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			g[i][j] = g[i][j] + g[i - 1][j] + g[i][j - 1] - g[i - 1][j - 1];
//			cout << g[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}