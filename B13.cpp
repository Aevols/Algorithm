////这是一道多源bfs题
////不知道为啥这道题目按字符串读入就能ac
// 解答：输入流中的内容：
//```
//3 4\n
//0001\n
//0011\n
//0110\n
//```
//
//当执行 `cin >> g[0][0]` 时：
//1. `cin` 跳过空白符，找到第一个非空白字符 `0`
//2. 开始读取整数，遇到 `0001` 这 * *四个连续的数字字符 * *
//3. `cin` 把它们当作 * *一个完整的整数 * *`1`（前导0被忽略）
//4. 存入 `g[0][0] = 1`
//5. * *后面三个位置根本读不到数据 * *，因为整行已经被当作一个数读完了
//
//### 底层细节
//
//`cin >> ` 读取整数的步骤：
//1. * *跳过所有空白字符 * *（`' '`, `'\n'`, `'\t'` 等）
//2. * *读取连续的数字字符 * *，直到遇到非数字字符
//3. * *将这些数字字符转换为整数 * *
//
//关键问题： * *`0001` 中间没有空格或其他分隔符，所以被当作一个整数！ * *
// 如果输入时有空格上面代码就是对的
////https://www.luogu.com.cn/problem/U311289
//#include <iostream>
//#include <queue>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//
//const int N = 1005;
//int n, m;
//int g[N][N];
//int dis[N][N];
//int dx[4] = { -1,0,1,0 };
//int dy[4] = { 0,1,0,-1 };
//void bfs()
//{   
//    queue<pair<int, int>> q;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            if (g[i][j] == 1)q.push({ i,j }), dis[i][j] = 0;
//    while (q.size())
//    {
//        auto u = q.front();
//        q.pop();
//        for (int i = 0; i < 4; i++)
//        {
//            int a = u.first + dx[i];
//            int b = u.second + dy[i];
//            if (a < 0 || a >= n || b < 0 || b >= m)continue;
//            if (dis[a][b] != -1)continue;
//            q.push({ a,b });
//            dis[a][b] = dis[u.first][u.second] + 1;
//        }
//    }      
//}
//
//int main()
//{
//    memset(dis, -1, sizeof dis);
//    cin >> n >> m;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            cin >> g[i][j];
//    bfs();
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//            cout << dis[i][j];
//        cout << endl;
//    }       
//    return 0;
//}
//#include <iostream>
//#include <queue>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//const int N = 1005;
//int n, m;
//int g[N][N];
//int dis[N][N];
//int dx[4] = { -1,0,1,0 };
//int dy[4] = { 0,1,0,-1 };
//
//void bfs()
//{
//    queue<pair<int, int>> q;
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            if (g[i][j] == 1)
//                q.push({ i,j }), dis[i][j] = 0;
//
//    while (q.size())
//    {
//        auto u = q.front();
//        q.pop();
//        for (int i = 0; i < 4; i++)
//        {
//            int a = u.first + dx[i];
//            int b = u.second + dy[i];
//            if (a < 0 || a >= n || b < 0 || b >= m)continue;
//            if (dis[a][b] != -1)continue;
//            q.push({ a,b });
//            dis[a][b] = dis[u.first][u.second] + 1;
//        }
//    }
//}
//
//int main()
//{
//    memset(dis, -1, sizeof dis);
//    cin >> n >> m;
//
//    // 修改输入方式：用字符串读取每一行
//    for (int i = 0; i < n; i++)
//    {
//        string s;
//        cin >> s;
//        for (int j = 0; j < m; j++)
//            g[i][j] = s[j] - '0';  // 将字符转换为数字
//    }
//
//    bfs();
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//            cout << dis[i][j] << ' ';
//        cout << endl;
//    }
//    return 0;
//}