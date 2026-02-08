//https://www.luogu.com.cn/problem/P13270
//这是kmp算法思想的前置，但是实际上比kmp更隐晦，因为它隐藏了更多细节
//最小表示法
//解释：因为S[i + k] > S[j + k], 所以S[i~i + k]之内的任何一个位置开始的循环同构串, 都会被
//淘汰。所以指针i跳到i + k + 1, 继续比较。
//为什么会这样呢，我举个例子：
// N=7, S' = "acacabaacacaba"
//i (从 0 开始) 输了。k=3，意思是他们平了 3 个字母 ("aca")。 这说明什么？
//S'[0...2] == S'[2...4](都是 "aca")
//S'[3] > S'[5](那个 'c' > 'b')
//我们来分析 i 的“猪队友”：
//i = 1 (队 "cacabaa")：他的对手应该是 j + 1 = 3 (队 "cabaaca")。
//比 k = 0：S'[1] ('c') vs S'[3]('c')。平手。
//比 k = 1：S'[2] ('a') vs S'[4]('a')。平手。
//比 k = 2：S'[3] ('c') vs S'[5]('b')。i = 1 也输了！
//所以说i后面一直到到它后面的k个队友为首的串，
// 它都会被相对应j后面一直到到它后面的k个队友为首的串打败，一定是有这些串的
//这些串现阶段用不用的到线放一边，因为前面的串还没用完，所以我们先跳到i+k+1；

//#include <iostream>
//#include <string>
//#include <vector>
//#include<algorithm>
//using namespace std;
//
//int main()
//{   
//    int n;
//    cin >> n;
//    string s;
//    cin >> s;
//    //破环成链
//    s = s + s;
//    //
//    int i = 0, j = 1, k = 0;
//    while (i < n && j < n)
//    {
//        for (k = 0; s[i + k] == s[j + k] && k < n; k++);
//        s[i + k] > s[j + k] ? i = i + k + 1 : j = j + k + 1;
//        if (i == j) j++;
//    }
//    int posi = min(i, j);
//    cout << s.substr(posi, n);
//    return 0;
//}
