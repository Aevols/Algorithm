////https://www.luogu.com.cn/problem/P1347
//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//using namespace std;
//const int N = 30;
//
//int n, m;
//vector<int> g[N];
//int indeg[N];
//
//bool topo_check(vector<int>& order, bool& unique)
//{
//    queue<int> q;
//    order.clear();//清除拓扑序，重新开始
//    unique = true;
//    int tmp_indeg[N];//临时入度，不影响下次求拓扑序
//    for (int i = 1; i <= n; i++)
//        tmp_indeg[i] = indeg[i];
//    for (int i = 1; i <= n; i++)
//        if (tmp_indeg[i] == 0)
//            q.push(i);
//    while (!q.empty())
//    {
//        if (q.size() > 1)
//            unique = false;
//        int u = q.front();
//        q.pop();
//        order.push_back(u);
//        for (int v : g[u])
//        {
//            tmp_indeg[v]--;
//            if (tmp_indeg[v] == 0)
//                q.push(v);
//        }
//    }
//    return  order.size() == n;
//}
//
//int main()
//{
//    cin >> n >> m;
//    string s;
//    vector<int> order;
//    for (int i = 1; i <= m; i++)
//    {
//        cin >> s;
//        int u = s[0] - 'A' + 1;
//        int v = s[2] - 'A' + 1;
//        g[u].push_back(v);
//        indeg[v]++;
//        bool unique;
//        bool acyclic = topo_check(order, unique);
//        if (!acyclic)
//        {
//            cout << "Inconsistency found after " << i << " relations.";
//            return 0;
//        }
//        if (unique)
//        {
//            cout << "Sorted sequence determined after " << i << " relations: ";
//            for (int x : order)
//                cout << char('A' + x - 1);
//            cout << ".";
//            return 0;
//        }
//    }
//    cout << "Sorted sequence cannot be determined.";
//    return 0;
//}
