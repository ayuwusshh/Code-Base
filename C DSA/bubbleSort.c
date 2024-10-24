#include<stdio.h>
void printArray(int* A,int n){
    for (int  i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");;
}
void bubbleSort(int* A,int n){
    int temp;
     for (int i = 0; i < n-1; i++)
     {
        for (int j = 0; j < n-1-i; j++)
        {
            if (A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }   
        }
     }  
}
int main(){
    int A[]={15,62,35,77,96,12,37};
    int n=7;
    printf("Before Sorting :\n");
    printArray(A, n);
    bubbleSort(A, n);
    printf("After Sorting :\n");
    printArray(A, n);
    return 0;
} 