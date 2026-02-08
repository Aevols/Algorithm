////数位DP
////注意注意注意visual studio在你忘记写dp函数的返回值的时候默认返回了0做返回值
////https://loj.ac/p/10164
//#include <iostream>
//#include <string>
//#include <vector>
//#include<algorithm>
//using namespace std;
//const int N = 12;//int最大大概是10^11小一点
//int a[N];     //把整数的每一位数字抠出来，存入数组 
//int f[N][N];  //f[i][j]表示一共有i位，且最高位数字是j的不降数的个数 
//
//void init()//预处理
//{
//    for (int i = 0; i <= 9; i++)f[1][i] = 1;//任何一位数都是不降数
//    for (int i = 2; i < N; i++)//遍历位数
//        for (int j = 0; j <= 9; j++)//枚举状态，这位数是几
//            for (int k = j; k <= 9; k++)//枚举次高位
//                f[i][j] += f[i - 1][k];
//}
//int dp(int n)
//{
//    if (n == 0)return 1;//特判0
//    int cnt = 0;
//    while (n) a[++cnt] = n % 10, n /= 10;//把每一位抠出来存入数组a
//
//    int ans = 0, last = 0;//last指上一位数字是几
//    for (int i = cnt; i >= 1; i--)//从最高位开始计算
//    {
//        int now = a[i];//当前位是多少
//        for (int j = last; j < now; j++)ans += f[i][j];
//        if (now < last)break;//如果这一位开始已经不是不降数了，没必要算了，直接跳出逻辑了
//        last = now;//更新last
//        if (i == 1)ans++;//特判自身，如果走到这一步了，它还有一个孩子是自身，但是我们没有把它加上，因为上述逻辑不允许这么做
//    }
//    return ans;
//}
//int main()
//{
//    init();//没问题
//    int l, r;
//    //cout << f[1][0];
//    while (cin >> l >> r) cout << dp(r) - dp(l - 1) << endl;
//    return 0;
//}
