//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//struct node 
//{
//    int t, id; //接水时间,编号
//    bool operator<(node& b) {
//        return t < b.t;
//    }
//}a[1010];
//
//int main() {
//    int n; cin >> n;
//    for (int i = 1; i <= n; i++)
//        cin >> a[i].t, a[i].id = i;
//
//    sort(a + 1, a + n + 1);
//    for (int i = 1; i <= n; i++)
//        cout << a[i].id << " ";
//    puts("");
//
//    double tim = 0;
//    for (int i = 1; i <= n - 1; i++)
//        tim += a[i].t * (n - i);
//    printf("%.2lf", tim / n);
//}