////https://www.luogu.com.cn/problem/P10452
////找中位数，如果再往后拓展可以和对顶堆结合
//#include <iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//const int N = 1e5 + 5;
//int arr[N],n;
//long long ans = 0;
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n;
//    for (int i = 0; i < n; i++)cin >> arr[i];
//    sort(arr, arr + n);
//    for (int i = 0; i < n; i++)
//        ans += abs(arr[i] - arr[n / 2]);
//    cout << ans;
//    return 0;
//}
// 
// 
//https://www.luogu.com.cn/problem/CF1486B
//这道题是否需要去重，应该是不要的
//#include <iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//using LL = long long;
//int t;
//void fun1()
//{
//    LL n, x, y;
//    vector<LL> X, Y;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> x >> y;
//        X.push_back(x);
//        Y.push_back(y);
//    }
//    sort(X.begin(), X.begin() + n);
//    sort(Y.begin(), Y.begin() + n);
//    if (n % 2 == 1)cout << 1 << "\n";
//    else cout << 1LL * (X[n / 2] - X[n / 2 - 1] + 1) * (Y[n / 2] - Y[n / 2 - 1] + 1) << "\n";
//}
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> t;
//    while (t--)
//    {
//        fun1();
//    }
//    return 0;
//}
//

