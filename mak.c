#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* left;
    struct node* right;
    struct node* up;
}node;

node* root=NULL;
int count=0;

void addnode(node* ptr)
{
    if(ptr==NULL)
    {
        int input;
        printf("데이터를 입력하시오.\n");
        scanf("%d",&input);
        node* newnode=(node*)malloc(sizeof(node));
        newnode->data=input;
        newnode->left=NULL;
        newnode->right=NULL;
        newnode->up=NULL;
        root=newnode;
        count++;
        return;
    }
    else if(ptr!=NULL)
    {
        int where;
        printf("1. left 2. right\n");
        scanf("%d",&where);
        if(where==1)
        {
            if(ptr->left!=NULL)
            {
                printf("\nleft is not empty, jump to left\n");
                addnode(ptr->left);
                return;
            }
            int input;
            printf("데이터를 입력하시오.\n");
            scanf("%d",&input);
            node* newnode=(node*)malloc(sizeof(node));
            newnode->data=input;
            newnode->left=NULL;
            newnode->right=NULL;
            newnode->up=ptr;

            ptr->left=newnode;
            count++;
        }
        else if(where==2)
        {
            if(ptr->right!=NULL)
            {
                printf("\nright is not empty, jump to right\n");
                addnode(ptr->right);
                return;
            }
            int input;
            printf("데이터를 입력하시오.\n");
            scanf("%d",&input);
            node* newnode=(node*)malloc(sizeof(node));
            newnode->data=input;
            newnode->left=NULL;
            newnode->right=NULL;
            newnode->up=ptr;

            ptr->right=newnode;
            count++;
        }
        else
        {
            printf("\nerror\n");
            return;
        }
    }
}

void ordered(node* ptr)
{
    int kind=0;
    printf("1. pre 2.mid 3.back\n");
    scanf("%d",&kind);
    if(kind==1)
    {
        preor(ptr);
        printf("\n");
    }
    else if(kind==2)
    {
        midor(ptr);
        printf("\n");
    }
    else if(kind==3)
    {
        backor(ptr);
        printf("\n");
    }
}

void preor(node* ptr)
{
    printf("%d ",ptr->data);
    if(ptr->left!=NULL)
    {
        preor(ptr->left);
    }
    if(ptr->right!=NULL)
    {
        preor(ptr->right);
    }
}
void midor(node* ptr)
{

    if(ptr->left!=NULL)
    {
        midor(ptr->left);
    }
    printf("%d ",ptr->data);
    if(ptr->right!=NULL)
    {
        midor(ptr->right);
    }
}
void backor(node* ptr)
{

    if(ptr->left!=NULL)
    {
        backor(ptr->left);
    }
    if(ptr->right!=NULL)
    {
        backor(ptr->right);
    }
    printf("%d ",ptr->data);
}

void lvorder(count,node* ptr)
{
    int array[count];
    int temp=count;
    for(int i=0;i<count;i++)
    {
        array[i]=ptr->data;
        temp--;

    }


}
int main()
{
    int what=0;
    int stop=0;

    while(stop==0)
    {
        printf("1. addnode 2.ordered\n");
        scanf("%d",&what);
        switch(what)
        {
        case 1:
            {
                addnode(root);
                break;
            }
        case 2:
            {
                ordered(root);
                break;
            }
        case 3:
            {
                printf("\n\n종료합니다.\n");
                stop++;
                break;
            }
        }


    }

}
