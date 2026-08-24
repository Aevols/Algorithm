////博弈论nim游戏
////异或运算本质统计每一位的1的个数，偶0，奇1.
////对所有堆进行异或运算，为0则为平衡态，
////不管怎么操作一次操作只能将平衡态打破，因为对于每一位只能改变一次
////这已经改变了奇偶，所以必不平衡。
////而且非平衡态一次一定可以变为平衡态解释如下
////设现在所有堆的异或和为S，S不等于 0
////那它在二进制下一定有某一位是 1。我们盯着 S$的最高位的那个 1
////既然结果S的第k位是 1，说明在原来的石子堆里，
////一定至少有一堆石子（假设是第i堆，数量为A_i），
//// 它的第k位也是1，这堆石子A_i变成一个新的数量A_i'
////它一定小于A_i,最高位都比A_i小
////原来是A1^A2^...Ai^...An,现在是A1^A2^...Ai^S^...An
////根据交换律为A1^A2^...Ai^...An^S,交换律为S^S=0
////所以现在陷入平衡不平衡循环，又终态为平衡，结果显然
////https://www.luogu.com.cn/problem/P2197
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//    int t, n, x;
//    scanf("%d", &t);
//    while (t--) {
//        int s = 0;
//        scanf("%d", &n);
//        for (int i = 0; i < n; i++)
//            scanf("%d", &x), s ^= x;
//        if (s) puts("Yes");
//        else puts("No");
//    }
//}
//https://www.luogu.com.cn/problem/P1247
//#include <iostream>
//#include<vector>
//using namespace std;
//int highbit(int x)
//{
//    int res = 1;
//    while (2 * res <= x)
//        res <<= 1;
//    return res;
//}
//int posi, cut;//位置和减少多少个
//int main()
//{
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    int s = 0;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//        s ^= a[i];
//    }
//    if (s == 0) cout << "lose";
//    else
//    {
//        int x = highbit(s);
//        for (int i = 0; i < n; i++)
//        {
//            if (a[i] & x)
//            {   
//                posi = i + 1;
//                int y = a[i] ^ s;
//                cut = a[i] - y;
//                a[i] = y;
//                break;
//            }
//        }
//        cout << cut << " " << posi << endl;
//        for (int num : a)cout << num << " ";
//    }
//}
////https://www.luogu.com.cn/problem/P1288
//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    for (int i = 0; i < n; i++) cin >> a[i];
//    int dis1 = 0;
//    for (int i = 0; i < n; i++) 
//    {
//        if (a[i] == 0) break;
//        dis1++;
//    }
//    int dis2 = 0;
//    for (int i = n - 1; i >= 0; i--) 
//    {
//        if (a[i] == 0) break;
//        dis2++;
//    }
//    if (dis1 % 2 != 0 || dis2 % 2 != 0)cout << "YES" << endl;
//    else cout << "NO" << endl;
//    return 0;
//}