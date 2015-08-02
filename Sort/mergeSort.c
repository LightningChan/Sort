#include<stdlib.h>
#include"mergeSort.h"

/**
* mergeSortByRecursion: 归并排序的递归实现,自顶向下，稳定
* 注：算法导论上给出的合并排序算法
* 递归过程是将待排序集合一分为二，
* 直至排序集合就剩下一个元素为止，然后不断的合并两个排好序的数组
* 时间复杂度：O(nlgn)
**/

/*将arr[start...mid]和arr[mid+1...end]归并成arr[start...end]*/
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

/*分而治之，先分解，再归并*/
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


/**
* merge_sort: 非递归实现 --迭代
* 非递归思想: 将数组中的相邻元素两两配对。用merge函数将他们排序，
* 构成n/2组长度为2的排序好的子数组段，然后再将他们排序成长度为4的子数组段，
* 如此继续下去，直至整个数组排好序。
* 时间复杂度是O（nlogn)
**/
void merge_sort(int arr[], int length)
{
	int step, left_min, left_max, right_min, right_max, next;
	int *tmp = (int *)malloc(sizeof(int)*length);

	for (step = 1; step < length;step*=2)
	{
		for (left_min = 0; left_min < length - step; left_min = right_max)
		{
			right_min = left_max = left_min + step;
			right_max = left_max + step;
			if (right_max>length)
				right_max = length;
			next = 0;
			while (left_min < left_max&&right_min<right_max)
				tmp[next++] = arr[left_min]>arr[right_min] ? arr[right_min++] : arr[left_min++];
			while (left_min < left_max)
				arr[--right_min] = arr[--left_max];
			while (next>0)
				arr[--right_min] = tmp[--next];
		}
		
	}
	free(tmp);

}
