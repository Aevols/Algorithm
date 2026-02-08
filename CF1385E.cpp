//// https://www.luogu.com.cn/problem/CF1385E
////https://codeforces.com/problemset/problem/1385/E
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//const int N = 2e5 + 5;
//
//int t, n, m;
//vector<int> de[N];          // 已定向边
//vector<pair<int, int>> edge; // 保存所有边（含无向）
//int indeg[N];               // 仅统计已定向边入度
//int pos[N];                 // 拓扑序位置
//
//int main()
//{
//    cin >> t;
//    while (t--)
//    {
//        cin >> n >> m;
//        // 清图
//        for (int i = 1; i <= n; i++)
//        {
//            de[i].clear();
//            indeg[i] = 0;
//        }
//        edge.clear();
//
//        int state, x, y;
//        for (int i = 1; i <= m; i++)
//        {
//            cin >> state >> x >> y;
//            edge.push_back({ x, y });
//            if (state)
//            {
//                de[x].push_back(y);
//                indeg[y]++;
//            }
//        }
//        // 拓扑排序（只针对已定向边）
//        queue<int> q;
//        for (int i = 1; i <= n; i++)
//            if (indeg[i] == 0)
//                q.push(i);
//        vector<int> tp;
//        while (q.size())
//        {
//            int u = q.front(); q.pop();
//            tp.push_back(u);
//            for (int v : de[u])
//            {
//                if (--indeg[v] == 0)
//                    q.push(v);
//            }
//        }
//        // 判环
//        if ((int)tp.size() != n)
//        {
//            cout << "NO\n";
//            continue;
//        }
//        // 记录拓扑序位置
//        for (int i = 0; i < n; i++)
//            pos[tp[i]] = i;
//        // 输出答案
//        cout << "YES\n";
//        for (int i = 0; i < m; i++)
//        {
//            x = edge[i].first;
//            y = edge[i].second;
//            if (pos[x] < pos[y])
//                cout << x << " " << y << "\n";
//            else
//                cout << y << " " << x << "\n";
//        }
//    }
//    return 0;
//}
