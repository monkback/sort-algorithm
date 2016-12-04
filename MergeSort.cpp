//#include<iostream>
//
//using namespace std;
//const int N = 2000;
//void merge(int a[], int lo, int mid, int hi)
//{
//	//½«a[lo..mid]ºÍa[mid+1,hi] ¹é²¢
//	int i = lo, j = mid + 1;
//	int aux[N];
//	for (int k = lo;k <= hi; k++)
//		aux[k] = a[k];
//
//	for (int k = lo; k <= hi; k++)
//	{
//		if (i > mid) a[k] = aux[j++];
//		else if (j > hi) a[k] = aux[i++];
//		else if (aux[j] < aux[i]) a[k] = aux[j++];
//		else a[k] = aux[i++];
//	}
//}
//
//void MergeSort(int a[],int lo, int hi)
//{
//	
//	if (hi <= lo)
//		return;
//	int mid = lo + (hi - lo) / 2;
//	MergeSort(a, lo, mid);
//	MergeSort(a, mid + 1, hi);
//	merge(a, lo, mid, hi);
//}
//
//int main()
//{
//	int a[6] = { 45,2,7,1,34,90 };
//	MergeSort(a, 0, 5);
//
//	for (auto i : a)
//		cout << i << " ";
//	cout << endl;
//
//	return 0;
//}