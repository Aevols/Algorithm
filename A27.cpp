//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#define N 205
//using namespace std;
//
//int m, s, c, ans;
//int a[N]; //牛所占的牛棚的编号
//int d[N]; //相邻牛之间的牛棚数
//
//int main() 
//{
//    scanf("%d%d%d", &m, &s, &c);
//    for (int i = 1; i <= c; i++)scanf("%d", &a[i]);
//
//    sort(a + 1, a + c + 1);
//    for (int i = 2; i <= c; i++)d[i - 1] = a[i] - a[i - 1] - 1;
//    sort(d + 1, d + c);
//
//    ans = c;  //先给每个牛一块木板
//    if (m < c) //如果木板数小于牛数
//        for (int i = 1; i <= c - m; i++) ans += d[i]; //加空档
//    printf("%d\n", ans);
//    return 0;
//}