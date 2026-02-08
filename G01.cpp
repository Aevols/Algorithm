////快速幂
////注：快速幂可以用在任何具有结和律的运算中例如取模和矩阵乘法
////能用long别用int，会爆内存
//#include <iostream>
//typedef long long LL;
//using namespace std;
//long a, b, p;
//int quick_pow(long a, long b, long p)
//{   
//    int s = 1;
//    while (b)
//    {
//        if (b & 1)s = s * a % p;
//        a =(LL) a * a%p;
//        b >>= 1;
//    }
//    return s;
//}
//int main()
//{
//    cin >> a >> b >> p;
//    printf("%d^%d mod %d=%d\n", a, b, p, quick_pow(a, b, p));
//    return 0;
//}
