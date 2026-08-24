////TarjanÀ„∑®
//#include<iostream>
//#include<vector>
//using namespace std;
//const int N = 5e5+5;
//int n, m, s,ans[N],fa[N],vis[N];
//vector<int> e[N]; vector<pair<int, int>>query[N];
//int find(int x)
//{
//	return x == fa[x] ? x : fa[x] = find(fa[x]);
//}
//void tarjan(int u)
//{
//	vis[u] = 1;
//	for (int v : e[u])
//	{
//		if (vis[v])continue;
//		tarjan(v);
//		fa[v] = u;
//	}
//	for (int i = 0; i < query[u].size();i++)
//	{
//		int v = query[u][i].first, j = query[u][i].second;
//		if (vis[v])ans[j] = find(v);
//	}
//}
//int main()
//{	
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> n >> m >> s;
//	int x, y;
//	for (int i = 1; i < n; i++)
//	{
//		cin >> x >> y; e[x].push_back(y); e[y].push_back(x);
//		fa[i] = i;
//	}
//	fa[n] = n;
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> x >> y;
//		query[x].push_back({ y,i });
//		query[y].push_back({ x,i });
//	}
//	tarjan(s);
//	for (int i = 1; i <= m; i++)
//		cout << ans[i] << "\n";
//}