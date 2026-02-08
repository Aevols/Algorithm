////拓扑排序
////kahn（卡恩）算法和dfs算法
////https://www.luogu.com.cn/problem/B3644
////法一kahn
//#include <iostream>
//#include <string>
//#include <vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
//const int N = 105;
//vector<int> e[N], tp;
//int din[N];
//int n;
//bool TopoSort()
//{
//    queue<int> q;
//    for (int i = 1; i <= n; i++)
//        if (din[i] == 0)q.push(i);
//    while (q.size())
//    {
//        int a = q.front();
//        q.pop();
//        tp.push_back(a);
//        for (auto b : e[a])
//        {
//            if (--din[b] == 0)q.push(b);
//        }
//    }
//    return tp.size() == n;
//}
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        int num;
//        while (cin >> num)
//        {
//            if (num == 0)break;
//            e[i].push_back(num);
//            din[num]++;
//        }
//    }
//    if (TopoSort() == 0)cout << -1;
//    else
//    {
//        for (int i = 0; i < n; i++)cout << tp[i]<<" ";
//    }
//    return 0;
//}
//法二:变色dfs
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 105;
//vector<int> e[N], tp;
//int c[N]; // 颜色标记：0-未访问，1-访问中，2-访问完
//int n;
//
//// 返回值：true 表示无环，false 表示有环
//bool dfs(int u)
//{
//    c[u] = 1; // 标记为正在访问（灰色）
//
//    for (int v : e[u])
//    {
//        if (c[v] == 1) return false; // 发现返祖边，说明有环
//        if (c[v] == 0 && !dfs(v)) return false; // 继续深搜
//    }
//
//    c[u] = 2; // 标记为访问完毕（黑色）
//    tp.push_back(u); // 关键：后序遍历入队
//    return true;
//}
//
//bool TopoSort()
//{
//    // 因为可能存在多个连通分量，需要遍历每个节点
//    for (int i = 1; i <= n; i++)
//    {
//        if (c[i] == 0)
//        {
//            if (!dfs(i)) return false;
//        }
//    }
//    // DFS 得到的是逆拓扑序，需要翻转
//    reverse(tp.begin(), tp.end());
//    return true;
//}
//
//int main()
//{
//    
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        int num;
//        while (cin >> num && num != 0)
//        {
//            e[i].push_back(num);
//        }
//    }
//
//    if (!TopoSort())
//    {
//        cout << -1;
//    }
//    else
//    {
//        for (int i = 0; i < n; i++)
//        {
//            cout << tp[i] << (i == n - 1 ? "" : " ");
//        }
//    }
//    return 0;
//}
