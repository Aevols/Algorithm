//深搜的过程 绕树兜圈子深搜的实现 系统栈深搜的计算 
// 自顶向下，自底向上入下回离都是在当前节点的状态空间完成计算
// 对图深搜会生成 DFS 树深搜与回溯
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <vector>
//using namespace std;
//const int N = 500;
//
//////////////////// DFS计算
//int n, m, a, b, c;
//vector<int> e[N];
//
//void dfs(int u, int fa) {
//    // printf("进入%d\n",u);
//    for (auto v : e[u]) {
//        if (v == fa) continue;
//        // printf("下走%d\n",u);
//        dfs(v, u);
//        // printf("上回%d\n",u);
//    }
//    // printf("离开%d\n",u);
//}
//int main() {
//    cin >> n >> m;
//    for (int i = 1; i <= m; i++)
//        cin >> a >> b,
//        e[a].push_back(b),
//        e[b].push_back(a);
//    dfs(1, 0);
//    return 0;
//}
//
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <vector>
//using namespace std;
//const int N = 500;
//////////////////// 时间戳dfn
//int n, m, a, b, tot;
//vector<int> e[N];
//
//void dfs(int u, int fa) {
//    printf("dfn[%d]=%d\n", u, ++tot);
//    for (auto v : e[u]) {
//        if (v == fa) continue;
//        dfs(v, u);
//    }
//}
//int main() {
//    cin >> n >> m;
//    for (int i = 1; i <= m; i++)
//        cin >> a >> b,
//        e[a].push_back(b),
//        e[b].push_back(a);
//    dfs(1, 0);
//    return 0;
//}
//
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <vector>
//using namespace std;
//const int N = 500;
/////////////////// DFS序
//int n, m, a, b;
//vector<int> e[N];
//
//void dfs(int u, int fa) {
//    // printf("%d ",u);
//    for (auto v : e[u]) {
//        if (v == fa) continue;
//        dfs(v, u);
//    }
//    // printf("%d ",u);
//}
//int main() {
//    cin >> n >> m;
//    for (int i = 1; i <= m; i++)
//        cin >> a >> b,
//        e[a].push_back(b),
//        e[b].push_back(a);
//    dfs(1, 0);
//    return 0;
//}
//
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <vector>
//using namespace std;
//const int N = 500;
//
/////////////////// DFS树
//int n, m, a, b;
//int vis[N];
//vector<int> e[N];
//
//void dfs(int u) {
//    vis[u] = true;
//    for (auto v : e[u]) {
//        if (vis[v]) continue;
//        // printf("%d→%d\n",u,v);
//        dfs(v);
//    }
//}
//int main() {
//    cin >> n >> m;
//    for (int i = 1; i <= m; i++)
//        cin >> a >> b,
//        e[a].push_back(b),
//        e[b].push_back(a);
//    dfs(1);
//    return 0;
//}