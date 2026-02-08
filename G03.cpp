////矩阵快速幂
////https://www.luogu.com.cn/problem/P3390
//#include <iostream>
//#include <vector>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//const int N = 105;
//typedef long long LL;
//LL n, k;
//struct matrix
//{
//    LL m[N][N];
//    matrix() { memset(m, 0, sizeof m); }
//}A,res;
//matrix operator*(matrix& x, matrix& y)
//{
//    matrix ans;
//    //矩阵乘法
//    for (int i = 1; i <= n; i++)//遍历x的行
//        for (int j = 1; j <= n; j++)//遍历y的列
//            for (int k = 1; k <= n; k++)//遍历x的列和y的行
//                ans.m[i][j] += x.m[i][k] * y.m[k][j], ans.m[i][j] %=(LL)(1e9 + 7);
//
//    return ans;
//}
//void quickPow(LL k)
//{
//    //生成单位矩阵
//    for (int i = 1; i <= n; i++) res.m[i][i] = 1; //单位矩阵
//    while (k)
//    {
//        if (k & 1) res =res*A;
//        A = A * A;
//        k >>= 1;
//    }
//}
//int main()
//{
//    cin >> n >> k;
//    for (int i = 1; i <= n; i++)
//        for (int j = 1; j <= n; j++)
//            cin >> A.m[i][j];
//    quickPow(k);
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= n; j++)
//            cout << res.m[i][j] << " ";
//        cout << endl;
//    }
//       
//        
//    return 0;
//}
