#include <stdio.h>
#include <stdlib.h>
typedef struct TreeNode {
    char data;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;
TreeNode* createNode(char data) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}
TreeNode* buildExpressionTree(char postfix[]) {
    TreeNode* stack[100];  
    int top = -1;        

    for (int i = 0; postfix[i]; i++) {
        TreeNode* newNode = createNode(postfix[i]);
        if (!isOperator(postfix[i])) {
            stack[++top] = newNode;
        } else {
            newNode->right = stack[top--];
            newNode->left = stack[top--];
            stack[++top] = newNode;
        }
    }
    return stack[top];
}
int evaluateExpressionTree(TreeNode* root) {
    if (root) {
        if (!isOperator(root->data)) {
            return root->data - '0';
        } else {
            int leftVal = evaluateExpressionTree(root->left);
            int rightVal = evaluateExpressionTree(root->right);

            // Perform the operation
            switch (root->data) {
                case '+': return leftVal + rightVal;
                case '-': return leftVal - rightVal;
                case '*': return leftVal * rightVal;
                case '/': return leftVal / rightVal;
            }
        }
    }
    return 0;
}
void inorderTraversal(TreeNode* root) {
    if (root) {
        inorderTraversal(root->left);
        printf("%c ", root->data);
        inorderTraversal(root->right);
    }
}

int main() {
    char postfixExpression[] = "ab+cd-*";
    TreeNode* root = buildExpressionTree(postfixExpression);

    printf("Infix Expression: ");
    inorderTraversal(root);
    printf("\n");

    int result = evaluateExpressionTree(root);
    printf("Result of the Expression: %d\n", result);

    return 0;
}
