//#include <iostream>
//#include <algorithm>
//using namespace std;
//typedef long long ll;
//void solve() 
//{
//    ll a, b, c, k;
//    if (!(cin >> a >> b >> c >> k)) return;
//    ll limit = min(k, 100LL);
//    for (int i = 0; i < limit; ++i) 
//    {
//        ll na = (b + c) / 2;
//        ll nb = (a + c) / 2;
//        ll nc = (a + b) / 2;
//        // 如果产值已经不再变化，提前退出
//        if (na == a && nb == b && nc == c) break;
//        a = na;
//        b = nb;
//        c = nc;
//    }
//    cout << a << " " << b << " " << c << "\n";
//}
//int main() 
//{
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    int t;
//    cin >> t;
//    while (t--) 
//    {
//        solve();
//    }
//    return 0;
//}