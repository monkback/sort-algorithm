////找到数组中最小的元素，和第一个元素交换位置，然后找接下来数组中第二小的元素，再依次进行，需要注意
////使用min来记录当前扫描过程中最小元素的位置，只交换N次
//#include<iostream>
//
//using namespace std;
//
//void SelectionSort(int a[],int N)
//{
//	//int N = sizeof(a) / sizeof(int);
//	for (int i = 0; i < N; i++)
//	{
//		int min = i;//min记录最小元素的索引
//		for (int j = i + 1; j < N; j++)
//		{
//			if (a[j] < a[min])
//				min = j;
//		}
//		int temp = a[i];//但是在这才完成交换操作
//		a[i] = a[min];
//		a[min] = temp;
//	}
//
//}
//
//int main()
//{
//	int ko[] = { 45,2,7,1,34,90 };
//	int N = sizeof(ko) / sizeof(int);
//	SelectionSort(ko, N);
//
//	for (auto i : ko)
//		cout << i << " ";
//	cout << endl;
//
//	return 0;
//}