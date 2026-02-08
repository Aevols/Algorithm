////https://www.luogu.com.cn/problem/P3368
////树状数组
//#include<iostream>
//using namespace std;
//using LL = long long;
//const int N = 5e5 + 5;
//inline int lowbit(int i)
//{
//	return i & -i;
//}
//
//LL arr[N], init[N]; // arr：维护差分数组的树状数组；init：存储初始数组值
//LL n, m;
//void add(int i, int v)
//{
//	while (i <= n)
//	{
//		arr[i] += v;
//		i += lowbit(i);
//	}
//}
//LL sum(int x)
//{
//	LL ans = 0; // 改为LL避免溢出
//	while (x)
//	{
//		ans += arr[x];
//		x -= lowbit(x);
//	}
//	return ans;
//}
//int main()
//{
//	cin >> n >> m;
//	LL num; // 改为LL适配数据范围
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num;
//		init[i] = num; // 存储初始值
//	}
//	int op, x, y, k;
//	while (m--)
//	{
//		cin >> op;
//		if (op == 1)//区间加数值
//		{
//			cin >> x >> y >> k;
//			add(x, k);
//			if (y + 1 <= n) add(y + 1, -k); // 避免越界
//		}
//		if (op == 2)//查询单点值
//		{
//			cin >> x;
//			cout << init[x] + sum(x) << endl;
//		}
//	}
//	return 0;
//}