////这段代码导致了xy可能不在同一层级，要让x,y在同一层级这个代码才有效
//using namespace std;
//#include<iostream>
//int release(int a, int size);
//int main()
//{
//	int n;
//	cin >> n;
//	int size=1<<n;
//	int x, y, z;
//	for (int i = 0; i < size; i++)
//	{	
//		x = release(i, size >> 1);
//		for (int j = 0; j < size; j++)
//		{
//			y = release(j, size >> 1);
//			z = x|y;
//			cout << z<<" ";
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int release(int a, int size)
//{
//	if (size == 0)
//		return 1;
//	if (a / (size) == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		return release(a % size, size >> 1);
//	}
//}
