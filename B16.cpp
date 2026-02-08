////https://www.luogu.com.cn/problem/P2730
//#include<iostream>
//#include<map>
//#include<queue>
//#include<string>
//using namespace std;
//
//string es; //Ä¿±ê´®
//queue<string> q; //<×´Ì¬´®>
//map<string, string> mp; //<×´Ì¬´®,²Ù×÷´®>
//
//void A(string s) 
//{
//    string t = s;
//    s[0] = t[7], s[7] = t[0], s[1] = t[6], s[6] = t[1];
//    s[2] = t[5], s[5] = t[2], s[3] = t[4], s[4] = t[3];
//    if (!mp.count(s)) q.push(s), mp[s] = mp[t] + 'A';
//}
//void B(string s) 
//{
//    string t = s;
//    s[0] = t[3], s[1] = t[0], s[2] = t[1], s[3] = t[2];
//    s[7] = t[4], s[6] = t[7], s[5] = t[6], s[4] = t[5];
//    if (!mp.count(s)) q.push(s), mp[s] = mp[t] + 'B';
//}
//void C(string s) 
//{
//    string t = s;
//    s[1] = t[6], s[2] = t[1], s[5] = t[2], s[6] = t[5];
//    if (!mp.count(s)) q.push(s), mp[s] = mp[t] + 'C';
//}
//void bfs(string str) 
//{
//    q.push(str);
//    while (q.size()) 
//    {
//        auto s = q.front(); q.pop();
//        A(s); B(s); C(s);
//        if (mp.count(es)) 
//        {
//            cout << mp[es].size() << endl << mp[es];
//            return;
//        }
//    }
//}
//int main() 
//{
//    char c;
//    for (int i = 0; i < 8; i++) cin >> c, es += c;
//    bfs("12345678");
//}