#include<stdio.h>
#include"sortCommon.h"
#include"insertionSort.h"
#include"swapSort.h"

int main()
{
	int x[] = { 6, 2, 4, 1, 5, 9,10 };
	int len = sizeof(x) / sizeof(int);
	printf("����ǰ��");
	printArray(x,len);

	//insertionSort(x, len);   //ֱ�Ӳ�������
	//binaryInsertionSort(x, len);   //�۰��������
	//shellSort(x, len);      //ϣ������

	//bubbleSort(x, len);   //ð������
	quickSort(x, 0, len - 1);
	printf("\n�����");
	printArray(x, len);
	getchar();
	return 0;
}