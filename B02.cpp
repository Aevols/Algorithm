//注意：在 10^5 级别、10^6 边量的图论题中，
// 链式前向星普遍比 vector 邻接表要快 2～5 倍。
//因为前向星使用的是连续的内存，所以说没有指针的连续跳变以及频繁的开辟空间
//以及内存内容的迁移


/////////边集数组 示例 
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//const int N = 1010, M = 1010;
//int n, m, a, b, c;
//struct edge {
//    int u, v, w;
//}e[M];//边集 
//int vis[N];
//
//void dfs(int u) {
//    vis[u] = true;
//    for (int i = 1; i <= m; i++)
//        if (e[i].u == u) {
//            int v = e[i].v, w = e[i].w;
//            printf("%d,%d,%d\n", u, v, w);
//            if (vis[v]) continue;
//            dfs(e[i].v);
//        }
//}
//int main() {
//    cin >> n >> m;
//    for (int i = 1; i <= m; i++) {
//        cin >> a >> b >> c;
//        e[i] = { a,b,c };
//        // e[i]={b,a,c};
//    }
//    dfs(1);
//    return 0;
//}
//
/////////邻接矩阵 示例 
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//const int N = 1010, M = 1010;
//int n, m, a, b, c;
//int w[N][N];//边权 
//int vis[N];
//
//void dfs(int u) {
//    vis[u] = true;
//    for (int v = 1; v <= n; v++)
//        if (w[u][v]) {
//            printf("%d,%d,%d\n", u, v, w[u][v]);
//            if (vis[v]) continue;
//            dfs(v);
//        }
//}
//int main() {
//    cin >> n >> m;
//    for (int i = 1; i <= m; i++) {
//        cin >> a >> b >> c;
//        w[a][b] = c;
//        // w[b][a]=c;
//    }
//    dfs(1);
//    return 0;
//}
//
/////////邻接表 示例 
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//const int N = 510;
//int n, m, a, b, c;
//struct edge { int v, w; };
//vector<edge> e[N];//边集 
//
//void dfs(int u, int fa) {
//    for (auto ed : e[u]) {
//        int v = ed.v, w = ed.w;
//        if (v == fa) continue;
//        printf("%d,%d,%d\n", u, v, w);
//        dfs(v, u);
//    }
//}
//int main() {
//    cin >> n >> m;
//    for (int i = 1; i <= m; i++) {
//        cin >> a >> b >> c,
//            e[a].push_back({ b,c });
//        // e[b].push_back({a,c});
//    }
//    dfs(1, 0);
//    return 0;
//}
//
/////////链式前向星 示例 
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//const int N = 510, M = 3000;
//int n, m, a, b, c;
//struct edge { int v, w, ne; };
//edge e[M];//边集
//int idx, h[N];//点的第一条出边 
//
//void add(int a, int b, int c) {
//    e[idx] = { b,c,h[a] };
//    h[a] = idx++;
//}
//void dfs(int u, int fa) {
//    for (int i = h[u]; ~i; i = e[i].ne) {
//        int v = e[i].v, w = e[i].w;
//        if (v == fa) continue;
//        printf("%d,%d,%d\n", u, v, w);
//        dfs(v, u);
//    }
//}
//int main() {
//    cin >> n >> m;
//    memset(h, -1, sizeof h);
//    for (int i = 1; i <= m; i++) {
//        cin >> a >> b >> c,
//            add(a, b, c);
//        add(b, a, c);
//    }
//    dfs(1, 0);
//    return 0;
//}
//
/////////链式邻接表 示例 
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//const int N = 510;
//int n, m, a, b, c;
//struct edge { int u, v, w; };
//vector<edge> e;//边集
//vector<int> h[N];//点的所有出边
//
//void add(int a, int b, int c) {
//    e.push_back({ a,b,c });
//    h[a].push_back(e.size() - 1);
//}
//void dfs(int u, int fa) {
//    for (int i = 0; i < h[u].size(); i++) {
//        int j = h[u][i];
//        int v = e[j].v, w = e[j].w;
//        if (v == fa) continue;
//        printf("%d,%d,%d\n", u, v, w);
//        dfs(v, u);
//    }
//}
//int main() {
//    cin >> n >> m;
//    for (int i = 1; i <= m; i++) {
//        cin >> a >> b >> c,
//            add(a, b, c);
//        add(b, a, c);
//    }
//    dfs(1, 0);
//    return 0;
//}