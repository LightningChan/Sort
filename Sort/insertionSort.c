#include"insertionSort.h"

/*
Simple insertion sort.£¨stable£©
Space complexity is O(1).
Average of time complexity is O(n^2)
*/
void insertionSort(int arr[], int len)
{
	int j;
	for (int i = 1; i < len; i++)
	{
		int tmp = arr[i];
		for (j = i; j>0 && tmp < arr[j - 1]; --j)
			arr[j] = arr[j - 1];
		arr[j] = tmp;
	}
}

/*
Binary insertion sort.(stable)
This algorithm can reduce times of comparison which reachs O(nlogn).
Space complexity is O(1).
Average of time complexity is also O(n^2)
*/
void binaryInsertionSort(int arr[], int len)
{
	int i, j, low, high, mid, tmp;
	for (i = 1; i < len; i++)
	{
		tmp = arr[i];
		low = 0; high = i - 1;
		while (low<=high)
		{
			mid = (low + high) / 2;
			if (tmp < arr[mid]) high = mid - 1;
			else low = mid + 1;
		}
		for (j = i; j >high + 1; --j)
			arr[j] = arr[j - 1];
		arr[high + 1] = tmp;
	}
}

/*
Shell insertion sort.(Unstable)
Space complexity is O(1).
On the best case,time complexity is O(n^1.3),while on the worst case,it also is O(n^2).
*/
void shellSort(int arr[], int len)
{
	int step, i, j, tmp;
	for (step = len / 2; step > 0; step /= 2)
	{
		for (i = step; i < len; i++)
		{
			tmp = arr[i];
			for (j = i - step; j>=0 && tmp < arr[j]; j -= step)
				arr[j + step] = arr[j];
			arr[j + step] = tmp;
		}
	}
}