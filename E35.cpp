////最大网络流
////https://www.luogu.com.cn/problem/P10974
//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <vector>
//#include <climits> // 用于 LLONG_MAX
//using namespace std;
//
//// N 和 INF 仍使用 int，但流量相关使用 long long
//const int N = 2e5 + 5;
//const long long INF = LLONG_MAX / 2; // 使用一个安全的极大值
//
//// ------------------- 结构体和全局变量 -------------------
//int deg[N];
//struct Edge
//{
//    int point; // 这条边指向哪个节点
//    int ne;    // 父节点的下一条边
//    long long w; // 边权（流量）使用 long long
//};
//Edge e[2 * N];
//int h[N], cnt = 0;
//long long down[N]; // 某一节点的下行流量
//long long f[N];    // 某一节点全流量
//
//void add(int x, int y, int w)
//{
//    deg[x]++;
//    e[cnt] = { y, h[x], (long long)w }; // 强制转换为 long long
//    h[x] = cnt++;
//}
//
//// ------------------- DFS 1: 计算下行流量 down[u] -------------------
//long long dfs_d(int u, int fa)
//{
//    // 叶子节点特判：返回 INF，表示它可以贡献其连接边上的所有容量
//    // 这个特判必须放在开头，确保叶子节点不执行后续循环
//    if (deg[u] == 1 && u != 1) return INF;
//
//    // 初始化下行流量为 0 (对于非叶子节点)
//    down[u] = 0;
//
//    for (int i = h[u]; i != -1; i = e[i].ne)
//    {
//        int j = e[i].point;
//        if (j == fa) continue;
//
//        long long s = dfs_d(j, u); // 拿到 j 的下流量（或 INF）
//
//        // u 的下行流量是所有孩子贡献的流量之和
//        down[u] += min(e[i].w, s);
//    }
//
//    // 如果 u 是叶子（仅处理根节点，非根叶子已在开头返回），则返回 down[u] (0)
//    return down[u];
//}
//
//// ------------------- DFS 2: 计算总流量 f[u] -------------------
//void dfs_f(int u, int fa)
//{
//    for (int i = h[u]; i != -1; i = e[i].ne)
//    {
//        int j = e[i].point;
//        if (j == fa) continue;
//
//        // 通用计算：Flow_out_of_u = f[u] - flow_from_j_to_u
//        // min(down[j], e[i].w) 是 j 分支对 f[u] 的贡献
//        long long flow_from_other_branches = f[u] - min(down[j], e[i].w);
//
//        // f[j] = down[j] + min(capacity(u, j), Flow_from_other_branches)
//        f[j] = down[j] + min(e[i].w, flow_from_other_branches);
//
//        dfs_f(j, u);
//    }
//}
//
//// ------------------- 主函数 -------------------
//int main()
//{
//    // 优化 I/O 速度，对于大量输入很重要
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    int t;
//    if (!(cin >> t)) return 0; // 处理 T=0 或输入结束
//
//    while (t--)
//    {
//        int n;
//        if (!(cin >> n)) break;
//
//        // 每次测试用例都要重置所有全局变量
//        cnt = 0;
//        // 使用 n+1 来确保重置范围覆盖所有节点
//        memset(h, -1, (n + 1) * sizeof(int));
//        memset(down, 0, (n + 1) * sizeof(long long));
//        memset(f, 0, (n + 1) * sizeof(long long));
//        memset(deg, 0, (n + 1) * sizeof(int));
//
//        int x, y, z;
//        for (int j = 1; j < n; j++) // N 个节点只有 N-1 条边
//        {
//            cin >> x >> y >> z;
//            add(x, y, z);
//            add(y, x, z);
//        }
//
//        // 第一次 DFS：计算 down[]
//        // 注意：根节点 1 的度数 deg[1] 在 add 中已经计算
//        dfs_d(1, 0);
//
//        // 根节点 f[1] 初始化：只有向下流量
//        f[1] = down[1];
//
//        // 第二次 DFS：计算 f[]
//        dfs_f(1, 0);
//
//        // 查找最大累积度
//        long long ans = 0;
//        for (int i = 1; i <= n; i++) ans = max(ans, f[i]);
//
//        cout << ans << "\n";
//    }
//
//    return 0;
//}

//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//const int N = 200010, INF = 0x3f3f3f3f;
//int h[N], to[N * 2], w[N * 2], ne[N * 2], tot;  //邻接表
//int d[N];   //d[i]记录从i点向下流出的最大流量
//int f[N];   //f[i]记录从i点向外流出的最大流量
//int deg[N]; //deg[i]记录点i的度数
//
//void add(int a, int b, int c) {
//    to[++tot] = b, w[tot] = c, ne[tot] = h[a], h[a] = tot;
//}
//int dfs_d(int u, int fa) { //从叶点向上递推，获取u点的下流量 
//    for (int i = h[u]; i; i = ne[i]) {
//        int v = to[i];
//        if (v == fa) continue;   //避免向上查找 
//        int s = dfs_d(v, u);     //返回v点的下流量 
//        d[u] += min(w[i], s);   //累加u点的下流量 
//    }
//    if (deg[u] == 1) return INF; //特判叶的情况 
//    return d[u];              //返回u点的下流量 
//}
//void dfs_f(int u, int fa) { //从根点向下递推，获取v点的全流量
//    for (int i = h[u]; i; i = ne[i]) {
//        int v = to[i];
//        if (v == fa) continue;
//        if (deg[u] == 1) f[v] = d[v] + w[i]; //特判根的情况 
//        else f[v] = d[v] + min(w[i], f[u] - min(w[i], d[v]));
//        dfs_f(v, u);
//    }
//}
//int main() {
//    int t, n;
//    scanf("%d", &t);
//    while (t--) {
//        scanf("%d", &n);
//        tot = 0;
//        memset(h, 0, sizeof h);
//        memset(d, 0, sizeof d);
//        memset(f, 0, sizeof f);
//        memset(deg, 0, sizeof deg);
//        for (int i = 1; i < n; i++) {
//            int a, b, c;
//            scanf("%d%d%d", &a, &b, &c);
//            add(a, b, c), add(b, a, c);
//            deg[a]++, deg[b]++;
//        }
//
//        dfs_d(1, -1);  //向上递推下流量 
//        f[1] = d[1];    //根只有向下的流量 
//        dfs_f(1, -1);  //向下递推全流量 
//        int ans = 0;
//        for (int i = 1; i <= n; i++) ans = max(ans, f[i]);
//        printf("%d\n", ans);
//    }
//    return 0;
//}