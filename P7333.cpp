//A06文件太长了700多行，剩下题目分题号来写
//https://www.luogu.com.cn/problem/P7333
// 双排序  + 二分 + 环展开
//思路：例子：n = 7
//下标:   1  2  3  4  5  6  7
//a = 8  1  5  3 10  6  2
//b = 4  9  2  7  1  3  5
//把(a_i, i) 按 a 降序排
//a 排序：
//(a, idx) :
//	(10, 5), (8, 1), (6, 6), (5, 3), (3, 4), (2, 7), (1, 2)
//b 排序：这就是查询顺序
//(b, idx) :
//	(9, 2), (7, 4), (5, 7), (4, 1), (3, 6), (2, 3), (1, 5)
//然后按bi降序查找
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//const int N = 1e5 + 5;
//int n;
//struct Node
//{
//	int idx;
//	int num;
//	//重载运算符
//	bool operator<(const Node& rhs) const
//	{
//		return num > rhs.num;  // 降序：num 大的排在前面
//	}
//};
//vector<Node> a, b;
//int main()
//{	
//	//输入
//	cin >> n;
//	Node node;
//	for (int i = 1; i <= n; i++)
//	{
//		node.idx = i;
//		cin >> node.num;
//		a.push_back(node);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		node.idx = i;
//		cin >> node.num;
//		b.push_back(node);
//	}
//	//算法部分
//	sort(a.begin(), a.end());
//	sort(b.begin(), b.end());
//	
//}
//

