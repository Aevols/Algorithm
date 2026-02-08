////https://www.luogu.com.cn/problem/P1387
//#include <iostream>
//using namespace std;
//const int N = 110; // n,m≤100，预留冗余空间
//
//int matrix[N][N]; // 原始01矩阵
//int s[N][N];      // 二维前缀和数组
//int n, m;
//
//int main()
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            cin >> matrix[i][j];
//        }
//    }
//    // 构建二维前缀和数组
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            s[i][j] = matrix[i][j] + s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1];
//        }
//    }
//    // 枚举正方形边长（从最大可能值开始，找到即输出）
//    int max_k = min(n, m);
//    for (int k = max_k; k >= 1; k--)
//    {
//        // 枚举所有合法的正方形左上角(i,j)
//        for (int i = 1; i + k - 1 <= n; i++)
//        {
//            for (int j = 1; j + k - 1 <= m; j++)
//            {
//                int x2 = i + k - 1; 
//                int y2 = j + k - 1; 
//                int sum = s[x2][y2] - s[i - 1][y2] - s[x2][j - 1] + s[i - 1][j - 1];
//                if (sum == k * k) 
//                {
//                    cout << k << endl;
//                    return 0;
//                }
//            }
//        }
//    }
//    // 题目保证有至少一个1，此处不会执行
//    return 0;
//}