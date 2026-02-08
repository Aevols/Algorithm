////https://www.luogu.com.cn/problem/U584945#ide
//#include<iostream>
//
//using namespace std;
//
//const int N = 34;//位数
//int a[N];//存放B进制数
//int f[N][N];//组合数，n位数放x个1有多少方案
//int l, r, k, b;
//void init()
//{
//	for (int i = 0; i < N; i++)f[i][0] = 1;
//	//注意：这里i从0开始,不管多少位全部放0只有一种方案
//	for (int i = 1; i < N; i++)//遍历位数
//		for (int j = 1; j <= i; j++)//遍历1的个数
//			f[i][j] = f[i - 1][j-1] + f[i-1][j];
//	//这位选1，则后续i-1位中选j-1个1
//	//不选1，则后续i-1位中选j个1
//}
//int get(int n)
//{		
//	if (!n) return 0;//特判，n==0返回0 
//	int cnt = 0;//记录a的位数
//	//转化为k进制数
//	while (n)a[++cnt] = n % b, n /= b;
//	int last = 0;//记录消耗了多少位数1
//	int ans = 0;
//	for (int i = cnt; i >= 1; i--)//遍历位数
//	{
//		if (a[i] == 0)continue;
//		else if (a[i] == 1)
//		{
//			ans += f[i - 1][k - last];
//			last++;
//		}
//		else if (a[i] > 1)
//		{
//			ans += f[i - 1][k - last];
//			ans += f[i - 1][k - last - 1];
//			break;
//		}
//		if (last == k) { ans++; break; }//因为f[0][1]==0,没有加上，所以再加一遍
//	}
//	return ans;
//
//}
//int main()
//{	
//	init();
//	cin >> l >> r >> k >> b;
//	cout << get(r) - get(l - 1);
//	//cout << f[3][1];
//	return 0;
//}

//董老师参考代码:
//#include<bits/stdc++.h>
//using namespace std;
//
//const int N = 34;
//int a[N];     //把B进制数的每一位抠出存入数组 
//int f[N][N];  //f[i][j]表示在i个位置上，放置j个1的组合数 
//int K, B;
//
//void init() {  //预处理出组合数
//    for (int i = 0; i < N; i++) f[i][0] = 1;
//    for (int i = 1; i < N; i++)
//        for (int j = 1; j <= i; j++)
//            f[i][j] = f[i - 1][j - 1] + f[i - 1][j];
//}
//int dp(int n) {
//    if (!n) return 0;              //特判，n==0返回0 
//    int cnt = 0;
//    while (n) a[++cnt] = n % B, n /= B;   //把B进制数的每一位抠出存入数组 
//
//    int res = 0, last = 0;            //last表示第i位之前放置1的个数
//    for (int i = cnt; i >= 1; i--) {    //从高位到低位枚举 
//        int x = a[i];                 //取出第i位数字  
//        if (x) {                        //第i位==0时，直接跳过，继续枚举下一位 
//            res += f[i - 1][K - last];      //第i位放0                         
//            if (x > 1) {                  //第i位>1时         
//                if (K - last - 1 >= 0) res += f[i - 1][K - last - 1]; //第i位放1  
//                break;      //第i位放大于1的数，不合要求，则break 
//            }
//            else {         //第i位==1时，不能用组合数计算，继续枚举下一位        
//                last++;     //更新last        
//                if (last > K) break; //1的个数多于K，则break  
//            }
//        }
//        if (i == 1 && last == K) res++; //特判，走到末位的情况
//    }
//    return res;
//}
//int main() {
//    init(); //预处理出组合数 
//    int l, r;
//    cin >> l >> r >> K >> B;
//    cout << dp(r) - dp(l - 1);
//    return 0;
//}