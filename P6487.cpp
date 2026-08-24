////https://www.luogu.com.cn/problem/P6487
//#include <iostream>
//#include <vector>
//using namespace std;
//typedef long long ll;
//void solve()
//{
//    ll n;
//    if (!(cin >> n))
//    {
//        return;
//    }
//    // 预处理斐波那契数列
//    vector<ll> fib;
//    fib.push_back(1);
//    fib.push_back(2);
//    while (fib.back() < n)
//    {
//        ll next_fib = fib[fib.size() - 1] + fib[fib.size() - 2];
//        if (next_fib > n)
//        {
//            break;
//        }
//        fib.push_back(next_fib);
//    }
//    // 齐肯多夫分解（贪心法）
//    // 我们要找分解中最小的一个，也就是分解过程中最后剩下的那个值
//    ll last_taken = 0;
//    for (int i = fib.size() - 1; i >= 0; i--)
//    {
//        if (n >= fib[i])
//        {
//            n -= fib[i];
//            last_taken = fib[i];
//        }
//    }
//    cout << last_taken << endl;
//}
//
//int main()
//{
//    solve();
//    return 0;
//}