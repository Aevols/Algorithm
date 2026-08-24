//优先把最左边填满先，分两个指针，一个指针指向最小未满足堆，
// 第二个指向当前从哪一堆借牌（多退少补）
//https://www.luogu.com.cn/problem/P1031
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//int n, a[101], avg, cnt;
//
//int main() {
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++) {
//        scanf("%d", &a[i]);
//        avg += a[i];
//    }
//    avg /= n;
//
//    for (int i = 1; i <= n; i++) {
//        if (a[i] - avg) {
//            a[i + 1] += a[i] - avg; //多退少补
//            cnt++;
//        }
//    }
//    printf("%d\n", cnt);
//    return 0;
//}