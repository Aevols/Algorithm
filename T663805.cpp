////https://www.luogu.com.cn/problem/T663805
//#include <iostream>
//#include <algorithm>
//#include<vector>
//using namespace std;
//
//typedef long long LL;
//const int N = 2005;
//const int MOD = 10000007;
//
//int n, arr[N];
//int cop[N], rk[N], posi;
//int treelen[N];    // 树状数组：维护前缀最大长度
//LL treecnt[N];     // 树状数组：维护对应最大长度的方案数之和
//int anslen = 0;
//LL anscnt = 0;
//
//inline int lowbit(int i)
//{
//    return i & -i;
//}
//
//// 树状数组查询：查询 [1, x] 的 (最大长度, 方案数)
//pair<int, LL> query(int x)
//{
//    int max_len = 0;
//    LL sum_cnt = 0;
//    for (int i = x; i > 0; i -= lowbit(i))
//    {
//        if (treelen[i] > max_len)
//        {
//            max_len = treelen[i];
//            sum_cnt = treecnt[i];
//        }
//        else if (treelen[i] == max_len)
//        {
//            sum_cnt = (sum_cnt + treecnt[i]) % MOD;
//        }
//    }
//    return { max_len, sum_cnt };
//}
//
//// 树状数组更新：在位置 x 插入 (len, cnt)
//void update(int x, int len, LL cnt)
//{
//    for (int i = x; i <= posi; i += lowbit(i))
//    { // 注意边界是 posi
//        if (treelen[i] < len)
//        {
//            treelen[i] = len;
//            treecnt[i] = cnt;
//        }
//        else if (treelen[i] == len)
//        {
//            treecnt[i] = (treecnt[i] + cnt) % MOD;
//        }
//    }
//}
//
//int bisearch(int num)
//{
//    int l = 0, r = posi + 1, mid;
//    while (l + 1 < r)
//    {
//        mid = (l + r) >> 1;
//        if (cop[mid] < num) l = mid;
//        else r = mid;
//    }
//    return r;
//}
//
//
//void discretize()
//{
//    sort(cop + 1, cop + n + 1);
//    posi = unique(cop + 1, cop + n + 1) - (cop + 1);
//    for (int i = 1; i <= n; i++)
//    {
//        rk[i] = bisearch(arr[i]);
//    }
//}
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> arr[i], cop[i] = arr[i];
//    }
//    discretize();
//    // 遍历处理每个元素
//    for (int i = 1; i <= n; i++)
//    {
//        int num = rk[i];
//        //  查询前面比它小的（[1, num-1]）
//        pair<int, LL> res = query(num - 1);
//        int max_len = res.first;
//        LL sum_cnt = res.second;
//        // 2. 计算当前的 len 和 cnt
//        int cur_len = max_len + 1;
//        LL cur_cnt = (max_len == 0) ? 1 : sum_cnt;
//
//        // 3. 更新全局答案
//        if (cur_len > anslen)
//        {
//            anslen = cur_len;
//            anscnt = cur_cnt;
//        }
//        else if (cur_len == anslen)
//        {
//            anscnt = (anscnt + cur_cnt) % MOD;
//        }
//        // 4. 更新树状数组
//        update(num, cur_len, cur_cnt);
//    }
//    cout << anscnt << endl;
//    return 0;
//}