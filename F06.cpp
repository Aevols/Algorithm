////Trie字典树
//// 注意其实使用字典树手动清空实际上很多时候效果比memset好很多
//// 这里我就不改了
////https://www.luogu.com.cn/problem/P8306
// 法一：字典树
//#include <iostream>
//#include <cstring>
//#include <vector>
//#include<algorithm>
//using namespace std;
//
//const int N = 3e6 + 5;
//int T, n, q;
//int ch[N][65], cnt[N], idx; //ch[p][i]:点边数组,对应多叉树
//
//int getnum(char c) 
//{
//    if (c >= 'A' && c <= 'Z') return c - 'A'; //0~25
//    else if (c >= 'a' && c <= 'z') return c - 'a' + 26; //26~51
//    else return c - '0' + 52; //52~61
//}
//void insert(string s) 
//{
//    int p = 0;
//    for (auto c : s) 
//    {
//        int i = getnum(c);
//        if (!ch[p][i]) ch[p][i] = ++idx; //从p点走边i到达新点的编号
//        p = ch[p][i]; //走到子节点
//        cnt[p]++;   //p点之前的前缀的插入次数
//    }
//}
//int query(string s) 
//{
//    int p = 0;
//    for (auto c : s) 
//    {
//        int i = getnum(c);
//        if (!ch[p][i]) return 0;
//        p = ch[p][i];
//    }
//    return cnt[p];
//}
//int main() 
//{   
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> T;
//    while (T--) 
//    {   
//        memset(ch, 0, sizeof ch); memset(cnt, 0, sizeof cnt); idx = 0;
//        cin >> n >> q; string s;
//        for (int i = 1; i <= n; i++) cin >> s, insert(s);
//        for (int i = 1; i <= q; i++) cin >> s, cout << query(s) << "\n";
//
//    }
//    return 0;
//}
//法二：hash
