////���������ǽ�a[i] ���뵽a[i-1],a[i-2],a[i-3]......֮��ȥ
////���磺��a[0]���ú�
////       a[1],�Ƚ�a[1]��a[0]
////       a[2],�Ƚ�a[2]��a[1],a[0]
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