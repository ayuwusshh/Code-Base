#include<stdio.h>
void printArray(int* A,int n)
{
    for (int  i = 0; i <n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void quickSort(int A[],int low,int high)
{
    int partitionIndex;
    partitionIndex=partiion(A,low,high);
}
int main()
{ 
    int A[]={3,5,2,13,12};
    int n=5;
    printArray(A,n);
    quickSort(A,0,n-1);
    printArray(A,n);
    return 0;
}