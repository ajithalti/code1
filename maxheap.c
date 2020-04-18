#include<stdio.h>
#include<stdlib.h>
int x;
struct node
{
int data;
struct node*left;
struct node *right;
}*root=NULL,*temp,*newnode;
struct node*create(int x)
{
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode!=NULL)
{

newnode->data=x;
newnode->left=NULL;
newnode->right=NULL;}
}
else
printf("Node not created");
return newnode;
}
int insert(int x,struct node*temp)
{
if(temp!=NULL)
{
if(temp->left==NULL)

}
else
{
temp=create(x);
}
newnode=create();

}
}
void main()
{
int choice;
do
{
printf("Max heap operations:\n1.Insertion\n2.Extract max\n3.Exit\nChoice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
        printf("Enter data to inert:");
        scanf("%d",&x);
        insert(x,root);
        break;
case 2:
        extractmax(0;
        break;
case 3:
        exit(0);
default:
        printf("Invalid input");
        return 0;       
}
}while(0);
return 0;
}
