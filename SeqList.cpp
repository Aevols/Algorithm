//#include<stdio.h>
//#include<stdlib.h>
//typedef struct
//{
//	int* data;
//	int length;
//	int max_size;
//}Seq; 
//
//void InitSeq(Seq &l,int size)
//{
//	l.data = (int*)malloc(sizeof(int) * size);
//	l.length = 0;
//	l.max_size = size;
//}
//
//void DesSeq(Seq &l)
//{
//	free(l.data);
//	l.length = 0;
//	l.max_size = 0;
//	l.data = NULL;//这一个指针应该置空，没有添加
//}
//
//bool AddSeq(Seq& l, int i, int e)
//{
//	if (i<1 || i>l.length+ 1)
//	{	
//		printf("out of range");
//		return false;
//	}
//	if (l.length >= l.max_size) // 检查是否已满**漏了这一段
//	{
//		printf("Sequence is full\n");
//		return false;
//	}
//	for (int j = l.length; j >= i; j--)
//	{
//		l.data[j] = l.data[j - 1];
//	}
//	l.data[i - 1] = e;
//	l.length++;
//	return true;
//}
//
//int DelSeq(Seq& l,int i)
//{
//	if (i<1 || i>l.length)
//	{
//		printf("out of range");
//		return -2147483648;
//	}
//	l.length--;
//	int e = l.data[i - 1];
//	for (int j = i; j <= l.length; j++)//写成j--了
//	{
//		l.data[j - 1] = l.data[j];
//	}
//	return e;
//}
//int PosiFind(Seq l, int i)
//{
//	if (i > l.length || i <= 0)
//	{
//		printf("out of range");
//		return -2147483648;
//	}
//	else
//	{
//		return l.data[i - 1];
//	}
//}
//int ValuFind(Seq l, int e)
//{
//	for (int i = 0; i < l.length; i++)
//	{
//		if (l.data[i] == e)
//			return i + 1;
//	}
//	return -1;
//}
//bool  DelByVal(Seq& l, int e)
//{
//	int posi = ValuFind(l, e);
//	if (posi == -1)
//		return false;
//	DelSeq(l, posi);
//	return true;
//}
//int main()
//{
//	
//}