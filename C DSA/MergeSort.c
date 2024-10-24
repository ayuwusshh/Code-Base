/*#include <stdio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void merge(int A[], int low, int mid, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++, k++;
        }
        else
        {
            B[k] = A[j];
            j++, k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++, i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++, j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}
void mergeSort(int A[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(A, low, mid);
        mergeSort(A, mid + 1, high);
        merge(A, low, mid, high);
    }
}
int main()
{
    int A[] = {6, 9, 2, 7, 33, 5, 8, 1};
    int n = 8;
    printArray(A, n);
    mergeSort(A, 0, 7);
    printArray(A, n);
    return 0;
}*/
#include <stdio.h>
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void merge(int arr[], int low, int mid, int high)
{
    int i,j,k;
    int b[100];
    i=low;
    j=mid+1;
    k=low;
    while (i<=mid && j <=high)
    {
        if(arr[i]<arr[j]){
            b[k]=arr[i];
            k++,i++;
        }
        else
        {
            b[k]=arr[j];
            k++,j++;
        }  
    }
   while(i<=mid)
   {
    b[k]=arr[i];
    k++,i++;
   }
   while (j<=high)
   {
    b[k]=arr[j];
    k++,j++;
   }
  for (int i = low; i <= high; i++)
  {
    arr[i]=b[i];
  }
}
void mergeSort(int arr[],int low,int high){
    int mid;
    if (low<high)
    {
        mid=(low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
    
}
int main()
{
    int arr[] = {5, 1, 3, 9, 7, 2, 6, 8};
    int n = 8;
    printArray(arr, n);
    mergeSort(arr,0,7);
    printArray(arr, n);
}