////�͹鲢����һ��������Ҳ��һ�ֻ��ڷ���˼��������㷨���ȴ�������ȡ��һ������Ϊ��׼����
////������������ȫ���������ұߣ�����С�ķ�������ߣ�Ȼ������������ظ��ϸ����裬
////ֱ����������ֻ��һ����
////˼��ɼ���http://blog.csdn.net/morewindows/article/details/6684558
//
//#include<iostream>
//
//using namespace std;
//
//int partition(int s[], int left, int right)//���ص������׼����λ��
//{
//	int i = left, j = right;
//	int temp = s[i];
//	//��������ɨ�裬ʹ�������׼����...
//	while (i < j)
//	{
//		while (i < j && s[j] >= temp)//��������ɨ���ҵ�С��temp��ֵ������s[i]��
//			j--;
//		if (i < j)
//			s[i++] = s[j];
//
//		while (i < j && s[i] < temp)//��������ɨ���ҵ�С��temp��ֵ������һ��s[j]��
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