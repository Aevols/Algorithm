//// ×Ö·û´®¹þÏ£ O(nm)
//#include<iostream>
//#include<string>
//#include<algorithm>
//#define ull unsigned long long
//using namespace std;
//
//const int N = 10010, B = 131;
//int n;
//char s[N];
//ull h[N];
//
//ull get(char* s) { //sµÄ¹þÏ£Öµ
//    int m = strlen(s + 1);
//    ull f = 0;
//    for (int i = 1; i <= m; i++) f = f * B + s[i];
//    return f;
//}
//int main() {
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        scanf("%s", s + 1);
//        h[i] = get(s);
//    }
//
//    sort(h + 1, h + n + 1);
//    int cnt = unique(h + 1, h + n + 1) - h - 1;
//    cout << cnt;
//    return 0;
//}