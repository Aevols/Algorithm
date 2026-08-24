////https://www.luogu.com.cn/problem/P1120
//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N = 70;
//int used[N], a[N], n;
//int len,cnt,sum=0;
//void dfs(int bar, int cur, int start)
//{	
//	if (bar > cnt) { cout << len; exit(0);}
//	//开辟新的棍子,不成功直接返回，其实也可以不返回，时间会久一点
//	if (cur == len) { dfs(bar + 1, 0, 1); return; }
//	for (int i = start; i <= n; i++)
//	{
//		if (!used[i] && cur + a[i] <= len) 
//		{
//			used[i] = 1; dfs(bar, cur + a[i], i + 1); used[i] = 0;
//			if (cur == 0) return;
//			if (cur + a[i] == len) return;
//			while (a[i] == a[i + 1]) i++;
//		}	
//	}
//}
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++) { cin >> a[i]; sum += a[i]; }
//	sort(a + 1, a + n + 1);
//	reverse(a + 1, a + n + 1);
//	for (int i = a[1]; i <= sum; i++)
//	{
//		if (sum % i == 0) 
//		{ len = i, cnt = sum / i; dfs(1, 0, 1); }
//	}
//}