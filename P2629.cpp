////https://www.luogu.com.cn/problem/P2629
////前缀和+单调队列
////将原数组扩充成原来的两倍，成为数组B
////并计算B的前缀和S，要想老板不发火就是Si-Sk>=0（i∈（k+1，k+n-1））
////这是一个长度固定为 n 的滑动窗口最小值问题。
//#include<iostream>
//#include<deque>
//using namespace std;
//const int N = 1e6 + 5;
//int n,ans=0;
//long long b[2 * N], s[2 * N];
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> b[i];
//		b[i + n] = b[i];
//	}
//	//求前缀和
//	for (int i = 1; i <= 2 * n; i++)
//		s[i] = b[i] + s[i - 1];
//	//滑动窗口
//	deque<int> q;
//	for (int i = 1; i <= n; i++)
//	{	
//		//入队
//		while (!q.empty() && s[q.back()] >= s[i])//防止队空继续出队bug
//			q.pop_back();
//		q.push_back(i);
//	}
//	for (int k = 1; k <= n; k++)
//	{
//		// 1. 移除过期
//		while (!q.empty() && q.front() < k)
//			q.pop_front();
//
//		// 2. 判定
//		if (s[q.front()] >= s[k - 1])
//			ans++;
//
//		// 3. 插入新元素 k+n
//		int idx = k + n;
//		while (!q.empty() && s[q.back()] >= s[idx])
//			q.pop_back();
//		q.push_back(idx);
//	}
//	cout << ans;
//}