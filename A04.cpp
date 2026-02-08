//P1408做两份一份高精度一份低精度，先留着
// 高精度 O(n)
//#include <iostream>
//#include <string>
//#include <vector>
//#include<algorithm>
//using namespace std;
//
//void div(string sa, int b) {
//    int m = sa.size();
//    vector<int> a(m + 1, 0), c(m + 1, 0);
//    for (int i = 0; i < m; i++) a[i] = sa[m - 1 - i] - '0';
//
//    long long t = 0;
//    for (int i = m - 1; i >= 0; i--) {
//        t = t * 10 + a[i];
//        c[i] = t / b;
//        t %= b;
//    }
//    while (!c[m] && m) m--;
//    for (int i = m; ~i; i--) cout << c[i];
//}
//int main() {
//    string a; int b;
//    cin >> a >> b;
//    div(a, b);
//    return 0;
//}