////http://poj.org/problem?id=2449
////洛谷数据有问题，poj是能过的
//#include <iostream>
//#include<algorithm>
//#include<vector>
//#include<queue>
//#define pii pair<int,int>
//#define piii pair<pair<int,int>,int>
//using namespace std;
//const int N = 1e3 + 5, M = 1e5 + 5, inf = 1e9;
//struct edge { int to,w; };
//struct node 
//{
//    int s, to, d; 
//    bool operator<(const node& x)const
//    {
//        return s > x.s;
//    }
//};
//vector<edge> g[N], rg[N];
//int n, m,dis[N],vis[N], s, t, k,cnt[N];
//void dijkstra(int u)
//{
//    for (int i = 1; i <= n; i++) { dis[i] = inf; vis[i] = 0; }
//    priority_queue<pii, vector<pii>, greater<pii>> heap;
//    heap.push({ 0,u });
//    while (heap.size())
//    {
//        int v = heap.top().second, len = heap.top().first; 
//        heap.pop();
//        if (!vis[v] && len < dis[v])
//        {
//            vis[v] = 1; dis[v] = len;
//            for (auto i : rg[v])
//            {
//                int x = i.to, w = i.w;
//                if (len + w < dis[x])heap.push({ len + w,x });
//            }
//        }
//    }
//}
////int astar()
////{
////    priority_queue<node> q;
////    node a = { dis[s],s,0 };
////    q.push(a);
////    while (q.size())
////    {
////        node x = q.top(); q.pop();
////        int u = x.to;
////        cnt[u]++; //记录出队次数
////        if (cnt[t] == k)return x.d;
////        for (auto i : g[u])
////        {
////            int v = i.to, d = x.d + i.w;
////            if (cnt[v] < k)
////            {
////                node b = { d + dis[v],v,d };
////                q.push(b);
////            }
////        }
////    }
////    return -1;
////}
//int astar()
//{
//    // 【修复1】如果起点无法到达终点，直接返回无解，防止 inf 溢出导致 WA
//    if (dis[s] == inf) return -1;
//    priority_queue<node> q;
//    node a = { dis[s], s, 0 };
//    q.push(a);
//    while (q.size())
//    {
//        node x = q.top();
//        q.pop();
//        int u = x.to;
//        cnt[u]++; // 记录出队次数
//        // 【修复2】如果这个点已经出队超过 K 次，说明它已经是废状态了，直接跳过
//        if (cnt[u] > k) continue;
//        // 只有终点第 K 次出队，才是我们要的答案
//        if (u == t && cnt[t] == k) return x.d;
//        for (auto i : g[u])
//        {
//            int v = i.to;
//            int d = x.d + i.w;
//            // 理论精华：如果邻居已经找齐了 K 条最短路，就不配入队了
//            if (cnt[v] < k)
//            {
//                node b = { d + dis[v], v, d };
//                q.push(b);
//            }
//        }
//    }
//    return -1;
//}
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> m;
//    int a, b, weight; 
//    for (int i = 1; i <= m; i++)
//    {
//        cin >> a >> b >> weight;
//        g[a].push_back({ b, weight });
//        rg[b].push_back({ a, weight });
//    }
//    cin >> s >> t >> k;
//    dijkstra(t);
//    if (t == s) k++;
//    cout << astar();
//    return 0;
//}
