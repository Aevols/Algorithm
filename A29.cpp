////https://www.luogu.com.cn/problem/P1803
////这题居然想错了，应该按结束时间排序
//#include <iostream>
//#include<algorithm>
//using namespace std;
//const int N = 1e6 + 5;
//struct Line { int l, r; bool operator<(const Line& t) { return r < t.r; } };
//Line w[N];
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    int n, cnt = 0;
//    cin >> n;
//    for(int i=1;i<=n;i++)
//    {
//        cin >> w[i].l >> w[i].r;
//    }
//    sort(w + 1, w + 1 + n);
//    int end = -1;
//    for (int i = 1; i <= n; i++)
//    {
//        if (w[i].l < end)continue;
//        end = w[i].r; cnt++;
//    }
//    cout << cnt;
//    return 0;
//}
