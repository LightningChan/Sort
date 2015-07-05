#include<stdlib.h>
#include"mergeSort.h"

/**
* mergeSortByRecursion: �鲢����ĵݹ�ʵ��,�Զ����£��ȶ�
* ע���㷨�����ϸ����ĺϲ������㷨
* �ݹ�����ǽ������򼯺�һ��Ϊ����
* ֱ�����򼯺Ͼ�ʣ��һ��Ԫ��Ϊֹ��Ȼ�󲻶ϵĺϲ������ź��������
* ʱ�临�Ӷȣ�O(nlgn)
**/

/*��arr[start...mid]��arr[mid+1...end]�鲢��arr[start...end]*/
void merge(int arr[], int start, int mid, int end)
{
	int n1 = mid - start + 1;
	int n2 = end - mid;
	int *front = (int *)malloc(sizeof(int)*n1);
	int *back = (int *)malloc(sizeof(int)*n2);
	for (int i = 0; i <n1; i++)
		front[i] = arr[start+i];
	for (int j = 0; j <n2; j++)
		back[j] = arr[mid+1+j];
	int m = 0, n = 0, k = start;
	while (m<n1&&n<n2)
	{
		if (front[m] < back[n])
			arr[k++] = front[m++];
		else
			arr[k++] = back[n++];
	}
	if (m < n1)arr[k++] = front[m++];
	if (n < n2)arr[k++] = back[n++];
	free(front);
	free(back);
}

/*�ֶ���֮���ȷֽ⣬�ٹ鲢*/
void mergeSortByRecursion(int arr[], int start, int end)
{
	int mid;
	if (start<end)
	{
		mid = (start + end) / 2;
		mergeSortByRecursion(arr, start, mid);
		mergeSortByRecursion(arr, mid + 1, end);
		merge(arr, start, mid, end);
	}
	
}