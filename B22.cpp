////https://www.luogu.com.cn/problem/P10483
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int n, w;
//int cat[20];
//int cab[20];
//int ans = 20;
//int cnt = 0;
//
//void dfs(int seq)
//{
//    if (cnt >= ans) return;
//    if (seq == n)
//    {
//        ans = min(ans, cnt);
//        return;
//    }
//    int u = cat[seq];
//    for (int i = 0; i < cnt; i++)
//    {
//        if (cab[i] + u <= w)
//        {
//            cab[i] += u;
//            dfs(seq + 1);
//            cab[i] -= u;       // »ØËÝ
//        }
//    }
//
//    if (cnt + 1 < ans)
//    {
//        cab[cnt++] = u;
//        dfs(seq + 1);
//        cab[--cnt] = 0;
//    }
//}
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr);
//    if (!(cin >> n >> w)) return 0;
//    for (int i = 0; i < n; i++) cin >> cat[i];
//    sort(cat, cat + n);
//    reverse(cat, cat + n);
//    cab[cnt++] = cat[0];
//    dfs(1);
//    cout << ans << endl;
//    return 0;
//}
