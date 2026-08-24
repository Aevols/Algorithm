////这道题是P1638逛画展的翻版，只不过是元素换成了字符串而不是整数
////还是有点不一样的，因为不一定要求单词表全部背完
//#include <iostream>
//#include<algorithm>
//#include<string>
//#include<map>
//#include<set>
//using namespace std;
//string s[100005], s1;
//set<string>word;
//map<string, int>cnt;
//int sum, n, m,len;
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n;
//    for (int i = 0; i < n; i++) { cin >> s1; word.insert(s1); }
//    cin >> m;
//    len = m;
//    for (int j = 1, i = 1; j <= m; j++) 
//    {  //i<=j
//        cin >> s[j];
//        if (word.count(s[j])) cnt[s[j]]++;
//        if (cnt[s[j]] == 1) sum++, len = j - i + 1;
//        while (i <= j) 
//        {
//            if (cnt[s[i]] == 1) break; //保持i指针位置不动
//            if (cnt[s[i]] >= 2) cnt[s[i]]--, i++; //去重,更优
//            if (!word.count(s[i])) i++; //去掉非目标单词,更优
//        }
//        len = min(len, j - i + 1); //更新
//    }
//    cout << sum << endl << len;
//}
//
