////https://www.luogu.com.cn/problem/P4552#ide
//#include <iostream>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//using LL = long long;
//const int N = 1e5 + 5;
//LL a[N],b[N],n;
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//        b[i] = a[i] - a[i - 1];
//    }
//    LL q=0, p=0;
//    for (int i = 2; i <= n; i++)
//    {
//        if (b[i] > 0)q += b[i];
//        else p += b[i];
//    }
//    p = -p;//È¡¾ø¶ÔÖµ
//    cout << max(p, q) << "\n" << abs(p - q) + 1;
//    return 0;
//}
