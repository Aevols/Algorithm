////https://www.luogu.com.cn/problem/U597840
//#include<iostream>
//#include<stack>
//using namespace std;
//const int N = 260;
//stack<char> s;
//string str;
//int main()
//{
//	cin >> str;
//	for (int i = 0; i < str.size(); i++)
//	{
//		if ((str[i] >= 'A' && str[i] <= 'Z')|| (str[i] >= 'a' && str[i] <= 'z'))cout << str[i];
//		else if (str[i] == '+' || str[i] == '-')
//		{
//			if (!s.empty() && s.top() != '(') 
//			{
//				while (!s.empty()&&s.top() != '(') { cout << s.top(); s.pop(); }
//			}
//			s.push(str[i]);
//		}
//		else if (str[i] == '*' || str[i] == '/')
//		{
//			if (!s.empty() && s.top() != '(' && (s.top() == '*' || s.top() == '/'))
//				//这行逻辑已经表明乘除前方不会还有乘除的
//			{
//				cout << s.top(); s.pop(); 
//			}
//			s.push(str[i]);
//		}
//		else if (str[i] == '(') s.push(str[i]);
//		else if (str[i] == ')') 
//		{
//			while (s.top() != '(') { cout << s.top(), s.pop(); }s.pop();
//		}
//	}
//	while(!s.empty()) { cout << s.top(), s.pop(); }
//	return 0;
//}
//
//优化版，实际上逻辑就是如果栈顶运算符优先级>=当前则弹出，所以定义一个prior函数
//应用在P1175上
//https://www.luogu.com.cn/problem/P1175
//#include<iostream>
//#include<stack>
//#include<vector>
//#include<string>
//using namespace std;
//stack<char> s;
//string str;
//int pri(char c)
//{
//    if (c == '+' || c == '-') return 1;
//    if (c == '*' || c == '/') return 2;
//    if (c == '^') return 3;
//}
//int calc(int a, int b, char op)
//{
//    if (op == '+') return a + b;
//    if (op == '-') return a - b;
//    if (op == '*') return a * b;
//    if (op == '/') return a / b;
//    if (op == '^')
//    {
//        int res = 1;
//        while (b--) res *= a;
//        return res;
//    }
//}
//int main()
//{
//    cin >> str;
//    vector<string> post;
//    // 中缀 → 后缀
//    for (int i = 0; i < str.size(); i++)
//    {
//        if (isdigit(str[i]))
//            post.push_back(string(1, str[i]));
//        else if (str[i] == '(')
//            s.push(str[i]);
//        else if (str[i] == ')')
//        {
//            while (s.top() != '(')
//            {
//                post.push_back(string(1, s.top()));
//                s.pop();
//            }
//            s.pop();
//        }
//        else
//        {
//            while (!s.empty() && s.top() != '(' &&
//                (pri(s.top()) > pri(str[i]) ||
//                    (pri(s.top()) == pri(str[i]) && str[i] != '^')))
//            {
//                post.push_back(string(1, s.top()));
//                s.pop();
//            }
//            s.push(str[i]);
//        }
//    }
//    while (!s.empty())
//    {
//        post.push_back(string(1, s.top()));
//        s.pop();
//    }
//
//    // 输出初始后缀表达式
//    for (auto& x : post) cout << x << ' ';
//    cout << '\n';
//
//    // 模拟计算过程
//    while (post.size() > 1)
//    {
//        for (int i = 0; i < post.size(); i++)
//        {
//            if (post[i].size() == 1 && !isdigit(post[i][0]))
//            {
//                int b = stoi(post[i - 1]);
//                int a = stoi(post[i - 2]);
//                int res = calc(a, b, post[i][0]);
//
//                // 替换
//                post.erase(post.begin() + i - 2, post.begin() + i + 1);
//                post.insert(post.begin() + i - 2, to_string(res));
//                break;
//            }
//        }
//        for (auto& x : post) cout << x << ' ';
//        cout << '\n';
//    }
//
//    return 0;
//}