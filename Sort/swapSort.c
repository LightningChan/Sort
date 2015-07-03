#include"swapSort.h"
#include<stdlib.h>

/*
Bubble sort.(stable)
Its space complexity is O(1).
Time complexity is O(n^2)
*/
void bubbleSort(int arr[], int len)
{
	int i, j, tmp,flag;
	for (i = 0; i < len - 1; i++)
	{
		flag = 0;
		for (j = len - 1; j>i; j--)
		{
			if (arr[j-1]>arr[j])
			{
				tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0)  return;
	}
}

/*
Partition is to divide array with pivot.
Return the location where pivot stay.
*/
int partition(int arr[], int low, int high)
{
	int pivot = arr[low];
	while (low<high)
	{
		while (low < high&&arr[high]>=pivot) --high;
		arr[low] = arr[high];
		while (low < high&&arr[low] <= pivot) ++low;
		arr[high] = arr[low];
	}
	arr[low] = pivot;
	return low;
}

/*
Quick sort.(Unstable)
Space complexity is O(logn).
Time complexity is O(nlogn).
*/
void quickSort(int arr[], int low, int high)
{
	int pivotloc = 0;
	if (low<high)
	{
		pivotloc = partition(arr, low, high);
		quickSort(arr,low,pivotloc-1);
		quickSort(arr, pivotloc + 1, high);
	}
}