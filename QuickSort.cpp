////和归并排序一样，快排也是一种基于分治思想的排序算法，先从数组中取出一个数作为基准数，
////将比这个数大的全放在他的右边，比他小的放在其左边，然后对左右区间重复上个步骤，
////直到各个区间只有一个数
////思想可见：http://blog.csdn.net/morewindows/article/details/6684558
//
//#include<iostream>
//
//using namespace std;
//
//int partition(int s[], int left, int right)//返回调整后基准数的位置
//{
//	int i = left, j = right;
//	int temp = s[i];
//	//经过左右扫描，使得这个基准数的...
//	while (i < j)
//	{
//		while (i < j && s[j] >= temp)//从右向左扫描找到小于temp的值来放入s[i]中
//			j--;
//		if (i < j)
//			s[i++] = s[j];
//
//		while (i < j && s[i] < temp)//从左向右扫描找到小于temp的值放入上一个s[j]中
//			i++;
//		if (i < j)
//			s[j--] = s[i];
//
//	}
//
//	s[i] = temp;
//	return i;
//}
//
//void QuickSort(int a[], int lo,int hi)
//{
//	if (hi <= lo)
//		return;
//	int j = partition(a, lo, hi);
//	QuickSort(a, lo, j-1);
//	QuickSort(a, j + 1, hi);
//}
//
//int main()
//{
//	int a[] = { 45,2,7,1,34,90 };
//	QuickSort(a, 0, 5);
//
//	for (auto i : a)
//		cout << i << " ";
//	cout << endl;
//
//	return 0;
//}