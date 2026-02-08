//// 有向无环图的最长路 拓扑排序 O(n)
// 因为拓扑排序计算后续节点时，前面的节点已经计算完了。
//#include<iostream>
//#include<vector>
//#include<cstring>
//#include<queue>
//
//using namespace std;
//
//const int N = 1505, M = 50010;
//int n, m, a, b, c;
//vector<pair<int, int>> e[N];
//int rd[N], d[N];
//
//void topo() 
//{
//    memset(d, 0x80, sizeof d); //-2139062144
//    d[1] = 0; d[n] = -1;
//    queue<int> q;
//    for (int i = 1; i <= n; i++) if (!rd[i]) q.push(i);
//    while (q.size()) 
//    {
//        int u = q.front(); q.pop();
//        for (auto edge : e[u]) 
//        {
//            int v = edge.first;
//            int w = edge.second;
//            d[v] = max(d[v], d[u] + w);
//            if (--rd[v] == 0) q.push(v);
//        }
//    }
//}
//int main() 
//{
//    cin >> n >> m;
//    for (int i = 0; i < m; i++) 
//    {
//        cin >> a >> b >> c;
//        e[a].push_back({ b,c });
//        rd[b]++; //入度
//    }
//    topo();
//    cout << d[n];
//}