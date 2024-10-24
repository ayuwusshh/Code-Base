#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
    struct node* createNode(int data){
        struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
    }
int main(){
    /*
    // Constructing root node
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=2;
    p->left=NULL;
    p->right=NULL;

     // Constructing 2nd node
     struct node *p1;
    p1=(struct node*)malloc(sizeof(struct node));
    p1->data=1;
    p1->left=NULL;
    p1->right=NULL;

     // Constructing 3rd node
     struct node *p2;
    p2=(struct node*)malloc(sizeof(struct node));
    p2->data=4;
    p2->left=NULL;
    p2->right=NULL;
    */
   // onstructing root node using function
struct node *p=createNode(2);
struct node *p1=createNode(1);
struct node *p2=createNode(4);
 // Linking the nodes
    p->left=p1;
    p->right=p2;
    return 0;
}