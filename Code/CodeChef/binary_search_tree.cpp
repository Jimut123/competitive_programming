
#include<iostream>
//Incomplete program
struct node
{
    int info;
    struct node *left,*right;
};

struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->info = item;
    temp->left = temp->right = NULL;
    return temp;
}

/*using while loop to traverse the BST */
struct node *BSTsearch(struct node *root, int item)
{
    struct node *locptr;
    locptr=root;
    while(locptr!=NULL && item!=locptr->info)
    {
        if(locptr->info > item)
            locptr=locptr->left;
        if(locptr->info < item)
            locptr=locptr->right;
    }
    return locptr;
}
int main()
{
    struct node *root = NULL; 
    root = insert(root, 50); 
    return 0;
}