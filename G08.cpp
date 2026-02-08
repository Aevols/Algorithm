//https://www.luogu.com.cn/problem/P3383
//两种筛法，埃式筛法和欧拉筛法（线性筛法）
//埃式筛法
//#include<iostream>
//#include<cmath>
//using namespace std;
//typedef long long LL;
//const LL N = 1e8 + 5;
//LL n, q;
//int cnt = 0;
//LL prime[N];//存质数
//bool vis[N];
//void Eratosthenes(LL n)
//{
//	for (LL i = 2; i <= n; i++)
//	{	
//		if (vis[i])continue;
//		prime[++cnt] = i;
//		for (LL j = i * i; j <= n; j += i)
//			vis[j] = true;
//	}
//
//}
//int main()
//{	
//	std::ios::sync_with_stdio(0);
//	cin >> n >> q;
//	LL k;
//	Eratosthenes(n);
//	for (int i = 0; i < q; i++)
//	{
//		cin >> k;
//		cout << prime[k]<<endl;
//	}
//	return 0;
//}
//线性筛法
//#include<iostream>
//#include<cmath>
//using namespace std;
//typedef long long LL;
//const LL N = 1e8 + 5;
//LL n, q;
//int cnt = 0;
//LL prime[N];//存质数
//bool vis[N];
//void get_prim(int n) 
//{ //线性筛法
//	for (int i = 2; i <= n; i++) 
//	{
//		if (!vis[i]) prime[++cnt] = i;
//		for (int j = 1; 1ll * i * prime[j] <= n; j++) 
//		{
//
//			vis[i * prime[j]] = 1;
//			if (i % prime[j] == 0) break;
//		}
//	}
//}
//int main()
//{	
//	std::ios::sync_with_stdio(0);
//	cin >> n >> q;
//	LL k;
//	get_prim(n);
//	for (int i = 0; i < q; i++)
//	{
//		cin >> k;
//		cout << prime[k]<<endl;
//	}
//	return 0;
//}