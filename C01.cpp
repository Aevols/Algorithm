////并查集
////https://www.luogu.com.cn/problem/P3367
// 法一：普通并查集，够用
//#include <iostream>
//#include <string>
//#include <vector>
//#include<algorithm>
//using namespace std;
//const int N = 2e5 + 5;
//int fa[N];
//int n, m;
//int find(int a)
//{
//    if (fa[a] == a)return a;
//    return fa[a] = find(fa[a]);//注意这里是find(fa[a])不是find（a)
//}
//void unset(int y, int z)
//{
//    fa[find(y)] = find(z);//注意这里是fa[find(y)]不是fa[y]
//}
//int main()
//{
//    cin >> n>> m;
//    for (int i = 1; i <= n; i++)fa[i] = i;//更新父节点
//    int x, y, z;
//    while (m--)
//    {
//        cin >> x >> y >> z;
//        if (x == 1)unset(y, z);
//        else
//        {
//            if (find(y) == find(z))cout << "Y" << endl;
//            else cout << "N" << endl;
//        }
//    }
//    return 0;
//}
//法二：//并查集 按秩合并
//#include<bits/stdc++.h>
//using namespace std;
//
//const int N = 200005;
//int n, m, x, y, z;
//int fa[N], siz[N]; //子树大小
//
//int find(int x) {
//    return fa[x] == x ? x : fa[x] = find(fa[x]);
//}
//void unset(int x, int y) {
//    x = find(x), y = find(y);
//    if (x == y)return;
//    if (siz[x] < siz[y]) swap(x, y);
//    fa[y] = x; siz[x] += siz[y];
//}
//int main() {
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++) fa[i] = i, siz[i] = 1;
//    while (m--) {
//        cin >> z >> x >> y;
//        if (z == 1) unset(x, y);
//        else {
//            if (find(x) == find(y))puts("Y");
//            else puts("N");
//        }
//    }
//}

////https://www.luogu.com.cn/problem/P4047
////思路：先计算出所有点的距离，存起来，然后根据距离进行排序，然后遍历
////进行并查集查找合并，合并后让联通度减一知道满足题目给出的最多部落数
//#include <iostream>
//#include <string>
//#include <vector>
//#include<algorithm>
//#include<math.h>
//using namespace std;
////数据定义
//struct Record
//{
//    int fa, son;
//    double dis;
//    //重载运算符
//    bool operator<(const Record& rhs) const 
//    {
//        return dis < rhs.dis; // 核心：比较两个对象的dis成员
//    }
//};
//struct Point
//{
//    int x, y;
//}; 
//int n, k,cnt;//cnt记录有多少条距离记录
//Point p[1005];
//vector<Record> record;
//int fa[1005];
////函数定义
//void get_distance()
//{
//    for(int i=1;i<n;i++)
//        for (int j = i + 1; j <= n; j++)
//        {
//            Record r;
//            r.fa = i, r.son = j;
//            int d = (p[i].x - p[j].x) * (p[i].x - p[j].x) + (p[i].y - p[j].y) * (p[i].y - p[j].y);
//            r.dis = sqrt(d);
//            record.push_back(r);
//        }
//}
//int find(int n)//查找函数
//{
//    if (fa[n] == n)return n;//找到父节点
//    return fa[n] = find(fa[n]);
//}
//void unset(int x,int y)//合并函数
//{
//    fa[find(x)] = find(y);
//}
//int main()
//{
//    cin >> n >> k;
//    int x, y;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> x >> y;
//        p[i].x = x;
//        p[i].y = y;
//    }
//    get_distance();
//    sort(record.begin(), record.end());
//    //并查集逻辑
//    for (int i = 1; i <= n; i++)fa[i] = i;
//    int point = 0;//记录指针，后续有用
//    for (;point <= record.size() && n > k; point++)
//    {
//        Record r = record[point];
//        if (find(r.fa) != find(r.son))
//        {
//            unset(r.fa, r.son);
//            n--;
//            //printf("%.2f", r.dis);
//        }
//    }
//    //接下来找节点了
//    while (1)
//    {
//        Record r = record[point];
//        if (find(r.fa) != find(r.son))
//        {
//            printf("%.2f", r.dis);
//            break;
//        }
//        point++;//注意注意注意，这里忘记更新point了
//    }
//    return 0;
//}
