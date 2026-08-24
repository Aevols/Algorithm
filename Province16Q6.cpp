//#include <iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//string a, b;
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> a >> b;
//    int n = a.size();
//    int pre = -1, state = -1;//表示前一个连通块末尾的位置和状态;
//    int ans = 0;
//    for (int i = 0; i < n; i++)
//    {
//        if (a[i] == '.' && b[i] == '.')continue;
//        if (pre != -1)ans += (i - pre - 1);
//        if (a[i] == '#' && b[i] == '#') { state = 3; }
//        if (a[i] == '#' && b[i] == '.') {  if (state == 2)ans++,state=3; else state = 1; }
//        if (a[i] == '.' && b[i] == '#') {  if (state == 1)ans++,state=3; else state = 2; }
//        pre = i;
//    }
//    cout << ans;
//    return 0;
//}
