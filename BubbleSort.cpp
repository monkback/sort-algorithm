//ð������ͨ��ð��N�Σ���һ�˽�������ð�ݵ����һ��λ��

#include<iostream>

using namespace std;

void BubbleSort(int a[], int N)
{
	for (int i = 0; i != N; i++)
	{
		for (int j = i + 1; j != N; j++)
		{
			if (a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main()
{
	int a[] = { 45,2,7,1,34,90 };
	BubbleSort(a, 6);
	for (auto i : a)
		cout << i << " ";
	cout << endl;

	return 0;
}