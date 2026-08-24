////https://www.luogu.com.cn/problem/P1032
////双向BFS
//#include <iostream>
//#include <queue>
//#include <unordered_map>
//#include<string>
//using namespace std;
//
//const int N = 7;
//int n;
//string A, B, a[N], b[N];
//
//int extend(queue<string>& q, unordered_map<string, int>& da,
//    unordered_map<string, int>& db, string a[], string b[]) 
//{
//    int m = q.size();
//    while (m--) 
//    {                       //每次扩展一层
//        auto f = q.front(); q.pop();      //父串出队
//        for (int i = 0; i < n; i++)          //枚举规则
//            for (int j = 0; j < f.size(); j++) //枚举父串中的位置
//                if (f.substr(j, a[i].size()) == a[i]) 
//                {
//                    string s = f.substr(0, j) + b[i] + f.substr(j + a[i].size());
//                    if (da.count(s)) continue;
//                    if (db.count(s)) return da[f] + db[s] + 1;
//                    da[s] = da[f] + 1;  //变换步数
//                    q.push(s);      //子串入队
//                }
//    }
//    return 11;
//}
//int bfs() 
//{
//    if (A == B) return 0;
//    queue<string> qa, qb;
//    unordered_map<string, int> da, db;
//    qa.push(A), qb.push(B); da[A] = db[B] = 0;
//    int step = 10, t;
//    while (step--) 
//    {
//        if (qa.size() <= qb.size()) t = extend(qa, da, db, a, b);
//        else t = extend(qb, db, da, b, a);
//        if (t <= 10) return t;
//    }
//    return 11;
//}
//int main() 
//{
//    cin >> A >> B;
//    while (cin >> a[n] >> b[n]) n++;
//    int t = bfs();
//    t == 11 ? printf("NO ANSWER!") : printf("%d", t);
//}