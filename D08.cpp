////Kruskal算法
//#include <iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//const int N = 5e3 + 5;
//int n, m, fa[N],vis[N];
//vector<pair<int, pair<int, int>>>e;
//long long ans;
//int find(int x)
//{
//    if (x == fa[x])return x;
//    return fa[x] = find(fa[x]);
//}
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> m;
//    int x, y, z;
//    for (int i = 1; i <= n; i++)fa[i] = i;
//    while (m--)
//    {
//        cin >> x >> y >> z;
//        if(x!=y)e.push_back({ z,{x,y} });//防止负环，其实下方也能防
//    }
//    sort(e.begin(),e.end());
//    int cnt = 0;
//    for (int i = 0; i < e.size(); i++)
//    {
//        int x = e[i].second.first, y = e[i].second.second, w = e[i].first;
//        if (find(x) != find(y))
//        {   //第一个语句一开始写错了
//            fa[find(x)] = find(y); cnt++; ans += w;
//        }
//        if (cnt == n - 1)break;
//    }
//    if (cnt == n - 1)cout << ans;
//    else cout << "orz";
//    return 0;
//}
