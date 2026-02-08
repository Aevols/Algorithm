////kmp算法
////https://www.luogu.com.cn/problem/P3375
//#include <iostream>
//#include <string>
//#include <vector>
//#include<algorithm>
//using namespace std;
//const int N = 1e6 + 5;
//int ne[N];
//int main()
//{
//    string s1, s2;
//    cin >> s1;
//    cin >> s2;
//	s1 = " " + s1;
//	s2 = " " + s2;
//    //求next数组（这里的next数组实际上是nextval，数据结构讲的简单也正是分了这两步才会简单很多）
//	ne[1] = 0;//前后缀是真前后缀，所以第一个字符的前缀后缀长度为0
//    for (int i = 2, j = 0; i < s2.size(); i++)
//    {
//        while (j && s2[i] != s2[j + 1])j = ne[j];//如果j为0我们就没必要回溯了
//        if (s2[i] == s2[j + 1])j++;
//        ne[i] = j;
//    }
//    //字符串匹配
//    int n = s1.size() - 1;
//    int m = s2.size() - 1;
//    for (int i = 1,j=0; i <= n; i++)
//    {
//        while (j && s1[i] != s2[j + 1])j = ne[j];//失配前跳
//        if (s1[i] == s2[j + 1])j++;//匹配后移
//        if (j == m)cout << i - m + 1 << endl;//全配记录
//    }
//    for (int i = 1; i <= m; i++)cout << ne[i] << " ";
//    return 0;
//}
//法2：哈希大法无敌的大法
//#include<bits/stdc++.h>
//using namespace std;
//
//typedef unsigned long long ull;
//const int N = 1e6 + 5;
//const ull B = 131;
//string s, t;
//int n, m;
//ull f[N], g[N], b[N];
//
//ull get1(int l, int r) {
//    return f[r] - f[l - 1] * b[r - l + 1];
//}
//ull get2(int l, int r) {
//    return g[r] - g[l - 1] * b[r - l + 1];
//}
//signed main() {
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> s >> t;
//    n = s.size(), m = t.size();
//    s = " " + s; t = " " + t;
//    b[0] = 1;
//
//    for (int i = 1; i < N; ++i) b[i] = b[i - 1] * B;
//    for (int i = 1; i <= n; ++i) f[i] = f[i - 1] * B + s[i];
//    for (int i = 1; i <= m; ++i) g[i] = g[i - 1] * B + t[i];
//    for (int i = 1; i <= n - m + 1; ++i)
//        if (get1(i, i + m - 1) == g[m]) cout << i << '\n';
//
//    cout << 0 << ' ';
//    for (int i = 2, j = 0; i <= m; ++i) {
//        while (j >= 0 && get2(1, j + 1) != get2(i - j, i)) j--;
//        j++;
//        cout << j << ' ';
//    }
//    return 0;
//}