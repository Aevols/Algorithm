////https://www.luogu.com.cn/problem/P1199
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int a[505][505];
//int main() 
//{
//    int n;
//    if (!(cin >> n)) return 0;
//    for (int i = 1; i < n; i++) 
//    {
//        for (int j = i + 1; j <= n; j++) 
//        {
//            int val;
//            cin >> val;
//            a[i][j] = a[j][i] = val;
//        }
//    }
//
//    int ans = 0;
//    for (int i = 1; i <= n; i++) 
//    {
//        // 找到第 i 行中的最大和次大值
//        int max1 = 0, max2 = 0;
//        for (int j = 1; j <= n; j++) 
//        {
//            if (a[i][j] > max1) 
//            {
//                max2 = max1;
//                max1 = a[i][j];
//            }
//            else if (a[i][j] > max2)
//            {
//                max2 = a[i][j];
//            }
//        }
//        // 我们能拿到的组合价值取决于所有“次大值”里的最大值
//        if (max2 > ans) ans = max2;
//    }
//
//    cout << 1 << endl;
//    cout << ans << endl;
//
//    return 0;
//}