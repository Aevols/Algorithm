////https://www.luogu.com.cn/problem/P1731
//#include <iostream>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//int n, m;
//int minv[20], mins[20];
//int ans = 1e9;
//// layer:剩余层数, v:已用体积, s:已用面积, r:上一层半径, h:上一层高度
//void dfs(int layer, int v, int s, int r, int h) {
//    // 1. 可行性剪枝：当前体积 + 未来最小体积 > n
//    if (v + minv[layer] > n) return;
//    // 2. 最优性剪枝：当前面积 + 未来最小侧面积 >= ans
//    if (s + mins[layer] >= ans) return;
//    // 3. 数学剪枝：利用 2*V_rem / R_curr 估算未来最小面积
//    if (s + 2 * (n - v) / r >= ans) return;
//    if (layer == 0) 
//    {
//        if (v == n) ans = s;
//        return;
//    }
//    //  R^2 * H 不能超过剩余体积
//    for (int i = min(r - 1, (int)sqrt(n - v)); i >= layer; i--) 
//    {
//        int base_s = (layer == m ? i * i : 0);
//        for (int j = min(h - 1, (n - v) / (i * i)); j >= layer; j--) 
//        {
//            dfs(layer - 1, v + i * i * j, s + base_s + 2 * i * j, i, j);
//        }
//    }
//}
//
//int main() {
//    cin >> n >> m;
//
//    // 预处理前 i 层的最小体积和侧面积（即半径和高度取 1, 2, 3... 时）
//    for (int i = 1; i <= m; i++) {
//        minv[i] = minv[i - 1] + i * i * i;
//        mins[i] = mins[i - 1] + 2 * i * i;
//    }
//
//    // 初始半径和高度设为足够大
//    dfs(m, 0, 0, (int)sqrt(n) + 1, n + 1);
//
//    if (ans == 1e9) cout << 0 << endl;
//    else cout << ans << endl;
//
//    return 0;
//}