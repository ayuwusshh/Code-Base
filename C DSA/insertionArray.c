/*
#include<stdio.h>
// traversal
void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
// insertion
int  indInsertion(int arr[],int size,int element,int capacity,int index){
    if(size>=capacity){
        return -1;
    }
    for(int i =size-1;i>=index;i--){
        arr[i+1]=arr[i];
    } 
    arr[index]=element;
    return 1;
}
int main(){
    int arr[100]={7,8,12,27,88};
    int capacity=100, size=5, element=45, index=3;
    display(arr,size);
    indInsertion(arr,size,element,capacity,index);
    size+=1;
    display(arr,size);
    return 0;
}

#include <stdio.h>
int indInsertion(int arr [],int size,int element,int index,int capacity){
    if(size>=capacity){
        return -1;
    }
    for (int i = size-1; i >=index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}
void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[100]={23,45,61,33,85,66};
    int size=6,capacity=100,index=3,element=865;
    display(arr,size);
    indInsertion(arr,size,element,index,capacity);
    size+=1;
    display(arr,size);
        return 0;
} 
#include<stdio.h>
#include<stdlib.h>
int indInsertion(int arr[],int size,int element,int index,int capacity){
    if(size>=capacity){
        return -1;
    }
    for (int i = size-1; i >=index; i--)
    {
       arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}
void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[100]={45,62,39,84,71,22};
    int capacity=100,element =11,index=2,size=6;
    display(arr,size);
    indInsertion(arr,size,element,index,capacity);
    size+=1;
    display(arr,size);
    return 0;
}*/
#include<stdio.h>
#include<stdlib.h>
int insert(int arr[],int size,int capacity,int index,int element){
    if(size>=capacity){
    return-1;
    }
    for (int i = size-1; i>=index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
    
}
void show(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
}
int main(){
    int arr[100]={11,22,33,44,55,66,77,88,99};
    int size=8,capacity=100,index=3,element=100;
    show(arr,size);
    insert(arr,size,capacity,index,element);
    size+=1;
    show(arr,size);
    return 0;
}