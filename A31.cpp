////https://www.luogu.com.cn/problem/P2512#ide
//#include <iostream>
//#include<algorithm>
//using namespace std;
//using LL = long long;
//const int N = 1e6 + 5;
//LL a[N], c[N], n, avg, ans;
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i]; avg += a[i];
//    }
//    avg /= n;
//    for (int i = 2; i <= n; i++)
//    {
//        c[i] = c[i - 1] + a[i - 1] - avg;
//    }
//    sort(c + 1, c + n + 1);
//    LL x = c[n / 2 + 1];
//    for (int i = 1; i <= n; i++)
//    {
//        ans += abs(x - c[i]);
//    }
//    cout << ans;
//    return 0;
//}
