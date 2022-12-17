#include<stdio.h>
//Program to create a balanced binary search tree from a input linked list
struct node
{
    int data;
    struct node *link;
};

struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};

struct tree* raw[100];

struct tree* balance(int a[200], int p ,int l, int h)
{
    int s,k;
    s=p;
    if(l==h)
    {
        raw[s]=(struct tree*)malloc(sizeof(struct tree));
        raw[s]->data=a[l];
        raw[s]->left=NULL;
        raw[s]->right=NULL;
        p=p+1;
        //printf("%d",s);
        return raw[s];
    }
    else if(l>h)
    {
        raw[s]=(struct tree*)malloc(sizeof(struct tree));
        raw[s]=NULL;
        //printf("%d",s);
        p=p+1;
        return raw[s];
    }
    else
    {
        k=(l+h)/2;
        raw[s]=(struct tree*)malloc(sizeof(struct tree));
        raw[s]->data=a[k];
        p=p+1;
        raw[s]->left=balance(a,p,l,k-1);
        raw[s]->right=balance(a,p,k+1,h);
        //printf("%d",raw[s]->data);
        return raw[s];
    }

}

int inorder(struct tree *root)
{
      if(root==NULL)
      {
          return 1;
      }
      else
      {
          inorder(root->left);
          printf("\n%d",root->data);
          inorder(root->right);
      }
}

int preorder(struct tree *root)
{
    if(root==NULL)
    {
        return 1;
    }
    else
    {
        printf("\n%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

int main()
{
    int i,j,n,m;
    struct node *head,*move,*temp;
    head=NULL;
    struct tree *root;
    printf("Give number of elements to be inserted in linked list:");
    scanf("%d",&n);
    printf("Give elements in ascending/descending order in linked list: ");
    for(i=0;i<n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&temp->data);
        temp->link=NULL;
        if(head==NULL)
        {
            head=temp;
            move=temp;
        }
        else
        {
            move->link=temp;
            move=move->link;
        }
    }

 /* we have now the linked list of size n (with first node pointed by head) containing elements in sorted order.
 This input linked list we have to process to create balanced Binary search tree from it */

    int a[n];
    move=head;i=0;
    while(move!=NULL)
    {
        a[i]=move->data;
        //printf("\t%d",move->data);
        i=i+1;
        move=move->link;
    }

    root=(struct tree*)malloc(sizeof(struct tree));
    root=balance(a,0,0,n-1);
    printf("\nBalanced tree created successfully. ");
    printf("The balanced tree is written below by inorder traversal.");
    j=inorder(root);
    printf("\n By preorder traversal:");
    j=preorder(root);
    return 10;
}
