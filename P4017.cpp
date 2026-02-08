////https://www.luogu.com.cn/problem/P4017
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <cstring>
//
//using namespace std;
//
//const int N = 5005;
//const int M = 80112002;
//int n, m, x, y, ans;
//int rd[N], cd[N], f[N]; // f[v]走到v点的路径条数
//vector<int> e[N];
//
//void topo()
//{
//    queue<int> q;
//    for (int i = 1; i <= n; i++)
//    {
//        if (!rd[i])
//        {
//            q.push(i);
//            f[i] = 1; // 起点赋值1
//        }
//    }
//    while (q.size())
//    {
//        int u = q.front();
//        q.pop();
//        if (!cd[u])
//        {
//            ans = (ans + f[u]) % M; // 终点累计答案
//        }
//        for (int v : e[u])
//        {
//            f[v] = (f[v] + f[u]) % M;
//            if (--rd[v] == 0)
//            {
//                q.push(v);
//            }
//        }
//    }
//}
//
//int main()
//{
//    cin >> n >> m;
//    for (int i = 1; i <= m; i++)
//    {
//        cin >> x >> y;
//        e[x].push_back(y);
//        rd[y]++;
//        cd[x]++;
//    }
//    topo();
//    cout << ans;
//    return 0;
//}