#ifndef MERGESORT_H_
#define MEGERSORT_H_

/*Merge sort by recursion*/
void merge(int arr[],int start, int mid, int end);
void mergeSortByRecursion(int arr[], int start, int end);

/*Merge sort not using recursion*/
void merge_sort(int arr[], int length);
#endif