////插入排序是将a[i] 插入到a[i-1],a[i-2],a[i-3]......之中去
////比如：：a[0]放置好
////       a[1],比较a[1]和a[0]
////       a[2],比较a[2]和a[1],a[0]
//
//#include<iostream>
//
//using namespace std;
//
//void InsertionSort(int a[],int N)
//{
//	//int N = sizeof(a) / sizeof(int);
//	for (int i = 1; i < N; i++)
//	{
//		for (int j = i; j > 0 && a[j] < a[j - 1]; j--)
//		{
//			int temp = a[j];
//			a[j] = a[j - 1];
//			a[j - 1] = temp;
//		}
//	}
//}
//
//int main()
//{
//	int a[] = { 45,2,7,1,34,90 };
//	int N = sizeof(a) / sizeof(int);
//	InsertionSort(a, N);
//	for (auto i : a)
//		cout << i << " ";
//	cout << endl;
//
//	return 0;
//}