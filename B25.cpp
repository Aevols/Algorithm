////迭代加深,中和了dfs和bfs
////https://www.luogu.com.cn/problem/UVA529
//#include<iostream>
//using namespace std;
//const int N = 1e4+5;
//int a[N], d, n;
//bool dfs(int u)
//{
//	if(u==d)return a[u-1] == n;
//	for (int i = u - 1; i >= 0; i--)
//	{
//		a[u] = a[u - 1] + a[i];
//		int t = a[u];
//		if (t > n)continue;//剪枝
//		for (int j = u + 1; j <= d; j++) t *= 2;
//		if (t < n) return false; //估价未来
//		if (dfs(u + 1)) return true;
//	}
//	return false;
//}
//int main()
//{	
//	a[0] = 1;
//	while (scanf("%d", &n), n)
//	{
//		d = 1;
//		while (!dfs(1))d++;
//		for (int i = 0; i < d; i++)cout << a[i]<<" ";
//		cout << "\n";
//	}
//}