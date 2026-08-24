// #include <cstdio>
// #include <algorithm>
// #include <cstring>

// using namespace std;

// const int N = 300005;
// const int M = 600005;

// struct Edge
// {
//     int to, w, ne;
// } e[M];

// struct Plan
// {
//     int x, y, dis, lca;
// } p[N];

// int n, m, cnt;
// int h[N], dep[N], s[N], edge_w[N];
// int fa[N][21], d[N];
// int max_path_len, max_edge_covered;

// void add(int x, int y, int w)
// {
//     e[++cnt].ne = h[x];
//     e[cnt].to = y;
//     e[cnt].w = w;
//     h[x] = cnt;
// }

// void dfs1(int u, int f, int dist_to_fa)
// {
//     dep[u] = dep[f] + 1;
//     fa[u][0] = f;
//     s[u] = s[f] + dist_to_fa;
//     edge_w[u] = dist_to_fa;
//     for (int i = 1; i <= 20; i++)
//     {
//         fa[u][i] = fa[fa[u][i - 1]][i - 1];
//     }
//     for (int i = h[u]; i; i = e[i].ne)
//     {
//         int v = e[i].to;
//         if (v == f) continue;
//         dfs1(v, u, e[i].w);
//     }
// }

// int get_lca(int x, int y)
// {
//     if (dep[x] < dep[y]) swap(x, y);
//     for (int i = 20; i >= 0; i--)
//     {
//         if (dep[fa[x][i]] >= dep[y]) x = fa[x][i];
//     }
//     if (x == y) return x;
//     for (int i = 20; i >= 0; i--)
//     {
//         if (fa[x][i] != fa[y][i])
//         {
//             x = fa[x][i];
//             y = fa[y][i];
//         }
//     }
//     return fa[x][0];
// }

// void dfs_diff(int u, int f, int num)
// {
//     for (int i = h[u]; i; i = e[i].ne)
//     {
//         int v = e[i].to;
//         if (v == f) continue;
//         dfs_diff(v, u, num);
//         d[u] += d[v];
//     }
//     if (d[u] == num)
//     {
//         max_edge_covered = max(max_edge_covered, edge_w[u]);
//     }
// }

// bool check(int mid)
// {
//     memset(d, 0, sizeof(d));
//     int num = 0;
//     int longest = 0;
//     max_edge_covered = 0;

//     for (int i = 1; i <= m; i++)
//     {
//         if (p[i].dis > mid)
//         {
//             num++;
//             d[p[i].x]++;
//             d[p[i].y]++;
//             d[p[i].lca] -= 2;
//             longest = max(longest, p[i].dis);
//         }
//     }

//     if (num == 0) return true;

//     dfs_diff(1, 0, num);

//     return longest - max_edge_covered <= mid;
// }

// int main()
// {
//     // 纯C语言输入输出
//     scanf("%d%d", &n, &m);

//     for (int i = 1; i < n; i++)
//     {
//         int x, y, w;
//         scanf("%d%d%d", &x, &y, &w);
//         add(x, y, w);
//         add(y, x, w);
//     }

//     dfs1(1, 0, 0);

//     for (int i = 1; i <= m; i++)
//     {
//         scanf("%d%d", &p[i].x, &p[i].y);
//         p[i].lca = get_lca(p[i].x, p[i].y);
//         p[i].dis = s[p[i].x] + s[p[i].y] - 2 * s[p[i].lca];
//         max_path_len = max(max_path_len, p[i].dis);
//     }

