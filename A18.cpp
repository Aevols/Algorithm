////双指针，不难但是边界条件一定要仔细，不然非常容易错
////https://www.luogu.com.cn/problem/P1147
//#include <iostream>
//#include<algorithm>
//using namespace std;
//int m;
//long long sum;
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    int i = 1, j = 1;
//    cin >> m;
//    for (; j <= m/2+1; j++)
//    {
//        sum += j;
//        while (sum > m)sum -= i++;
//        if (sum == m&&i<j)cout << i << " " << j<<"\n";
//    }
//    return 0;
//}
// 
// 
//https://www.luogu.com.cn/problem/P1102
//三指针问题
//思路还是一样的问题，只定住了一个指针，其他两个指针还是相互耦合
//没有解绑出来
//错误案例：
//#include <iostream>
//#include<algorithm>
//using namespace std;
//const int N = 1e5 + 5;
//int arr[N], n , c;
//long long ans = 0;
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> c;
//    for (int i = 1; i <= n; i++)
//        cin >> arr[i];
//    sort(arr + 1, arr + n + 1);
//    int l = 1, r = 1,k=1;//k用来统计相同的小的数的个数
//    for (; r <= n; r++)
//    {
//        if (arr[r] - arr[l] > c)l = k;//这里是筛选器，下面的逻辑无论如何都要执行
//        if (arr[r] - arr[l] == c)
//        {
//            if (l == k)
//                while (arr[l] == arr[k])k++;
//            ans += (k - l);
//        }
//    }
//    cout << ans;
//    return 0;
//}
//
//正确代码：
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//const int N = 200005;
//int arr[N];
//int n, c;
//long long ans = 0;
//
//int main() 
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    if (!(cin >> n >> c)) return 0;
//    for (int i = 1; i <= n; i++) cin >> arr[i];
//
//    sort(arr + 1, arr + n + 1);
//
//    // l1: 第一个满足 arr[l1] >= arr[r] - c 的位置
//    // l2: 第一个满足 arr[l2] > arr[r] - c 的位置
//    int l1 = 1, l2 = 1;
//
//    for (int r = 1; r <= n; r++) 
//    {
//        // 目标值是 B = A - C
//        int target = arr[r] - c;
//
//        // 维护左边界指针 l1
//        while (l1 < r && arr[l1] < target) 
//        {
//            l1++;
//        }
//
//        // 维护右边界指针 l2
//        while (l2 < r && arr[l2] <= target) 
//        {
//            l2++;
//        }
//
//        // 如果此时 l1 指向的确实是 target
//        // 那么在 [l1, l2) 这个左闭右开区间内的数全部等于 target
//        if (arr[l1] == target) {
//            ans += (l2 - l1);
//        }
//    }
//
//    cout << ans << endl;
//    return 0;
//}
