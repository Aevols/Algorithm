//#include<iostream>
//#include<string>
//#include<cmath>
//using namespace std;
//string str[24], s;
//int n,ans=0,cnt[24];
//
//void dfs(string s)
//{
//	int len1 = s.size();
//	for (int i = 1; i <= n; i++)//±éÀú²»Í¬×Ö·û´®
//	{
//		if (cnt[i] >= 2)continue;
//		int len2 = str[i].size();
//		for (int j = 1; j < len1 && j <len2; j++)
//		{
//			if (s.substr(len1 - j, j) == str[i].substr(0, j))
//			{
//				cnt[i]++;
//				string ss = s + str[i].substr(j, len2 - j);
//				ans = ans > ss.size() ? ans : ss.size();
//				dfs(ss);
//				cnt[i]--;
//				break;
//			}
//		}
//	}
//}
//int main()
//{	
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> n;
//	for (int i = 1; i <= n; i++)cin >> str[i];
//	cin >> s;
//	s = "#" + s;
//	dfs(s);
//	cout << ans-1;
//	return 0;
//}