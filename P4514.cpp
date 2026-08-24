////https://www.luogu.com.cn/problem/P4514
//#include<iostream>
//using namespace std;
//using LL = long long;
//const int N = 2055;
//inline int lowbit(int i)
//{
//	return i & -i;
//}
//
//int n, m;
//LL info1[N][N], info2[N][N], info3[N][N], info4[N][N];
//
//void update(int x, int y, int v)
//{
//	for (int i = x; i <= n; i += lowbit(i))
//		for (int j = y; j <= m; j += lowbit(j))
//		{
//			info1[i][j] += v;
//			info2[i][j] += 1LL * v * x;
//			info3[i][j] += 1LL * v * y;
//			info4[i][j] += 1LL * v * x * y;
//		}
//}
//
//LL query(LL info[N][N], int x, int y)
//{
//	LL res = 0;
//	for (int i = x; i > 0; i -= lowbit(i))
//		for (int j = y; j > 0; j -= lowbit(j))
//			res += info[i][j];
//	return res;
//}
//
//LL prefix_sum(int x, int y)
//{
//	return 1LL * (x + 1) * (y + 1) * query(info1, x, y)
//		- 1LL * (y + 1) * query(info2, x, y)
//		- 1LL * (x + 1) * query(info3, x, y)
//		+ query(info4, x, y);
//}
//
//LL sum(int x1, int y1, int x2, int y2)
//{
//	return prefix_sum(x2, y2)
//		- prefix_sum(x1 - 1, y2)
//		- prefix_sum(x2, y1 - 1)
//		+ prefix_sum(x1 - 1, y1 - 1);
//}
//
//void add(int x1, int y1, int x2, int y2, int v)
//{
//	update(x1, y1, v);
//	update(x1, y2 + 1, -v);
//	update(x2 + 1, y1, -v);
//	update(x2 + 1, y2 + 1, v);
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	char c;
//	cin >> c >> n >> m;
//	int x1, x2, y1, y2, v;
//	while (cin >> c)
//	{
//		if (c == 'L')
//		{
//			cin >> x1 >> y1 >> x2 >> y2 >> v;
//			add(x1, y1, x2, y2, v);
//		}
//		else if (c == 'k')
//		{
//			cin >> x1 >> y1 >> x2 >> y2;
//			cout << sum(x1, y1, x2, y2) << endl;
//		}
//	}
//	return 0;
//}