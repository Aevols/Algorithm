//////Dijkstra算法+堆优化（复杂度n^2,优化后mlogm)
//////https://www.luogu.com.cn/problem/P3371
//////朴素版
////#include <iostream>
////#include<algorithm>
////#include<vector>
////#include<cstring>
////using namespace std;
////const int N = 1e4 + 5;
////struct Edge
////{
////    int v, w;
////};
////int n, m, s,dis[N];
////bool vis[N];
////vector<Edge>e[N];
////void dijkstra()
////{
////    memset(dis, 0x3f, sizeof dis);
////    dis[s] = 0;
////
////    for (int i = 1; i <=n; i++)//n轮选择节点
////    {   
////        int u = 0;
////        for (int j = 1; j <= n; j++)//选择最优节点
////            if (dis[j] < dis[u] && !vis[j])u = j;
////        //选好节点后做松弛操作
////        vis[u] = true;
////        for (int k = 0; k < e[u].size(); k++)
////        {
////            int v = e[u][k].v, w = e[u][k].w;
////            dis[v] = min(dis[v], dis[u] + w);
////        }
////    }
////    
////}
////int main()
////{
////    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
////    cin >> n >> m >> s;
////    int u, v, w;
////    for (int i = 0; i < m; i++)
////    {
////        cin >> u >> v >> w;
////        e[u].push_back({ v,w });
////    }
////    dijkstra();
////    for (int i = 1; i <= n; i++)cout << dis[i] << " ";
////    return 0;
////}
////
////法二：堆优化版本
//#include <iostream>
//#include<algorithm>
//#include<vector>
//#include<queue>
//#include<cstring>
//using namespace std;
//const int N = 1e5 + 5;
//const int INF = 2147483647; // 题目要求的无穷大
//struct Edge
//{
//    int v, w;
//};
//int n, m, s, dis[N];
//bool vis[N];
//vector<Edge>e[N];
//void dijkstra()
//{
//    // 手动初始化
//    for (int i = 1; i <= n; i++) dis[i] = INF;
//    dis[s] = 0;
//    //声明小根堆(把变量给负值就行了）
//    priority_queue<pair<int, int>> heap;
//    heap.push({ 0,s });
//    while (!heap.empty())
//    {
//        int u = heap.top().second, w = -heap.top().first;
//        dis[u] = min(dis[u], w);//更新距离
//        heap.pop();
//        if (vis[u])continue;
//        vis[u] = 1;
//        for (auto& edge : e[u])
//        {
//            int v = edge.v;
//            int distance = edge.w + w;
//            if(dis[v]>distance)
//                heap.push({-distance,v});
//        }
//    }
//
//}
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> m >> s;
//    int u, v, w;
//    for (int i = 0; i < m; i++)
//    {
//        cin >> u >> v >> w;
//        e[u].push_back({ v,w });
//    }
//    dijkstra();
//    for (int i = 1; i <= n; i++)
//        cout << dis[i] << " ";
//    return 0;
//}
