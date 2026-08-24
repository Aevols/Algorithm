////https://www.luogu.com.cn/problem/P3372#ide
//#include <iostream>
//#define int long long
//using namespace std;
//const int N = 1e5 + 5;
//inline int lowbit(int x) 
//{
//    return x & -x;
//}
//int n, m;
//int a[N];
//int c1[N], c2[N];
//
//void add(int c[], int x, int v) 
//{
//    for (int i = x; i <= n; i += lowbit(i))
//        c[i] += v;
//}
//
//int sum(int c[], int x) 
//{
//    int res = 0;
//    for (int i = x; i > 0; i -= lowbit(i))
//        res += c[i];
//    return res;
//}
//
//int prefix_sum(int x) 
//{
//    return (x + 1) * sum(c1, x) - sum(c2, x);
//}
//
//void range_add(int l, int r, int k) 
//{
//    add(c1, l, k);
//    add(c1, r + 1, -k);
//    add(c2, l, l * k);
//    add(c2, r + 1, -(r + 1) * k);
//}
//
//int main() 
//{
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    cin >> n >> m;
//    for (int i = 1; i <= n; i++) 
//    {
//        cin >> a[i];
//        range_add(i, i, a[i]);  // ³õÊ¼»¯²î·Ö
//    }
//    while (m--) 
//    {
//        int op;
//        cin >> op;
//        if (op == 1) 
//        {
//            int l, r, k;
//            cin >> l >> r >> k;
//            range_add(l, r, k);
//        }
//        else 
//        {
//            int l, r;
//            cin >> l >> r;
//            cout << prefix_sum(r) - prefix_sum(l - 1) << '\n';
//        }
//    }
//}