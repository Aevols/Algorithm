////https://www.luogu.com.cn/problem/P3258
////树上点差分，但是的话除第一个点在最后输出结果的时候减一就行
//// 应该n个房间是不同的
//#include<iostream>
//using namespace std;
//
//const int N = 3e5+5, M = 2 * N;
//int h[N], to[M], ne[M], tot;
//void add(int x, int y) 
//{
//    to[++tot] = y, ne[tot] = h[x], h[x] = tot;
//}
//
//int n, m,power[N];
//int dep[N], f[N][22],path[N];
//void dfs(int x, int fa) 
//{
//    dep[x] = dep[fa] + 1, f[x][0] = fa;
//    for (int i = 1; i <= 20; i++) f[x][i] = f[f[x][i - 1]][i - 1];
//    for (int i = h[x]; i; i = ne[i]) 
//    {
//        int y = to[i];
//        if (y != fa) dfs(y, x);
//    }
//}
//int lca(int x, int y) 
//{
//    if (dep[x] < dep[y])swap(x, y);
//    for (int i = 20; ~i; i--)if (dep[f[x][i]] >= dep[y]) x = f[x][i];
//    if (x == y) return y;
//    for (int i = 20; ~i; i--)if (f[x][i] != f[y][i]) x = f[x][i], y = f[y][i];
//    return f[x][0];
//}
//void dfs2(int x, int fa) 
//{
//    for (int i = h[x]; i; i = ne[i]) 
//    {
//        int y = to[i];
//        if (y != fa) 
//        {
//            dfs2(y, x);
//            power[x] += power[y]; //差分的子树和
//        }
//    }
//}
//int main() 
//{   
//    
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)
//        scanf("%d", &path[i]);
//    for (int i = 1, x, y; i < n; ++i) 
//    {
//        scanf("%d%d", &x, &y);
//        add(x, y); add(y, x);
//    }
//    dfs(1, 0); //倍增预处理 dep,fa 数组
//    for (int i = 2; i <= n; i++)
//    {
//        int x = path[i - 1], y = path[i], z = lca(x, y);
//        ++power[x]; ++power[y];
//        --power[z]; --power[f[z][0]]; //树上点差分
//    }
//    dfs2(1, 0);
//    for (int i = 1; i <= n; i++)
//    {
//        if (i == path[1])cout << power[i] << endl;
//        else cout << power[i] - 1 << endl;
//    }
//}