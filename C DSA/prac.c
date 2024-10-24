#include<stdio.h>
void insert(int arr[],int n){
    int i,j,key;
    for(int i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;   
    }
}
int main(){
int arr[]={35,12,45,96,32,0,23};
int n=sizeof(arr)/sizeof(arr[0]);
printf("Original array: ");
for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    insert(arr,n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}