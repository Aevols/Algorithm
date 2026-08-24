//////https://www.luogu.com.cn/problem/P1190
////#include <iostream>
////#include<algorithm>
////using namespace std;
////int w[10005], s[105], n, m;
////int main()
////{
////    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
////    cin >> n >> m;
////    for (int i = 1; i <= n; i++)cin >> w[i];
////    for (int i = 1; i <= n; i++)
////    {
////        int t = 1;
////        for (int j = 2; j <= m; j++)
////        {
////            if (s[t] > s[j])t = j;
////        }
////        s[t] += w[i];
////    }
////    int ans = 0;
////    for (int i = 1; i <= n; i++)ans = max(ans, s[i]);
////    cout << ans;
////    return 0;
////}
////#include <iostream>
////#include <cstring>
////#include <algorithm>
////#include <queue>
////using namespace std;
////
////int n, m, w[10005]; //w:每人的接水量
////priority_queue<int, vector<int>, greater<int> >s; //s:每个水龙头的出水量
////
////int main() 
////{
////    scanf("%d%d", &n, &m);
////    for (int i = 1; i <= n; i++) scanf("%d", &w[i]);
////    for (int i = 1; i <= m; i++) s.push(0);
////    for (int i = 1; i <= n; i++) 
////    {
////        int t = s.top(); s.pop();
////        s.push(t + w[i]);
////    }
////    for (int i = 1; i < m; i++) s.pop();
////    printf("%d\n", s.top());
////}
////https://www.luogu.com.cn/problem/P1376
////小根堆经典
//#include <iostream>
//#include<algorithm>
//using namespace std;
//const int N = 1e4 + 5;
//int n, s, c[N], y[N];
//long long ans = 0;
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> s;
//    for (int i = 1; i <= n; i++)
//        cin >> c[i] >> y[i];
//    int minPrice = 1e7;
//    for (int i = 1; i <= n; i++)
//    {
//        minPrice = min(minPrice + s, c[i]);
//        ans += (minPrice * y[i]);
//    }
//    cout << ans;
//    return 0;
//}
