////最大异或对
////https://www.luogu.com.cn/problem/P10471
//#include<iostream>
//#include<cmath>
//using namespace std;
//const int N = 1e5 + 5;
//int n;
//int tire[31 * N][2], cnt, nums[N];
//int ans;
//void insert(int num)
//{	
//	int p = 0;
//	for (int i = 30; i >= 0; i--)
//	{
//		int wei = (num >> i) & 1;
//		if (!tire[p][wei])tire[p][wei] = ++cnt;//这一句不是很熟练
//		p = tire[p][wei];
//	}
//}
//int query(int num)
//{
//	int p = 0, res = 0;
//	for (int i = 30; i >= 0; i--)
//	{	
//		
//		int wei = (num >> i) & 1;
//		if (tire[p][!wei])
//		{
//			res += (1 << i);//这里是左移，写反了
//			p = tire[p][!wei];
//		}
//		//因为每一位只有0或1两个选择，所以说如果上面没有下面一定成立
//		else p = tire[p][wei];
//	}
//	return res;
//}
//int main()
//{	
//	cin >> n;
//	for(int i=1;i<=n;i++)
//	{
//		cin >> nums[i];
//		insert(nums[i]);
//	}
//	for (int i = 1; i <= n; i++)
//		ans = max(ans, query(nums[i]));
//	cout << ans;
//}
//思路：异或自身的化为0，所以两路径异或和等同于二者对于根节点的异或和
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 100005;
//const int M = 31 * N;
//
//int n, ans;
//int d[N];
//int tire[M][2], cnt;
//
//struct Edge 
//{
//    int to, weight;
//};
//vector<Edge> adj[N];
//
//void insert(int num)
//{
//    int p = 0;
//    for (int i = 30; i >= 0; i--)
//    {
//        int wei = (num >> i) & 1;
//        if (!tire[p][wei]) tire[p][wei] = ++cnt;
//        p = tire[p][wei];
//    }
//}
//
//int query(int num)
//{
//    int p = 0, res = 0;
//    for (int i = 30; i >= 0; i--)
//    {
//        int wei = (num >> i) & 1;
//        if (tire[p][!wei])
//        {
//            res += (1 << i);
//            p = tire[p][!wei];
//        }
//        else p = tire[p][wei];
//    }
//    return res;
//}
//
//// 核心转化：利用异或自反性，将路径异或转为两个根路径异或
//void dfs(int u, int fa, int val)
//{
//    d[u] = val;
//    insert(d[u]);
//    for (auto& e : adj[u])
//    {
//        if (e.to == fa) continue;
//        dfs(e.to, u, val ^ e.weight);
//    }
//}
//
//int main()
//{
//    
//    if (!(cin >> n)) return 0;
//    for (int i = 0; i < n - 1; i++)
//    {
//        int u, v, w;
//        cin >> u >> v >> w;
//        adj[u].push_back({ v, w });
//        adj[v].push_back({ u, w });
//    }
//    dfs(1, 0, 0);
//    for (int i = 1; i <= n; i++)
//        ans = max(ans, query(d[i]));
//    cout << ans << endl;
//    return 0;
//}