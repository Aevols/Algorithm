//////https://www.luogu.com.cn/problem/P8218
////#include <iostream>
////#include<algorithm>
////using namespace std;
////const int N = 1e5;
////int arr[N], n, m;
////int main()
////{
////    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
////    cin >> n;
////    for (int i = 1; i <= n; i++)
////        cin >> arr[i], arr[i] += arr[i - 1];
////    cin >> m;
////    while (m--)
////    {
////        int l, r;
////        cin >> l >> r;
////        cout << arr[r] - arr[l - 1] << endl;
////    }
////    return 0;
////}
////https://www.luogu.com.cn/problem/P2280
////注意坐标是0 0开始的，所以有错的
//#include <iostream>
//#include<algorithm>
////#define int long long
//using namespace std;
//const int N = 5e3 + 5;
//int g[N][N], n, m,prsum[N][N],ans=0;
//signed main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> m;
//    int x, y,v;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> x >> y >> v;
//        g[x+1][y+1] += v;
//    }
//    //计算二维前缀和
//    for(int i=1;i<N;i++)
//        for (int j = 1; j <N; j++)
//        {
//            prsum[i][j] = prsum[i - 1][j] + prsum[i][j - 1] - prsum[i - 1][j - 1]+g[i][j];
//        }
//    //遍历边为m的区域
//    int asum = 0;
//    for(int i=1;i< N-m+1;i++)
//        for (int j = 1; j < N - m + 1; j++)
//        {
//            asum = prsum[i + m - 1][j + m - 1] - prsum[i - 1][j + m - 1]
//                - prsum[i + m - 1][j - 1] + prsum[i - 1][j - 1];
//            ans = ans > asum ? ans : asum;
//        }
//    cout << ans;
//    return 0;
//}
