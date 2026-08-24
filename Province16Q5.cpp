//#include <iostream>
//#include<algorithm>
//using namespace std;
//const int N = 1e5 + 5;
//long long a[N], n, m,d[N];
//long long ans, window;
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> m;
//    for (int i = 0; i < n; i++)cin >> a[i];
//    sort(a, a + n);
//    for (int j = 1; j < n; j++)d[j] = a[j]*a[j] - a[j - 1]*a[j-1];
//    //先算第一个窗口大小(但不包含最后一个元素）
//    for (int i = 1; i <= m - 1; i++)window += d[i];
//    ans = window;
//    //滑动窗口
//    for (int l = 1, r = m - 1; r < n - 1;)
//    {
//        window -= d[l++];
//        window += d[++r];
//        ans=ans < window ? ans : window;
//    }  
//    cout << ans;
//    return 0;
//}
