////优先队列实际上就是用堆来实现的
////对顶堆
// https://www.luogu.com.cn/problem/P7072
// 大小根堆改成big，small好像一点
//#include <iostream>
//#include<algorithm>
//#include<queue>
//using namespace std;
//priority_queue<int, vector<int>, greater<int>> minHeap;
//priority_queue<int, vector<int>, less<int>> maxHeap;
//int n, w;
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> n >> w;
//    int grade,k;//k代表获奖人数
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> grade;
//        k = max(1, (int)i * w / 100);
//        if (minHeap.empty() || grade > minHeap.top())minHeap.push(grade);
//        else maxHeap.push(grade);
//
//        //调整
//        while (minHeap.size() > k)
//        {
//            grade = minHeap.top();
//            minHeap.pop();
//            maxHeap.push(grade);
//        }
//        while (minHeap.size() < k)
//        {
//            grade = maxHeap.top();
//            maxHeap.pop();
//            minHeap.push(grade);
//        }
//        cout << minHeap.top()<<" ";
//
//    }
//    return 0;
//}
//https://www.luogu.com.cn/problem/SP16254
//#include <iostream>
//#include<algorithm>
//#include<queue>
//using namespace std;
//int t;
//void fun()
//{
//    int n;
//    priority_queue<int, vector<int>, greater<int>>small;
//    priority_queue<int> big;//默认大根堆比小根堆多一个
//    while (cin >> n, n)
//    {
//        if (n > 0)
//        {
//            if (small.empty() || n > small.top())small.push(n);
//            else big.push(n);
//           
//        }
//        if (n == -1)
//        {
//            cout << big.top()<<endl;
//            big.pop();
//        }
//        //调整大小
//        while (small.size() > big.size())
//        {
//            n = small.top();
//            small.pop(); big.push(n);
//        }
//        while (small.size() + 1 < big.size())
//        {
//            n = big.top();
//            big.pop(); small.push(n);
//        }
//    }
//}
//int main()
//{
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    cin >> t;
//    while (t--)
//    {
//        fun();
//    }
//    return 0;
//}
