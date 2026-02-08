////æÿ’Ûº”ÀŸ
////https://www.luogu.com.cn/problem/P1962
//#include <iostream>
//#include <cstring>
//#include <vector>
//#include<algorithm>
//using namespace std;
//typedef long long LL;
//const int mod_num = 1e9 + 7;
//LL n;
//struct matrix
//{
//    LL m[3][3];
//    matrix() { memset(m, 0, sizeof m); }
//    matrix operator * (matrix& other)
//    {
//        matrix ans;
//        for(int i=1;i<=2;i++)
//            for(int j=1;j<=2;j++)
//                for (int k = 1; k <= 2; k++)
//                {
//                    ans.m[i][j] += this->m[i][k] * other.m[k][j];
//                    ans.m[i][j] %= (LL)mod_num;
//                }
//        return ans;
//    }
//}f,mul;
//void quickpow(LL n) 
//{   
//    if (n == 1 || n == 2)
//    {
//        cout << 1;
//        return;
//    }
//    n = n - 2;
//    while (n)
//    {
//        if (n & 1)f = f * mul;
//        mul=mul * mul;
//        n >>= 1;
//    }
//    cout << f.m[1][1];
//    return;
//}
//int main()
//{
//    cin >> n;
//    f.m[1][1] = 1;f.m[1][2] = 1;
//    mul.m[1][1] = 1; mul.m[1][2] = 1; mul.m[2][1] = 1; 
//    quickpow(n);
//    return 0;
//}
//https://www.luogu.com.cn/problem/P1939
//#include <iostream>
//#include <cstring>
//using namespace std;
//typedef long long LL;
//const int mod_num = 1e9 + 7;
//
//struct matrix
//{
//    LL m[4][4];
//    matrix() { memset(m, 0, sizeof m); }
//    matrix operator * (const matrix& other) const
//    {
//        matrix ans;
//        for (int i = 1; i <= 3; i++)
//            for (int j = 1; j <= 3; j++)
//                for (int k = 1; k <= 3; k++)
//                {
//                    ans.m[i][j] = (ans.m[i][j] + m[i][k] * other.m[k][j]) % mod_num;
//                }
//        return ans;
//    }
//};
//
//LL quickpow(LL n)
//{
//    if (n <= 3) return 1;
//
//    // ≥ı º◊¥Ã¨ S3 = [a3, a2, a1] = [1,1,1]
//    matrix f;
//    f.m[1][1] = 1;
//    f.m[1][2] = 1;
//    f.m[1][3] = 1;
//
//    // ◊™“∆æÿ’Û
//    matrix mul;
//    mul.m[1][1] = 1; mul.m[1][3] = 1;
//    mul.m[2][1] = 1;
//    mul.m[3][2] = 1;
//
//    n = n - 3;
//    while (n)
//    {
//        if (n & 1) f = f * mul;
//        mul = mul * mul;
//        n >>= 1;
//    }
//
//    return f.m[1][1];
//}
//
//int main()
//{
//    int T;
//    cin >> T;
//
//    while (T--)
//    {
//        LL n;
//        cin >> n;
//        cout << quickpow(n) << '\n';
//    }
//
//    return 0;
//}