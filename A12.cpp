////https://www.luogu.com.cn/problem/P3865
////ST Table
//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1e5 + 5;
//int n, m;
//int f[N][23];
//int lg[N];
//
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++) cin >> f[i][0];
//
//    lg[1] = 0;
//    for (int i = 2; i <= n; i++)
//        lg[i] = lg[i>>1] + 1;
//
//    for (int i = 1; i <= 20; i++)
//        for (int j = 1; j + (1 << i) - 1 <= n; j++)  // 修复边界
//            f[j][i] = max(f[j][i - 1], f[j + (1 << (i - 1))][i - 1]);
//
//    int l, r;
//    while (m--)
//    {
//        cin >> l >> r;
//        int k = lg[r - l + 1];  // 替换 log2(),因为容易有浮点误差
//        cout << max(f[l][k], f[r - (1 << k) + 1][k]) << '\n';  // endl 也换成 '\n',加快输出
//    }
//    return 0;
//}

