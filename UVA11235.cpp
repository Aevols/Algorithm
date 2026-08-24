//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1e5 + 5;
//int arr[N], blo[N], n, q;
//int bucketL[N], bucketR[N];
//int st[N][18];
//
//int log2_floor(int n) 
//{
//    int i = 0;
//    while ((1 << i) <= (n >> 1)) i++;
//    return i;
//}
//
//int main() 
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    while (cin >> n >> q && n) 
//    {
//        int v = 1, cur = -N - 1, cnt = 0;
//        for (int i = 1; i <= n; i++) 
//        {
//            cin >> arr[i];
//            if (arr[i] != cur) 
//            {
//                if (i > 1) 
//                {
//                    st[v][0] = cnt;
//                    bucketR[v] = i - 1;
//                    v++;
//                }
//                bucketL[v] = i;
//                cur = arr[i];
//                cnt = 1;
//            }
//            else 
//            {
//                cnt++;
//            }
//            blo[i] = v;
//        }
//        // 结算最后一个桶
//        st[v][0] = cnt;
//        bucketR[v] = n;
//        int total = v; // 桶的总数
//
//        // 建ST表（下标是桶编号1~total）
//        for (int i = 1; i < 18; i++)
//            for (int j = 1; j + (1 << i) - 1 <= total; j++)
//                st[j][i] = max(st[j][i - 1], st[j + (1 << (i - 1))][i - 1]);
//
//        int l, r;
//        while (q--) 
//        {
//            cin >> l >> r;
//            int lb = blo[l], rb = blo[r];
//            if (lb == rb) { cout << r - l + 1 << "\n"; continue; }
//            int a = bucketR[lb] - l + 1;
//            int b = r - bucketL[rb] + 1;
//            int c = 0;
//            if (lb + 1 <= rb - 1) 
//            {
//                int k = log2_floor(rb - lb - 1);
//                c = max(st[lb + 1][k], st[rb - (1 << k)][k]);
//            }
//            cout << max({ a, b, c }) << "\n";
//        }
//    }
//    return 0;
//}