//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//void solve() 
//{
//    int n;
//    if (scanf("%d", &n) == EOF) return;
//    int x;
//    int xor_sum = 0;      // 记录异或和
//    int count_gt_1 = 0;   // 记录石子数大于 1 的堆数
//    for (int i = 0; i < n; i++) 
//    {
//        scanf("%d", &x);
//        xor_sum ^= x;
//        if (x > 1) 
//        {
//            count_gt_1++;
//        }
//    }
//    // 根据 SJ 定理 (Sprague-Grundy Theorem 在反 Nim 中的应用)
//    if (count_gt_1 == 0) 
//    {
//        // 情况 1: 所有堆石子数都为 1
//        if (n % 2 == 0) 
//        {
//            printf("John\n");
//        }
//        else 
//        {
//            printf("Brother\n");
//        }
//    }
//    else 
//    {
//        // 情况 2: 至少有一堆石子数大于 1
//        // 此时结论与普通 Nim 相同：异或和不为 0 则先手必胜
//        if (xor_sum != 0) 
//        {
//            printf("John\n");
//        }
//        else 
//        {
//            printf("Brother\n");
//        }
//    }
//}
//
//int main() 
//{
//    int t;
//    if (scanf("%d", &t) != EOF) 
//    {
//        while (t--) 
//        {
//            solve();
//        }
//    }
//    return 0;
//}
//更简单的写法
//#include<cstdio>
//using namespace std;
//
//int main() {
//	int T, n, x; scanf("%d", &T);
//	while (T--) {
//		scanf("%d", &n); int ans = 0, sum = 0;
//		for (int i = 1; i <= n; ++i)scanf("%d", &x), ans ^= x, sum += x;
//		if (sum == n) puts(n & 1 ? "Brother" : "John");
//		else puts(ans ? "John" : "Brother");
//	}
//	return 0;
//}