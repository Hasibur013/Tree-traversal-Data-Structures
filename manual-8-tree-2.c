#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left, *right;
};

struct node *newNode(int data)
{
   struct node *node;

    node=(struct node*)malloc(sizeof(struct node));

   node->data=data;
    node->left=node->right=NULL;

    return node;
}

void inorder(struct node *root)
{
    if(root == NULL)
        return;
    inorder(root->left);
    printf("%d \n",root->data);
    inorder(root->right);

}

void preorder(struct node *root)
{
    if(root == NULL)
        return;

    printf("%d \n",root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node *root)
{
    if(root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    printf("%d \n",root->data);
}

int main()
{
    struct node *root=newNode(1);

    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);

    printf("\n In_order traversal of binary tree is \n");
    inorder(root);

    printf("\n Pre_order traversal of binary tree is \n");
    preorder(root);

    printf("\n Post_order traversal of binary tree is \n");
    postorder(root);

    return 0;

}

