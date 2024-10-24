/*
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* createNode(int data){
    struct Node *n;
    n=(struct Node*)malloc(sizeof(struct Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
struct Node* search(struct Node* root,int key){
    if (root==NULL)
        return NULL;
    if(key==root->data)
        return root;  
    else if(key<root->data){
        return search(root->left,key);
    }
    else if(key>root->data){
         return search(root->right,key);
    }
}
int main(){
    struct Node *p=createNode(5);
    struct Node *p1=createNode(3);
    struct Node *p2=createNode(6);
    struct Node *p3=createNode(1);
    struct Node *p4=createNode(4);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    struct Node *m=search(p,8);
    if(m!=NULL){
        printf("Found: %d ",m->data);
    }
    else
    {
        printf("Element not found.");
    }
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node *createNode(int data){
    struct Node *n=(struct Node*)malloc(sizeof(struct Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
}
struct Node *search(struct Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(key==root->data){
        return root;
    }
    else if(key<root->data){
        return search(root->left,key);
    }
    else if(key>root->data){
        return search(root->right,key);
    }
}
void insert(struct Node* root,int key){
    struct Node *prev=NULL;
    while (root!=NULL)
    {
        prev=root;
        if(key==root->data){
        return;
    }
    else if(key<root->data){
        root=(root->left);
    }
    else{
         root=(root->right);
    }
    }
    struct Node* new=createNode(key);
    if(key>prev->data){
        prev->left=new;
    }
    else
    prev->right=new;
}
int main(){
    struct Node *p=createNode(5);
    struct Node *p1=createNode(3);
    struct Node *p2=createNode(6);
    struct Node *p3=createNode(1);
    struct Node *p4=createNode(4);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    insert(p,7);
    printf("%d",p->right->right->data);
    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}
int getOddLevelSum(struct Node* root, int level) {
    if (root == NULL) {
        return 0;
    }

    if (level % 2 != 0) {
        return root->data + getOddLevelSum(root->left, level + 1) + getOddLevelSum(root->right, level + 1);
    } else {
        return getOddLevelSum(root->left, level + 1) + getOddLevelSum(root->right, level + 1);
    }
}
int getEvenLevelSum(struct Node* root, int level) {
    if (root == NULL) {
        return 0;
    }

    if (level % 2 == 0) {
        return root->data + getEvenLevelSum(root->left, level + 1) + getEvenLevelSum(root->right, level + 1);
    } else {
        return getEvenLevelSum(root->left, level + 1) + getEvenLevelSum(root->right, level + 1);
    }
}
int getLevelDifference(struct Node* root) {
    int oddSum = getOddLevelSum(root, 1);
    int evenSum = getEvenLevelSum(root, 1);
    return oddSum - evenSum;
}

int main() {
    struct Node* root = createNode(5);
    root->left = createNode(3);
    root->right = createNode(8);
    root->left->left = createNode(1);
    root->left->right = createNode(4);
    root->right->left = createNode(7);
    root->right->right = createNode(9);
    int difference = getLevelDifference(root);
    printf("Difference between the sum of odd and even level nodes: %d\n", difference);

    return 0;
}
