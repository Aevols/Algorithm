////https://www.luogu.com.cn/problem/P1972
//#include<iostream>
//#include<algorithm>
//using LL = long long;
//using namespace std;
//const int N = 1e6 + 5;
//int n, color[N], m;
//int crb[N];//某个元素出现的最右边的位置
//LL tree[N];//统计哪些位置出现了最新的不同元素（如果之前出现过该元素
////则更新位置）
//
//inline int lowbit(int i)
//{
//	return i & -i;
//}
////结构体和比较函数
//struct Message
//{
//	int id, l, r;
//	LL kinds = 0;
//	
//}msg[N];
//bool cmp1(const Message& a, const Message& b)
//{
//	return a.r == b.r ? a.l < b.l : a.r < b.r;
//}
//bool cmp2(const Message& a, const Message& b)
//{
//	return  a.id < b.id;
//}
////树状数组部分函数
//void update(int x, int y)//x位置更新y
//{
//	for (int i = x; i <= n; i += lowbit(i))
//		tree[i] += y;
//}
//LL query(int x)
//{	
//	LL sum = 0;
//	for (int i = x; i > 0; i -= lowbit(i))
//	{
//		sum += tree[i];
//	}
//	return sum;
//}
//
//int main()
//{	
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//		cin >> color[i];
//	cin >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		msg[i].id = i;
//		cin >> msg[i].l >> msg[i].r;
//	}
//	//排序
//	sort(msg + 1, msg + m + 1, cmp1);
//	int posi = 1, point = 1,col=0;//point指向记录.，col为posi指向的颜色
//	while (posi <= n)
//	{	
//		//拿到posi位置的颜色col
//		col = color[posi];
//		//如果该颜色之前出现过，那么tree要更新,先拿到在tree的位置
//		if (crb[col] != 0)
//		{
//			int x = crb[col];
//			update(x, -1);
//		}
//		//更新crb，以及tree
//		crb[col] = posi;
//		update(posi, 1);
//		//如果是右边界，可以使用查找
//		while (posi == msg[point].r)
//		{
//			msg[point].kinds = query(msg[point].r) - query(msg[point].l - 1);
//			point++;
//		}
//		posi++;
//	}
//	//排序输出
//	sort(msg + 1, msg + m + 1, cmp2);
//	for (int i = 1; i <= m; i++)
//		cout << msg[i].kinds << endl;
//	return 0;
//}