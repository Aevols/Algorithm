////归并排序
////https://www.luogu.com.cn/problem/P1177
//#include <iostream>
//#include <string>
//#include <vector>
//#include<algorithm>
//using namespace std;
//const int N = 1e5 + 5;
//int a[N], b[N];
//int n;
//void msort(int l, int r)
//{
//    if (l == r) return;
//    int mid = l + r >> 1;
//    msort(l, mid);
//    msort(mid + 1, r);
//    //合并
//    int i = l, j = mid + 1, k = l;
//    while (i <= mid && j <= r)
//    {
//        if (a[i] <= a[j])b[k++] = a[i++];
//        else b[k++] = a[j++];
//    }
//    while (i <= mid) b[k++] = a[i++];
//    while (j <= r) b[k++] = a[j++];
//    //复制返还给a
//    for (int m = l; m <= r; m++)a[m] = b[m];
//}
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; i++)
//        cin >> a[i];
//    msort(0, n - 1);
//    for (int i = 0; i < n; i++)
//        printf("%d ", a[i]);
//    return 0;
//}
