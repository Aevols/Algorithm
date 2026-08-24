////dfs剪枝
////https://www.luogu.com.cn/problem/U207723
////#include<bits/stdc++.h>
////0下标开始
//#include<iostream>
//#include<vector>
//using namespace std;
//int n, cnt,arr[15];
//int ans=15;
//vector<int> g[15];
//int gcd(int a, int b)
//{
//	return b == 0 ? a : gcd(b, a % b);
//}
//bool coprime(int a, int b)//互合函数,如果互合返回真
//{	
//	
//	if (a < b) { int temp; temp = a; a = b; b = temp; }//交换大小
//	if (gcd(a, b) > 1)return true;
//	return false;
//}
//void dfs(int seq)
//{	//提前判断防止冗余
//	if (cnt > ans)return;
//	//边界条件
//	if (seq == n) { ans = min(ans, cnt); return;}
//	int u = arr[seq];
//	//先尝试放入其他组
//	for (int i = 0; i < cnt; i++)//遍历之前有多少组
//	{	
//		bool state = false;//反映是否互质
//		for (int v : g[i])if (coprime(u, v)) { state = true; break; }
//		if (state)continue;
//		g[i].push_back(u);
//		dfs(seq + 1);
//		g[i].pop_back();
//	}
//	//另开一个组
//	g[cnt++].push_back(u);
//	dfs(seq + 1);
//	g[--cnt].pop_back();
//}
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < n; i++)cin >> arr[i];
//	g[0].push_back(arr[0]); cnt++;
//	dfs(1);
//	cout << ans;
//}