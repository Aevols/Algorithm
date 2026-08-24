////https://www.luogu.com.cn/problem/P1843
////大根堆或二分答案
////法一：大根堆
////#include <iostream>
////#include<algorithm>
////#include<queue>
////using namespace std;
////int n, a, b;
////priority_queue<int> heap;
////int main()
////{
////    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
////    cin >> n >> a >> b;
////    for (int i = 1; i <= n; i++)//建堆
////    {
////        int num;
////        cin >> num;
////        heap.push(num);
////    }
////    int t = 0;
////    while (heap.top() > a * t)
////    {
////        int num = heap.top(); heap.pop();
////        num -= b;
////        heap.push(num);
////        t++;
////    }
////    cout << t;
////    return 0;
////}
////法二：二分答案
//// 二分答案 nlogn
//#include<iostream>
//using namespace std;
//int n, a, b, w[500005];
//bool check(int t) 
//{
//    int s = 0;
//    for (int i = 1; i <= n; i++) 
//    {
//        if (w[i] <= t * a) continue;
//        s += (w[i] - t * a + b - 1) / b; //上取整
//    }
//    return s <= t;
//}
//int main() 
//{
//    ios::sync_with_stdio(0);
//    cin >> n >> a >> b;
//    for (int i = 1; i <= n; i++) cin >> w[i];
//    int l = 0, r = 1e6, mid;
//    while (l + 1 < r) 
//    {
//        mid = l + r >> 1;
//        check(mid) ? r = mid : l = mid;
//    }
//    cout << r << endl;
//}
//
