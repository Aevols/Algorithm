//https://www.luogu.com.cn/problem/P1111
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//int n, m;
//const int N = 1e5 + 5;
//struct Record
//{
//    int x, y, t;
//
//};
//Record records[N];
//bool check(int mid)
//{
//
//}
//// 二分查找+并查集
//int main()
//{
//    cin >> n >> m;
//    int x, y, t;
//    for (int i = 1; i <= m; i++)
//    {
//        cin >> records[i].x >> records[i].y >> records[i].t;
//    }
//    //二分查找
//    int l = 0, r = N, mid;
//    while (l + 1 < r)
//    {
//        mid = l + r >> 1;
//        //如果时间够
//        if (check(mid))r = mid;
//        else l = mid;
//    }
//    cout << r;
//    return 0;
//}
//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//// N 是村庄数 <= 1000
//const int MAX_VILLAGES = 1005;
//// M 是公路数和最大时间 <= 10^5
//const int MAX_RECORDS = 100005;
//const int MAX_TIME = 100001; // 时间 t <= 10^5
//
//int n, m;
//struct Record
//{
//    int x, y, t;
//};
//Record records[MAX_RECORDS];
//
//// ======================= 并查集 (DSU) 实现 =======================
//int parent[MAX_VILLAGES]; // 存储父节点
//int set_count;            // 连通分量计数器
//
//// 查找操作 (带路径压缩)
//int find_set(int v)
//{
//    if (v == parent[v])
//        return v;
//    return parent[v] = find_set(parent[v]);
//}
//
//// 合并操作
//void union_sets(int a, int b)
//{
//    a = find_set(a);
//    b = find_set(b);
//    if (a != b) {
//        parent[b] = a;
//        set_count--; // 每合并一次，连通分量减少 1
//    }
//}
//
//// 初始化并查集
//void init_dsu()
//{
//    set_count = n;
//    for (int i = 1; i <= n; ++i) {
//        parent[i] = i;
//    }
//}
//// =================================================================
//
//// 检查逻辑：在时间 t=mid 时，是否所有村庄都已连通
//bool check(int mid)
//{
//    // 1. 初始化并查集
//    init_dsu();
//
//    // 2. 考虑所有修复时间 <= mid 的公路
//    for (int i = 1; i <= m; i++)
//    {
//        if (records[i].t <= mid)
//        {
//            union_sets(records[i].x, records[i].y);
//        }
//    }
//
//    // 3. 检查连通性
//    // 如果连通分量数量为 1，则所有村庄连通
//    return set_count == 1;
//}
//
//int main()
//{
//
//    cin >> n >> m;
//
//    for (int i = 1; i <= m; i++)
//    {
//        cin >> records[i].x >> records[i].y >> records[i].t;
//    }
//
//    // 边界条件检查：如果只有 1 个村庄，答案是 0 (或根据题意，通常是 0)
//    if (n == 1) 
//    {
//        cout << 0 << "\n";
//        return 0;
//    }
//
//    // 二分查找的范围：
//    // l = 0 (时间 0)
//    // r = MAX_TIME (比最大修复时间 10^5 稍大一点)
//    int l = 0, r = MAX_TIME;
//    int mid;
//
//    // 检查最坏情况：即使所有公路都修完 (时间 MAX_TIME) 也不连通
//    // 如果 check(MAX_TIME) 失败，则输出 -1
//    if (!check(MAX_TIME))
//    {
//        cout << -1 << "\n";
//        return 0;
//    }
//
//    // 二分查找：寻找满足 check 的最小时间 r
//    while (l + 1 < r)
//    {
//        mid = l + r >> 1; // 等同于 (l + r) / 2
//        // 如果 mid 时间可以连通，尝试更早的时间 [l, mid)
//        if (check(mid))
//        {
//            r = mid;
//        }
//        // 否则时间不够，需要更多时间 (mid, r)
//        else 
//        {
//            l = mid;
//        }
//    }
//
//    // r 即为最早的连通时间
//    cout << r << "\n";
//
//    return 0;
//}