////https://www.luogu.com.cn/problem/P2516
////思路：转化为求最短路方案数问题或者是斜向路径数量问题
//// 对于方案数的累计，对于点（i，j）设其走的斜路径个数为fij
////它只能从（i-1，j)（i，j-1）（i-1，j-1）来，
////如果fij=fi-1j-1；说明它是到左下角的一条路径，
////分别转移给了左边和下边，而再一次转移给了它，
////没有经过不同的捷径，却计算了两遍，要去重。
////注意注意注意：上面的逻辑有点小瑕疵，
//// 就是其实并不是只要 mf[j-1] == mg[j] 就一定发生了重复。 
////当前 g[j] 同时从「上」和「左」继承了方案，
////并且这两条路径都包含了「左上角」的方案
////如果捷径数增加了，那么就要覆盖掉原本的捷径数
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//typedef long long LL;
//const int N = 5005;
//const int MOD = 100000000;
//
//char x[N], y[N];
//int n, m;
//
//// f,g：方案数滚动数组
//// mf,mg：LCS长度滚动数组
//LL ff[N], gg[N];
//int mff[N], mgg[N];
//
//int main()
//{
//    scanf("%s%s", x + 1, y + 1);
//    n = strlen(x + 1) - 1;   // 去掉末尾 '.'
//    m = strlen(y + 1) - 1;
//
//    LL* f = ff, * g = gg;
//    int* mf = mff, * mg = mgg;
//
//    // 初始化
//    for (int j = 0; j <= m; j++)
//    {
//        f[j] = 1;     // 空串方案数 = 1
//        mf[j] = 0;
//    }
//
//    for (int i = 1; i <= n; i++)
//    {
//        g[0] = 1;
//        mg[0] = 0;
//
//        for (int j = 1; j <= m; j++)
//        {
//            g[j] = 0;
//            mg[j] = 0;
//
//            // 1. 字符相等：从左上角来
//            if (x[i] == y[j])
//            {
//                mg[j] = mf[j - 1] + 1;
//                g[j] = f[j - 1];
//            }
//
//            // 2. 从上方转移
//            if (mf[j] > mg[j])
//            {
//                mg[j] = mf[j];
//                g[j] = f[j];
//            }
//            else if (mf[j] == mg[j])
//            {
//                g[j] = (g[j] + f[j]) % MOD;
//            }
//
//            // 3. 从左边转移
//            if (mg[j - 1] > mg[j])
//            {
//                mg[j] = mg[j - 1];
//                g[j] = g[j - 1];
//            }
//            else if (mg[j - 1] == mg[j])
//            {
//                g[j] = (g[j] + g[j - 1]) % MOD;
//            }
//
//            // 4. 正确的去重（三条件）
//            if (mf[j - 1] == mg[j] &&
//                mf[j] == mg[j] &&
//                mg[j - 1] == mg[j])
//            {
//                g[j] = (g[j] + MOD - f[j - 1]) % MOD;
//            }
//        }
//
//        swap(f, g);
//        swap(mf, mg);
//    }
//
//    printf("%d\n%d\n", mf[m], (int)(f[m] % MOD));
//    return 0;
//}
