/*
Nama	:	ALIF AULIA AKBAR
NIM		: 	20051397003
Kelas	: 	2020A 
Prodi	:	D4 Manajemen Informatika */

#include <stdio.h>
  
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
  
void bubbleSort(int arr[], int n)
{
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(&arr[j], &arr[j+1]);
           swapped = true;
        }
     }
  

     if (swapped == false)
        break;
   }
}
  
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("n");
}
  
int main()
{
    int arr[] = {12, 7, 9, 10, 13, 15, 16, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    printf("\n");
    return 0;
}
