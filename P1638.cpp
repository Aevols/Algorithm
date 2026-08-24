////https://www.luogu.com.cn/problem/P1638
//#include <iostream>
//#include<algorithm>
//using namespace std;
//const int N = 1e6 + 5;
//const int M = 2e3 + 5;
//int n, m;
//int painting[N], cnt[M], num;
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n>> m;
//    for (int i = 1; i <= n; i++)cin >> painting[i];
//    int ansl=1, ansr=n;
//    int l = 1, r = 1;
//    for (;r <= n; r++)
//    {   
//        int pa = painting[r];
//        cnt[pa]++;
//        if (cnt[pa] == 1)num++;
//
//        //×óÖ¸ÕëÂß¼­
//        while (num == m)
//        {   
//            if (r - l < ansr - ansl)ansr = r, ansl = l;
//            pa = painting[l++];
//            cnt[pa]--;
//            if (cnt[pa] == 0)num--;
//        }
//    }
//    cout << ansl<<" " << ansr;
//    return 0;
//}
