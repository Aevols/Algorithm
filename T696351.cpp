//#include <iostream>
//#include <string>
//#include <vector>
//#include<algorithm>
//using namespace std;
//using LL = long long;
//const int N=1e5+5;
//
//LL a[N], b[N],n,ans=0;
//void msort(int l, int r)
//{
//    if (l == r)return;
//    int mid = (l + r) >> 1;
//    msort(l, mid);
//    msort(mid + 1, r);
//    //统计
//    int i = l, j = mid + 1;
//    while (i <= mid && j <= r)
//    {
//        if (a[i] > 2 * a[j])j++;
//        else 
//        {
//            ans += j - mid - 1;
//            i++;
//        }
//    }
//    ans += (mid + 1 - i) * (j - mid - 1);//如果提前退出把剩余的补上
//    //排序
//    i = l, j = mid + 1;
//    int k = l;
//    while (i <= mid && j <= r)
//    {
//        if (a[i] <= a[j])b[k++] = a[i++];
//        else b[k++] = a[j++];
//    }
//    while(i<=mid)b[k++] = a[i++];
//    while (j <= r)b[k++] = a[j++];
//    for (int m = l; m <= r; m++)a[m]=b[m];
//}
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    msort(0, n - 1);
//    /*for (int i = 0; i < n; i++)
//    {
//        cout << a[i] << " ";
//    }*/
//    cout << ans;
//}
