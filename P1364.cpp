//https://www.luogu.com.cn/problem/P1364
//三个方法：换根DP，树的重心的变种,暴力n次dfs
//这里就写换根dp和树的重心
////法一：重心法
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//const int MAXN = 100005;
//long long w[MAXN];
//vector<int> adj[MAXN];
//long long sz[MAXN]; // 每个子树的权重和
//long long total_w = 0;
//int n, centroid = -1;
//
//// 第一次DFS：计算每个点的子树权重和，并找到重心
//void findCentroid(int u, int p) {
//    sz[u] = w[u];
//    bool is_centroid = true;
//    for (int v : adj[u]) {
//        if (v == p) continue;
//        findCentroid(v, u);
//        sz[u] += sz[v];
//        if (sz[v] * 2 > total_w) is_centroid = false; // 有个儿子太重了
//    }
//    // 还要检查“向上”的那部分权重是否超过一半
//    if ((total_w - sz[u]) * 2 > total_w) is_centroid = false;
//
//    if (is_centroid) centroid = u;
//}
//
//// 第二次DFS：计算选定重心后的总距离和
//long long getDistSum(int u, int p, int depth) {
//    long long res = w[u] * depth;
//    for (int v : adj[u]) {
//        if (v == p) continue;
//        res += getDistSum(v, u, depth + 1);
//    }
//    return res;
//}
//
//int main() {
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        int l, r;
//        cin >> w[i] >> l >> r;
//        total_w += w[i];
//        if (l) { adj[i].push_back(l); adj[l].push_back(i); }
//        if (r) { adj[i].push_back(r); adj[r].push_back(i); }
//    }
//
//    findCentroid(1, 0);
//    cout << getDistSum(centroid, 0, 0) << endl;
//    return 0;
//}
//法二：换根DP
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//const int MAXN = 100005;
//long long w[MAXN], sz[MAXN], f[MAXN];
//vector<int> adj[MAXN];
//long long total_w = 0;
//int n;
//
//// 第一次DFS：预处理sz[u]和以1为根时的总距离和f[1]
//void dfs1(int u, int p, int depth) {
//    sz[u] = w[u];
//    f[1] += w[u] * depth;
//    for (int v : adj[u]) {
//        if (v == p) continue;
//        dfs1(v, u, depth + 1);
//        sz[u] += sz[v];
//    }
//}
//
//// 第二次DFS：换根转移
//void dfs2(int u, int p) {
//    for (int v : adj[u]) {
//        if (v == p) continue;
//        // 核心公式：
//        // 靠近v的居民(sz[v])少走一步，远离v的居民(total_w - sz[v])多走一步
//        f[v] = f[u] + (total_w - sz[v]) - sz[v];
//        dfs2(v, u);
//    }
//}
//
//int main() {
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        int l, r;
//        cin >> w[i] >> l >> r;
//        total_w += w[i];
//        if (l) { adj[i].push_back(l); adj[l].push_back(i); }
//        if (r) { adj[i].push_back(r); adj[r].push_back(i); }
//    }
//
//    dfs1(1, 0, 0);
//    dfs2(1, 0);
//
//    long long ans = -1;
//    for (int i = 1; i <= n; i++) {
//        if (ans == -1 || f[i] < ans) ans = f[i];
//    }
//    cout << ans << endl;
//    return 0;
//}
