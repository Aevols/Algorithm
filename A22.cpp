////堆的应用
////https://www.luogu.com.cn/problem/P1631
//#include <iostream>
//#include<algorithm>
//#include<queue>
//#include<vector>
//using LL = long long;
//#define pii pair<LL,int>//和与第i队
//const int N = 1e5 + 5;
//using namespace std;
//priority_queue<pii, vector<pii>, greater<pii>> heap;
//int n,id[N], a[N], b[N];//id表示第bi排的a的下标
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n;
//    for (int i = 1; i <= n; i++)cin >> a[i];
//    for (int i = 1; i <= n; i++)cin >> b[i];
//    for (int i = 1; i <= n; i++)
//    {
//        id[i] = 1;
//        heap.push({ a[1] + b[i],i });
//    }
//    while (n--)
//    {
//        cout << heap.top().first<<" ";
//        int i = heap.top().second; heap.pop();
//        heap.push({ a[++id[i]]+b[i],i});
//    }
//    return 0;
//}
