////法一：归并排序
////https://www.luogu.com.cn/problem/P1908
//#include <iostream>
//#include <string>
//#include <vector>
//#include<algorithm>
//using namespace std;
//using LL = long long;
//const int N = 5e5 + 5;
//int a[N], b[N];
//int n;
//LL ans;
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
//        else b[k++] = a[j++], ans += mid - i + 1;
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
//    cout << ans;
//    return 0;
//}
//法2：树状数组+离散化+二分
//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N = 5e5 + 5;
//using LL = long long;
//LL arr[N], sor[N], reorg[N], tree[N];
//int n, m;
//
//inline int lowbit(int i)
//{
//    return i & -i;
//}
//
//inline void update(int pos, int val)
//{
//    for (int i = pos; i <= m; i += lowbit(i))
//    {
//        tree[i] += val;
//    }
//}
//
//inline LL query(int pos)
//{
//    LL res = 0;
//    for (int i = pos; i > 0; i -= lowbit(i))
//    {
//        res += tree[i];
//    }
//    return res;
//}
//
//int bisearch(LL x)
//{
//    int l = 0, r = m + 1, mid;
//    while (l + 1 < r)
//    {
//        mid = (l + r) >> 1;
//        if (sor[mid] <= x)
//        {
//            l = mid;
//        }
//        else
//        {
//            r = mid;
//        }
//    }
//    return l;
//}
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(0); // 加速输入
//
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> arr[i];
//        sor[i] = arr[i];
//    }
//    // 排序去重
//    sort(sor + 1, sor + n + 1);
//    m = unique(sor + 1, sor + n + 1) - (sor + 1);
//
//    // 获得离散下标
//    for (int i = 1; i <= n; i++)
//    {
//        reorg[i] = bisearch(arr[i]);
//    }
//    LL ans = 0;
//    for (int i = n; i >= 1; --i)
//    {
//        int num = reorg[i];
//        ans += query(num - 1);
//        update(num, 1);
//    }
//    cout << ans << endl;
//    return 0;
//}


