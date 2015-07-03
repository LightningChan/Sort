#include"selectionSort.h"

/*
Simple selection sort.(Unstable)
�ռ临�Ӷȣ�O(1)
ʱ�临�Ӷȣ�Ԫ�ص��ƶ��������٣����ᳬ��3��n-1���Σ��ȽϵĴ���ʼ��n(n-1)/2�Σ��ʸ��Ӷ�ʼ��δO(n^2)
ע�⣺ð����������������Ԫ�رȽϽ���������ѡ������ȷ������С��Ԫ�غ��ٽ���һ�Σ�����˼·�ǲ�һ���ġ�
*/
void selectionSort(int arr[], int len)
{
	int i, j, min,tmp;
	for (i = 0; i < len - 1; i++)
	{
		min = i;
		for (j = i + 1; j < len;j++)
			if (arr[j] < arr[min]) min = j;
		if (min != i)
		{
			tmp = arr[i];
			arr[i] = arr[min];
			arr[min] = tmp;
		}
	}
}

/*
������arr[begin...end]������Ϊ�󶥶�
*/
void heapAdjust(int arr[], int begin, int end)
{
	int tmp=arr[begin];
	for (int j =(begin+1)*2-1; j <= end; j *= 2)
	{
		if (j < end&&arr[j] < arr[j + 1])  ++j;
		if (tmp>arr[j]) break;
		arr[begin] = arr[j];
		begin = j;
	}
	arr[begin] = tmp;
}

/*
Heap Sort.(Unstable)
�ռ临�Ӷȣ�O(1);
ʱ�临�Ӷȣ�ƽ������£��������ʱ�临�Ӷ�ΪO(nlogn)
*/
void heapSort(int arr[],int len)
{
	int tmp;
	for (int i = len /2-1; i >= 0; --i)
		heapAdjust(arr, i, len - 1);
	for (int j = len - 1; j > 0; --j)
	{
		tmp = arr[j];
		arr[j] = arr[0];
		arr[0] = tmp;
		heapAdjust(arr, 0, j - 1);
	}
}