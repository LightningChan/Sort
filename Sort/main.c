#include<stdio.h>
#include"sortCommon.h"
#include"insertionSort.h"
#include"swapSort.h"
#include"selectionSort.h"
#include"mergeSort.h"

int main()
{
	//int x[] = { 6, 2, 4, 1, 5, 9,10 };
	int x[] = { 6, 2, 4, 1, 5};
	int len = sizeof(x) / sizeof(int);
	printf("≈≈–Ú«∞£∫");
	printArray(x,len);
	//insertionSort(x, len);   //÷±Ω”≤Â»Î≈≈–Ú
	//binaryInsertionSort(x, len);   //’€∞Î≤Â»Î≈≈–Ú
	//shellSort(x, len);      //œ£∂˚≈≈–Ú

	//bubbleSort(x, len);   //√∞≈›≈≈–Ú
	//quickSort(x, 0, len - 1);    //øÏÀŸ≈≈–Ú

	//selectionSort(x, len);     //ºÚµ•—°‘Ò≈≈–Ú
	//heapSort(x,len);          //∂—≈≈–Ú

	mergeSortByRecursion(x, 0, len-1);
	printf("\n≈≈–Ú∫Û£∫");
	printArray(x, len);
	getchar();
	return 0;
}