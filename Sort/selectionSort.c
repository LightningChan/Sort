#include"selectionSort.h"

/*
Simple selection sort.(Unstable)
空间复杂度：O(1)
时间复杂度：元素的移动次数很少，不会超过3（n-1）次，比较的次数始终n(n-1)/2次，故复杂度始终未O(n^2)
注意：冒泡排序是相邻两个元素比较交换，而简单选择排序确定好最小的元素后，再交换一次，本质思路是不一样的。
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
将数组arr[begin...end]调整成为大顶堆
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
空间复杂度：O(1);
时间复杂度：平均情况下，堆排序的时间复杂度为O(nlogn)
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