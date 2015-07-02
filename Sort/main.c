#include<stdio.h>
#include"sortCommon.h"
#include"insertionSort.h"

int main()
{
	int x[] = { 6, 2, 4, 1, 5, 9 };
	int len = sizeof(x) / sizeof(int);
	//insertionSort(x, len);
	binaryInsertionSort(x, len);
	printArray(x, len);
	getchar();
	return 0;
}