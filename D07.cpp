////prim算法
//#include <iostream>
//#include<algorithm>
//#include<vector>
//#include<queue>
//#define pii pair<int,int>
//using namespace std;
//const int N = 5005,inf=0x3f3f3f3f;
//struct Edge { int to, w; bool operator<(const Edge& t) { return w < t.w; } };
//vector<Edge> e[N];
//priority_queue<pii, vector<pii>, greater<pii>> heap;
//int n, m,ans=0,dis[N],vis[N];//dis表示与圈外点的距离
////bool prim(int s)
////{   
////    int cnt = 0;
////    for (int i = 0; i <= n; i++)dis[i] = inf;
////    dis[s] = 0;
////    for (int i = 1; i <= n; i++)//默认找n个点
////    {   
////        int u = 0;
////        for (int j = 1; j <= n; j++)//找最合适的点
////            if (!vis[j]&&dis[u] > dis[j])u = j;
////        //根据下方提示把这两行放在前侧
////        if (u) { cnt++; ans += dis[u]; vis[u] = 1; }
////        else break;
////        for (auto& k : e[u])
////        {
////            int v = k.to, w = k.w;
////            if (dis[v] > w && !vis[v])dis[v] = w;
////        }
////        /*if (u) { cnt++; ans += dis[u]; vis[u] = 1; }
////        else break;*///如果放在末尾更新时出现了自环边逻辑可能会出错的
////    }
////    return cnt == n;
////}
//bool prim_heap(int s)//堆优化版
//{   
//    int cnt = 0;
//    for (int i = 0; i <= n; i++)dis[i] = inf;
//    dis[s] = 0;
//    heap.push({ 0,s });//第一个元素是距离，第二个是加入的节点
//    while (heap.size())
//    {   
//        int u = heap.top().second; heap.pop();
//        if (vis[u])continue;
//        cnt++; ans += dis[u]; vis[u] = 1;
//        for (auto i : e[u])
//        {
//            int v = i.to, w= i.w;
//            if (dis[v] > w)heap.push({ w,v }), dis[v] = w;
//        } 
//    }
//    return cnt == n;
//}
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> m;
//    int x, y, z;
//    while (m--)
//    {
//        cin >> x >> y >> z;
//        e[x].push_back({ y,z });
//        e[y].push_back({ x,z });
//    }
//    if (prim_heap(1))cout << ans;
//    else cout << "orz";
//    return 0;
//}
