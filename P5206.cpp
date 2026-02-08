////
//#include<iostream>
//using namespace std;
//
//const int offset = 3e4 + 5; // 偏移量，防止数组下标为负
//const int N = 1e6 + 2*offset; // 稍微开大一点防止越界
//
//int n, m, posi[N];
//
//int main()
//{
//   
//    cin >> n >> m;
//    int v, x;
//    while (n--)
//    {
//        cin >> v >> x; 
//
//        // 利用二阶差分修改五个关键拐点的斜率
//        posi[x - 3 * v + 1 + offset] += 1;
//        posi[x - 2 * v + 1 + offset] -= 2;
//        posi[x + 1 + offset] += 2;
//        posi[x + 2 * v + 1 + offset] -= 2;
//        posi[x + 3 * v + 1 + offset] += 1;
//    }
//
//    // 第一次前缀和：还原出一阶差分（斜率数组）
//    for (int i = 1; i <= m + offset; i++)
//        posi[i] = posi[i] + posi[i - 1];
//
//    // 第二次前缀和：还原出原数组（真实水位）
//    for (int i = 1; i <= m + offset; i++)
//        posi[i] = posi[i] + posi[i - 1];
//
//    for (int i = 1; i <= m; i++)
//        cout << posi[i + offset] << " ";
//
//    return 0;
//}