////https://www.luogu.com.cn/problem/P1719#ide
//#include<iostream>
//#include<cmath>
//using namespace std;
//const int N = 125;
//int a[N][N], n;
//long long ans = -128;
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//		{
//			cin >> a[i][j];
//			ans = ans > a[i][j] ? ans : a[i][j];
//			a[i][j] = a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1] + a[i][j];
//		}
//	/*for (int i = 1; i <= n; i++)
//	{
//		cout << endl;
//		for (int j = 1; j <= n; j++)
//		{
//			cout << a[i][j] << " ";
//		}
//	}*/
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			for (int k = i + 1; k <= n; k++)
//				for (int l = j + 1; l <= n; l++)
//				{
//					int num = a[k][l] - a[i - 1][l] - a[k][j - 1] + a[i - 1][j - 1];
//					ans = ans > num ? ans : num;
//				}
//		}
//	}
//	cout << ans;
//	return 0;
//}