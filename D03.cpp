////Bellman-Ford算法
////https://www.luogu.com.cn/problem/P3385
//#include <iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//const int N = 2e3 + 5, M = 2 * N;
//const int inf = 0x3f3f3f3f;
//int t, n, m;
//int h[N], to[M], ne[M], w[M], cnt;
//int dis[N];
//void add(int u, int v, int weight)
//{
//    to[++cnt] = v; w[cnt] = weight; ne[cnt] = h[u]; h[u] = cnt;
//}
//bool ford(int s)
//{
//    memset(dis, 0x3f, sizeof dis);
//    dis[s] = 0;
//    bool flag = false;
//    for (int i = 1; i <= n; i++)//进行n轮松弛操作
//    {   
//        //这里忘了重置falg
//        flag = false;
//        for (int u = 1; u <= n; u++)//遍历n个节点
//        {
//            if (dis[u] != inf)
//                for (int j = h[u]; j; j = ne[j])
//                {
//                    int v = to[j], weight = w[j];
//                    if (dis[v] > dis[u] + weight) //如果有更优更新
//                    { dis[v] = dis[u] + weight, flag = true; }
//                }
//        }
//        if (!flag)break;
//    }
//    return flag;
//}
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> t;
//    while (t--)
//    {   
//        cnt = 0;
//        memset(h, 0, sizeof h);
//        cin >> n >> m;
//        int u, v, w;
//        while (m--)
//        {
//            cin >> u >> v >> w;
//            add(u, v, w); 
//            if(w>=0)add(v, u, w);
//        }
//        if (ford(1))cout << "YES\n";
//        else cout << "NO\n";
//    }
//    return 0;
//}
//优化版：SPFA算法
//#include <iostream>
//#include<algorithm>
//#include<cstring>
//#include<queue>
//using namespace std;
//const int N = 3e3 + 5, M = 2 * N;
//const int inf = 0x3f3f3f3f;
//int t, n, m;
//int h[N], to[M], ne[M], w[M], cnt;
//int dis[N],vis[N],counts[N];
//void add(int u, int v, int weight)
//{
//    to[++cnt] = v; w[cnt] = weight; ne[cnt] = h[u]; h[u] = cnt;
//}
//bool spfa(int s)
//{
//    memset(dis, 0x3f, sizeof dis);
//    memset(vis, 0, sizeof vis);
//    memset(counts, 0, sizeof counts);
//    dis[s] = 0;
//    //bool flag = false;
//    queue<int> q; q.push(s); vis[s] = 1;
//        //这里忘了重置falg
//        //flag = false;
//    while (q.size())
//    {
//        int u = q.front(); q.pop(); vis[u] = 0;
//        for (int j = h[u]; j; j = ne[j])
//        {
//            int v = to[j], weight = w[j];
//            if (dis[v] > dis[u] + weight) //如果有更优更新
//            {
//                dis[v] = dis[u] + weight;
//                if (!vis[v])q.push(v), vis[v] = 1;
//                counts[v] = counts[u] + 1; //边数
//                if (counts[v] >= n) return 1; //有负环   
//            }
//        }
//    }
//    return 0;
//}
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> t;
//    while (t--)
//    {   
//        cnt = 0;
//        memset(h, 0, sizeof h);
//        cin >> n >> m;
//        int u, v, w;
//        while (m--)
//        {
//            cin >> u >> v >> w;
//            add(u, v, w); 
//            if(w>=0)add(v, u, w);
//        }
//        if (spfa(1))cout << "YES\n";
//        else cout << "NO\n";
//    }
//    return 0;
//}
