////https://www.luogu.com.cn/problem/P16239
////设对于i分配ki天，题目可以由相乘问题转换为ln相加问题，
//// 即Σln(ai+ki*bi)，若对i的分配增加1，则整体增加
//// ln((ai+ki*bi+bi)/(ai+ki*bi))=ln(1+1/((ai/bi)+ki))
//// 每次对(ai/bi)+ki分配即可，初没有ki，对ai/bi排序令其为ci
////然后公式是1*（c2-c1)+2*(c3-c2)+.....+最后把剩余的k补进去，
//// 然后对把根据统计数据求值即可
//#include <iostream>
//#include <algorithm>
//#include <queue> 
//using namespace std;
//using LL = long long;
//const int N = 1e5 + 5;
//const int mod = 998244353;
//const double eps = 1e-12;
//int n;
//LL m;
//LL a[N], b[N];
//LL k[N];
//
//LL check(double lam) 
//{
//    LL sum = 0;
//    for (int i = 1; i <= n; i++) 
//    {
//        double val = 1.0 / lam - 1.0 * a[i] / b[i];
//        k[i] = val < 0 ? 0 : (LL)(val + eps);
//        sum += k[i];
//    }
//    return sum;
//}
//
//int main() 
//{
//    ios::sync_with_stdio(0), cin.tie(0);
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++) 
//    {
//        cin >> a[i] >> b[i];
//    }
//    double l = eps, r = 1e6;
//    for (int iter = 0; iter < 100; iter++) 
//    {
//        double mid = (l + r) / 2;
//        if (check(mid) > m) l = mid;
//        else r = mid;
//    }
//    LL sum = check(r);
//    LL rem = m - sum;
//    priority_queue<pair<double, int>> heap;
//    for (int i = 1; i <= n; i++) 
//    {
//        LL val = a[i] + k[i] * b[i];
//        double rate = 1.0 * b[i] / val;
//        heap.push({ rate, i });
//    }
//    // 分配剩余天数，O(rem logn)
//    while (rem--)
//    {
//        auto x = heap.top();
//        double rate = x.first; int pos = x.second;
//        heap.pop();
//        k[pos]++; // 给最优队员加1天
//        // 重新计算收益，放回堆
//        LL new_val = a[pos] + k[pos] * b[pos];
//        double new_rate = 1.0 * b[pos] / new_val;
//        heap.push({ new_rate, pos });
//    }
////输出
//    LL ans = 1;
//    for (int i = 1; i <= n; i++) {
//        LL val = (a[i] + k[i] * b[i]) % mod;
//        ans = ans * val % mod;
//    }
//    cout << ans << endl;
//
//    return 0;
//}