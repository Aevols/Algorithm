////https://www.luogu.com.cn/problem/P1637
////ÀëÉ¢»¯+Ê÷×´Êý×é+
//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 3e4 + 5;
//using LL = long long;
//
//LL tree1[N], tree2[N], arr[N], sor[N];
//LL ans = 0;
//int n, m;
//inline int lowbit(int i) 
//{
//    return i & -i;
//}
//
//inline void update(LL(&tree)[N], int posi, int v) 
//{
//    for (int i = posi; i <= m; i += lowbit(i)) 
//    {
//        tree[i] += v;
//    }
//}
//
//inline LL query(LL(&tree)[N], int posi) 
//{
//    LL ans = 0; 
//    for (int i = posi; i > 0; i -= lowbit(i)) 
//    {
//        ans += tree[i];
//    }
//    return ans;
//}
//
//int main() 
//{  
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//
//    cin >> n;
//    for (int i = 1; i <= n; i++) 
//    {
//        cin >> arr[i];
//        sor[i] = arr[i];
//    }
//    sort(sor + 1, sor + n + 1);
//    m = unique(sor + 1, sor + n + 1) - (sor + 1);
//    for (int i = 1; i <= n; i++) 
//    {
//        int num = lower_bound(sor + 1, sor + 1 + m, arr[i]) - sor;
//        ans += query(tree2, num - 1);
//        update(tree2, num, query(tree1, num - 1));
//        update(tree1, num, 1);
//    }
//
//    cout << ans;
//    return 0;
//}