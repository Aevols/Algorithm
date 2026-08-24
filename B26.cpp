////https://www.luogu.com.cn/problem/P10484
////双向bfs，以空间换时间
//#include <iostream>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//const int N = 50;
//int w, ans, g[N], n;
//int weight[1 << 23],cnt;
////weight表示前一半能产生哪些组合数,cnt配合weight使用
//void dfs1(int u, int s)
//{
//    if (u == n/2 + 1) { weight[cnt++] = s; return;}
//    dfs1(u + 1, s);//不选的情况
//    if (s + g[u] <= w)dfs1(u + 1, s + g[u]);
//}
//void dfs2(int u, int s)
//{
//    if (u == n + 1) 
//    { ans = max(ans,
//        *(upper_bound(weight, weight + cnt, w - s) - 1) + s); }
//    dfs2(u + 1, s);
//    if(s + g[u] <= w)dfs2(u + 1, s + g[u]);
//}
//
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> w >> n;
//    for (int i = 0; i < n; i++)cin >> g[i];
//    sort(g, g + n); reverse(g, g + n);
//    dfs1(0, 0);
//    //排序去重
//    sort(weight, weight + cnt); 
//    cnt = unique(weight, weight + cnt)-weight;
//    dfs2(n / 2 + 1, 0);
//    cout << ans;
//    return 0;
//}
