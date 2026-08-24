////https://www.luogu.com.cn/problem/P1290
//#include <iostream>
//#include <algorithm>
//using namespace std;
//bool stan_wins(int a, int b) 
//{
//    if (a < b) swap(a, b);
//    // 边界：可以直接一步减到 0
//    if (a % b == 0) return true;
//    // 关键：如果倍数 >= 2，当前玩家拥有控制权，必胜
//    if (a / b >= 2) return true;
//    // 否则只能减去 1 倍，胜负关系反转（下一个人赢，我就输）
//    return !stan_wins(b, a - b);
//}
//int main() 
//{
//    int c, a, b;
//    cin >> c;
//    while (c--) 
//    {
//        cin >> a >> b;
//        if (stan_wins(a, b)) cout << "Stan wins" << endl;
//        else cout << "Ollie wins" << endl;
//    }
//    return 0;
//}