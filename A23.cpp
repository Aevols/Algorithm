////Ì°ÐÄËã·¨
////https://www.luogu.com.cn/problem/P6033
//#include <iostream>
//#include<algorithm>
//#include<vector>
//#include<queue>
//using namespace std;
//using LL = long long;
//LL n, ans;
//priority_queue<LL, vector<LL>, greater<LL>> heap;
//
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        int num; cin >> num;
//        heap.push(num);
//    }
//    LL a, b;
//    n--;
//    while (n--)
//    {
//        a = heap.top(), heap.pop();
//        b = heap.top(), heap.pop();
//        ans += (a + b);
//        heap.push(a + b);
//    }
//    cout << ans;
//    return 0;
//}
