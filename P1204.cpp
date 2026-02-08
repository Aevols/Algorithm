////https://www.luogu.com.cn/problem/P1204
////差分
//#include <iostream>
//#include <string>
//#include <vector>
//#include<algorithm>
//using namespace std;
//const int N = 1e6 + 5;
//
//int t[N];
//int n, le = N, re = 0;//左右边界
//int ans1, ans2;
//int main()
//{
//    cin >> n;
//    int l, r;
//    while (n--)
//    {
//        cin >> l >> r;
//        le = l < le ? l : le;
//        re = r > re ? r : re;
//        t[l]++, t[r]--;
//    }
//    for (int i = le; i <= re; i++)//更新
//        t[i] = t[i] + t[i - 1];
//    bool state = 0;//0的话表明先前全是0；
//    int count = 0;//用于计数
//    for (int i = le; i <= re; i++)//查找
//    {
//        if (state)ans1 = max(ans1, count);
//        else
//            ans2 = max(ans2, count);
//        if (t[i] && state == false)count = 0,state=true;
//        if (t[i]==0 && state)count = 0,state=false;
//        count++;
//    }
//    cout << ans1 << " " << ans2;//
//    return 0;
//}
