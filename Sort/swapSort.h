#ifndef SWAPSORT_H_
#define SWAPSORT_H_

/*Bubble sort*/
void bubbleSort(int arr[], int len);

/*Quick sort*/
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low,int high);
#endif