//     int l = -1, r = max_path_len;
//     while (l + 1 < r)
//     {
//         int mid = (l + r) >> 1;
//         if (check(mid)) r = mid;
//         else l = mid;
//     }
//     // 输出改为printf
//     printf("%d\n", r);
//     return 0;
// }
//优化代码
//#include <iostream>
//#include <algorithm>
//#include <cstdio> // 使用快读需包含
//
//using namespace std;
//
//const int N = 300005;
//const int M = 600005;
//
//// 快读：显著提升读入 10^6 整数的速度
//inline int read()
//{
//    int x = 0; char ch = getchar();
//    while (ch < '0' || ch > '9') ch = getchar();
//    while (ch >= '0' && ch <= '9') { x = (x << 3) + (x << 1) + (ch ^ 48); ch = getchar(); }
//    return x;
//}
//
//struct Edge { int to, w, ne; } e[M];
//struct Plan { int x, y, dis, lca; } p[N];
//
//int n, m, cnt;
//int h[N], dep[N], s[N], edge_w[N];
//int fa[N][21], d[N];
//int q[N], tot; // 用于存储 DFS 序，优化掉 check 里的递归
//
//void dfs1(int u, int f, int dist_to_fa)
//{
//    q[++tot] = u; // 记录 DFS 序（入号顺序）
//    dep[u] = dep[f] + 1;
//    fa[u][0] = f;
//    s[u] = s[f] + dist_to_fa;
//    edge_w[u] = dist_to_fa;
//    for (int i = 1; i <= 20; i++)
//    {
//        fa[u][i] = fa[fa[u][i - 1]][i - 1];
//    }
//    for (int i = h[u]; i; i = e[i].ne)
//    {
//        int v = e[i].to;
//        if (v != f) dfs1(v, u, e[i].w);
//    }
//}
//
//int get_lca(int x, int y)
//{
//    if (dep[x] < dep[y]) swap(x, y);
//    for (int i = 20; i >= 0; i--)
//    {
//        if (dep[fa[x][i]] >= dep[y]) x = fa[x][i];
//    }
//    if (x == y) return x;
//    for (int i = 20; i >= 0; i--)
//    {
//        if (fa[x][i] != fa[y][i])
//        {
//            x = fa[x][i];
//            y = fa[y][i];
//        }
//    }
//    return fa[x][0];
//}
//
//bool check(int mid)
//{
//    // 优化 1: 仅清空需要的范围
//    for (int i = 1; i <= n; i++) d[i] = 0;
//
//    int num = 0, longest = 0;
//    for (int i = 1; i <= m; i++)
//    {
//        if (p[i].dis > mid)
//        {
//            num++;
//            d[p[i].x]++; d[p[i].y]++; d[p[i].lca] -= 2;
//            if (p[i].dis > longest) longest = p[i].dis;
//        }
//    }
//
//    if (num == 0) return true;
//
//    int max_edge_covered = 0;
//    // 优化 2: 迭代代替递归。从 DFS 序的反向（即自底向上）处理，速度极快
//    for (int i = n; i >= 1; i--)
//    {
//        int u = q[i];
//        d[fa[u][0]] += d[u]; // 累加给父亲
//        if (d[u] == num && edge_w[u] > max_edge_covered)
//            max_edge_covered = edge_w[u];
//    }
//
//    return longest - max_edge_covered <= mid;
//}
//
//int main()
//{
//    n = read(); m = read(); // 使用快读
//
//    for (int i = 1; i < n; i++)
//    {
//        int x = read(), y = read(), w = read();
//        // 前向星 add 逻辑内联或直接写
//        e[++cnt] = { y, w, h[x] }; h[x] = cnt;
//        e[++cnt] = { x, w, h[y] }; h[y] = cnt;
//    }
//
//    dfs1(1, 0, 0);
//
//    int max_p_dis = 0;
//    for (int i = 1; i <= m; i++)
//    {
//        p[i].x = read(); p[i].y = read();
//        p[i].lca = get_lca(p[i].x, p[i].y);
//        p[i].dis = s[p[i].x] + s[p[i].y] - 2 * s[p[i].lca];
//        if (p[i].dis > max_p_dis) max_p_dis = p[i].dis;
//    }
//
//    int l = -1, r = max_p_dis;
//    while (l + 1 < r)
//    {
//        int mid = (l + r) >> 1;
//        if (check(mid)) r = mid;
//        else l = mid;
//    }
//
//    printf("%d\n", r);
//    return 0;
//}