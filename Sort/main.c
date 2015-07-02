#include<stdio.h>
#include"sortCommon.h"
#include"insertionSort.h"

int main()
{
	int x[] = { 6, 2, 4, 1, 5, 9,10 };
	int len = sizeof(x) / sizeof(int);
	printf("≈≈–Ú«∞£∫");
	printArray(x,len);

	//insertionSort(x, len);   //÷±Ω”≤Â»Î≈≈–Ú
	//binaryInsertionSort(x, len);   //’€∞Î≤Â»Î≈≈–Ú
	shellSort(x, len);
	printf("\n≈≈–Ú∫Û£∫");
	printArray(x, len);
	getchar();
	return 0;
}