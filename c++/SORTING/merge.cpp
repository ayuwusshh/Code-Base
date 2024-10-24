#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
     cout<<endl;
}
void merge(int arr[], int low, int mid, int high)
{
    int b[100];
    int i, j, k;
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            b[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            b[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        b[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        b[k] = arr[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = b[i];
    }
}
void mergeSort(int arr[], int low,int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(arr, low,mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}
int main()
{
    int arr[50];
    int n;
    cout<<"Enterb the number of elemnts: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for (int l=0; l<=n; l++)
    {
        cin>>arr[l];
    }
    cout << "Original Array: ";
    printArray(arr, n);
    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}