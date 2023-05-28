#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

struct node
{
int info;
struct node* link;
};
struct node *root=NULL;

void inspos()
{
struct node *temp,*p;
int i,loc;
temp=(struct node*)malloc(sizeof(struct node));
printf("enter the item\n");
scanf("%d",&temp->info);
temp->link=NULL;
printf("enter location to be inserted\n");
scanf("%d",&loc);
if(loc==0)
printf("invalid position\n");
else if(loc==1)
{
temp->link=root;
root=temp;
}
else
{
p=root;
for(i=1;i<loc-1;i++)
p=p->link;
temp->link=p->link;
p->link=temp;
}
}


void del_front()
{
struct node *temp;
if(root==NULL)
printf("list is empty\n");
else
{
temp=root;
printf("item deleted is %d\n",temp->info);
root=temp->link;
temp->link=NULL;
free(temp);
}
}


void display()
{
struct node *temp;
if(root==NULL)
printf("list is empty\n");
else
{
temp=root;
while(temp!=NULL)
{
printf("%d\t",temp->info);
temp=temp->link;
}
}
}


int main()
{
    int ch;
    for(;;)
    {
        printf("\n1.insfront\n2.delete\n3.display\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: inspos();
                     break;
            case 2: del_front();
                     break;
            case 3:  display();
                     break;
        }
    }
    return 0;
    
}
