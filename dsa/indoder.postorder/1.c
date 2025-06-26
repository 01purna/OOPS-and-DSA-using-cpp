#include <stdio.h>
#include <stdlib.h>
struct node {
    int item;
    struct node *left;
    struct node * right;
};
//inorder transversal
void itv(struct node *root){
    if(root == NULL){
        return;
    }
    itv(root->left);
    itv(root->right);
    printf("%d ", root->item);
}
//preorder transversal
void ptv(struct node * root){
    if(root == NULL)
        return;
    printf("%d ", root->item);
    ptv(root->left);
    ptv(root->right);
}
//post oder transversal
void povt(struct node *root){
    if(root == NULL)
        return;
    povt(root->left);
    povt(root->right);
    printf("%d ", root->item);
}
// create a new node
struct node * createnode(int value){
    struct node * newnode = (struct node *)malloc(sizeof(struct node));
    newnode->item = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
// insert on the left node
struct node *insertatleft(struct node * root, int value){
    root->left = createnode(value);
    return root->left;
}
// insert on the right node
struct node *insertatright(struct node * root, int value){
    root->right = createnode(value);
    return root->right;
}
// free tree nodes
void freetree(struct node * root){
    if(root == NULL)
        return;
    freetree(root->left);
    freetree(root->right);
    free(root);
}
int main(){
    struct node * root= createnode(1);
    insertatleft(root, 12);
    insertatright(root, 9);

    insertatleft(root->left, 5);
    insertatright(root->right, 6);
    printf("inorder transversal: \t");
    itv(root);
    printf("\n");
    printf("preorder transversal: \t");
    ptv(root);
    printf("\n");

    printf("post-order transversal: \t");
    povt(root);
    printf("\n");
    free(root);
    return 0;
}

