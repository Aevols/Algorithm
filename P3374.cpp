////https://www.luogu.com.cn/problem/P3374
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
//LL arr[N], n, m;
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
//	int ans = 0;
//	while (x)
//	{
//		ans += arr[x];
//		x -= lowbit(x);
//	}
//	return ans;
//}
//int main()
//{
//	cin >> n>> m;
//	int num;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num;
//		add(i,num);
//	}
//	int op, x, y;
//	while (m--)
//	{
//		cin >> op >> x >> y;
//		if (op == 1)//添加数值
//			add(x, y);
//		if (op == 2)//添加数值
//			cout << sum(y) - sum(x - 1) << endl;
//	}
//}