////https://www.luogu.com.cn/problem/P1379
//#include <iostream>
//#include <algorithm>
//#include <queue>
//#include <unordered_map>
//using namespace std;
//
//string str;
//unordered_map<string, int> d;
//int dx[4] = { -1, 0, 1, 0 };
//int dy[4] = { 0, 1, 0, -1 };
//
//int bfs(string str) 
//{   
//    queue<string> q;
//    d[str] = 0;//防止重新加入原字符串
//    q.push(str);
//    string end = "123804765"; //目标状态
//    while (q.size()) 
//    {
//        auto s = q.front(); q.pop();
//        if (s == end) return d[s]; //到达目标
//        int k = s.find('0');
//        int x = k / 3, y = k % 3; //下标位置转换
//        for (int i = 0; i < 4; i++) 
//        {
//            int a = x + dx[i], b = y + dy[i];
//            if (a < 0 || a >= 3 || b < 0 || b >= 3)continue;
//            int dis = d[s]; //记住步数
//            swap(s[k], s[a * 3 + b]); //交换
//            if (!d.count(s))d[s] = dis + 1, q.push(s);
//            swap(s[k], s[a * 3 + b]); //还原
//        }
//    }
//}
//int main() 
//{
//    cin >> str;
//    cout << bfs(str);
//    return 0;
//}