//#include <iostream>
//#include<algorithm>
//using namespace std;
//const int N = 2e4 + 5;
//struct Line 
//{ 
//    int l, r;
//    bool operator<(const Line& t) { return this->l < t.l; } 
//}line[N];
//int ans = 0;
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    int n; cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> line[i].l >> line[i].r;
//    }
//    sort(line + 1, line + n + 1);
//    int st = line[1].l, ed = line[1].r;
//    ans +=  (ed-st);
//    for (int i = 2; i <= n; i++)
//    {
//        if (line[i].l < ed)
//        {
//            if (line[i].r < ed)continue;//¸²¸Ç
//            else st = ed, ed = line[i].r, ans += (ed - st);
//        }
//        else
//        {
//            st = line[i].l, ed = line[i].r, ans += (ed - st);
//        }
//    }
//    cout << ans;
//    return 0;
//}
