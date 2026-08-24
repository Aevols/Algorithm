////https://www.luogu.com.cn/problem/P1468#ide
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//using namespace std;
//const int N = 200;
//int c, n;
//bool light[N];       // 存储当前生成的灯状态
//bool need_on[N];     // 必须亮的灯
//bool need_off[N];    // 必须灭的灯
//
//// 检查当前状态是否符合题目要求
//bool check()
//{
//    for (int i = 1; i <= n; i++)
//    {
//        if (need_on[i] && light[i] != 1) return false;
//        if (need_off[i] && light[i] != 0) return false;
//    }
//    return true;
//}
//
//int main()
//{
//    cin >> n >> c;
//    int num;
//    while (scanf("%d", &num), num != -1)
//    {
//
//        need_on[num] = 1;
//    }
//    while (scanf("%d", &num), num != -1)
//    {
//        need_off[num] = 1;
//    }
//    vector<string> ans;
//    for (int i = 0; i <= 1; i++)
//        for (int j = 0; j <= 1; j++)
//            for (int k = 0; k <= 1; k++)
//                for (int l = 0; l <= 1; l++)
//                {
//                    for (int m = 1; m <= n; m++) light[m] = 1;
//                    if (i == 1) for (int m = 1; m <= n; m++) light[m] = !light[m]; // 按钮1
//                    if (j == 1) for (int m = 1; m <= n; m += 2) light[m] = !light[m];// 按钮2
//                    if (k == 1) for (int m = 2; m <= n; m += 2) light[m] = !light[m];// 按钮3
//                    if (l == 1) for (int m = 1; m <= n; m += 3) light[m] = !light[m];// 按钮4
//                    int op = i + j + k + l;
//                    if (c >= op && (c - op) % 2 == 0 && check())
//                    {
//                        string s;
//                        for (int m = 1; m <= n; m++) s += (char)('0' + light[m]);
//                        ans.push_back(s);
//                    }
//                }
//    sort(ans.begin(), ans.end());
//    for (string s : ans) cout << s << '\n';
//    // 无结果输出IMPOSSIBLE
//    if (ans.empty()) cout << "IMPOSSIBLE";
//    return 0;
//}