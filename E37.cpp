////数位dp
////https://www.luogu.com.cn/problem/P2657
//#include <iostream>
//#include <string>
//#include <vector>
//#include<algorithm>
//using namespace std;
//const int N = 12;
//int a[N];//把a的每一位存到a[N]中
//int f[N][N];//i位数，以j开头的windy数数量
//
//void init()
//{
//    for (int i = 0; i <= 9; i++)f[1][i] = 1;//默认一位数都是windy数
//    for (int i = 2; i < N; i++)//遍历位数
//        for (int j = 0; j <= 9; j++)//遍历状态
//            for (int k = 0; k <= 9; k++)//遍历次高位
//                if (abs(j - k) >= 2)f[i][j] += f[i - 1][k];
//}
//
//int dp(int n)
//{   
//    //这次特判为什么是返回0不返回1
//    //是因为这次我们没有把f[1][0]=1加进去
//    if (n == 0)return 0;
//    int ans = 0, last = -2;//last以-2开始，是0的话第一次就发生冲突
//    int cnt = 0;//记录有多少位数字
//    while (n)a[++cnt] = n % 10, n /= 10;
//    for (int i = cnt; i >= 1; i--)//从最高位开始枚举
//这里把i--写成i++了 
//
//    {
//        int now = a[i];//指出当前位数字是多少
//        for (int j = (i == cnt); j < now; j++)//如果当前位是最高位，那么j就从1开始，否则从0开始
//            if (abs(j - last) >= 2)ans += f[i][j];
//        if (abs(now - last) < 2) break;  //剪枝
//        last = now;//一次循环结束，更新last
//        if (i == 1)ans++;//特判解，把自己加上
//    }
//    //在dp的时候为什么最高位不以0开始：因为如果以0开始的话，
//    // 那么它在后面计算的时候会把次高位为1的挤掉，这样就会漏算
//    //所以我们这里还要补充解
//    for (int i = 1; i < cnt; i++)      //答案小于cnt位的 
//        for (int j = 1; j <= 9; j++)
//            ans += f[i][j];
//    return ans;
//}
//
//int main()
//{   
//    init();
//    int x, y;
//    cin >> x >> y;
//    cout << dp(y) - dp(x - 1);
//    return 0;
//}
