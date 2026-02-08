////https://www.luogu.com.cn/problem/U388817
//#include <iostream>
//using namespace std;
//using LL = long long;
//const int N = 5005;
//
//int matrix[N][N];
//int n,m,q;
//
//int main()
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n >> m >> q;
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            cin >> matrix[i][j];
//            matrix[i][j] = matrix[i][j] + matrix[i - 1][j] + matrix[i][j - 1] - matrix[i - 1][j - 1];
//            //cout << matrix[i][j] << " ";
//        }
//        //cout << endl;
//    }
//   /* for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {   
//          cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }*/
//    int x1, x2, y1, y2;
//    while (q--)
//    {
//        cin >> x1 >> y1 >> x2 >> y2;
//        cout << matrix[x2][y2] + matrix[x1-1][y1-1] - matrix[x2][y1 - 1] - matrix[x1 - 1][y2];
//        cout << endl;
//    }
//    return 0;
//}
