////https://www.luogu.com.cn/problem/U325592
//#include <iostream>
//#include <algorithm>
//using namespace std;
//using LL = long long;
//const int N = 1e5 + 5; // 适配1e5的数据范围
//
//int a[N], b[N]; // a：原数组；b：归并临时数组
//int n;
//LL ans = 0;     // 小和可能超int，用LL存储
//
//void msort(int l, int r)
//{
//    if (l == r) return;
//    int mid = (l + r) >> 1; // 加括号避免优先级问题
//    msort(l, mid);
//    msort(mid + 1, r);
//
//    // 合并两个有序区间，同时统计小和（核心修正）
//    int i = l, j = mid + 1, k = l;
//    while (i <= mid && j <= r)
//    {
//        if (a[i] < a[j]) // 修正：仅统计"小"于的情况，排除相等
//        {
//            // 强制转LL避免溢出！右区间[j..r]都比a[i]大，贡献a[i]*(r-j+1)
//            ans += (LL)a[i] * (r - j + 1);
//            b[k++] = a[i++];
//        }
//        else
//        {
//            // a[i] >= a[j]，无贡献，直接放入临时数组
//            b[k++] = a[j++];
//        }
//    }
//    // 处理左区间剩余元素（右区间已空，无贡献）
//    while (i <= mid) b[k++] = a[i++];
//    // 处理右区间剩余元素（无贡献）
//    while (j <= r) b[k++] = a[j++];
//
//    // 复制临时数组到原数组
//    for (int m = l; m <= r; m++) a[m] = b[m];
//}
//
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; i++)
//        cin >> a[i];
//    msort(0, n - 1);
//    cout << ans << endl; // 加endl确保输出刷新
//    return 0;
//}