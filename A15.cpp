////堆排序
////https://www.luogu.com.cn/problem/P3378
//#include <iostream>
//#include<algorithm>
//using namespace std;
//const int N = 1e6 + 5;
//int arr[N], cnt = 0;
//int n;
//void up(int u)
//{
//    if (u && arr[u/2] > arr[u])
//    {
//        swap(arr[u], arr[u/2]);
//        up(u/2);//写错了没有arr[]
//    }
//}
//void push(int x)
//{
//    arr[++cnt] = x;
//    up(cnt);
//}
//void down(int u)
//{
//    int v = u;
//    if (u * 2 <= cnt && arr[u * 2] < arr[v]) v = u * 2;
//    if (u * 2 + 1 <= cnt && arr[u * 2 + 1] < arr[v]) v = u * 2 + 1;
//    if (u != v) swap(arr[u], arr[v]), down(v);
//}
//void pop()
//{
//    arr[1] = arr[cnt--];
//    down(1);
//}
////int main()
////{
////    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
////    cin >> n;
////    int op = 0,x;
////    while (n--)
////    {
////        cin >> op;
////        if (op == 1) { cin >> x; push(x); }
////        if (op == 2)cout << arr[1]<<"\n";
////        if (op == 3)pop();
////    }
////    return 0;
////}
//int main() 
//{
//    int n; scanf("%d", &n);
//    for (int i = 1, x; i <= n; i++)
//        scanf("%d", &x), push(x); //建堆：从堆尾插入每个数，上浮调整
//
//    for (int i = 1; i <= n; i++)
//        printf("%d ", arr[1]), pop();
//}
