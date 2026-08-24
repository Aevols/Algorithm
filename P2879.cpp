////https://www.luogu.com.cn/problem/P2879#ide
////错误1，去重
//#include <iostream>
//#include<algorithm>
//#include<set>
//using namespace std;
//const int N = 1e4 + 5;
//int n, i, h, r;
//int height,d[N];
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> i >> h >> r;
//    d[0] = h;
//    int le, ri;
//    set<pair<int, int>> st;
//    while (r--) {
//        cin >> le >> ri;
//        if (le > ri) swap(le, ri);
//        if (st.count({ le, ri })) continue;  // 重复则跳过
//        st.insert({ le, ri });
//        d[le + 1]--;
//        d[ri]++;
//    }
//    height = d[0];
//    for (int i = 1; i <= n; i++)
//    {
//        height += d[i];
//        cout << height << "\n";
//    }
//    return 0;
//}
