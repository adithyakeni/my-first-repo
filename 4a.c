#include<stdio.h>
#include<stdlib.h>

struct node
{
  int info;
  struct node* llink,*rlink;
};
struct node *root=NULL;
void insfront()
{
  struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the item\n");
	scanf("%d",&temp->info);
	temp->llink=NULL;
	temp->rlink=NULL;
  if(root==NULL)
      root=temp;

  else
  {
    temp->rlink=root;
    root->llink=temp;
    root=temp;
   }
}
void display()
{
  struct node* temp;
  if(root==NULL)
  printf("list empty\n");
  else
  {
    temp=root;
    while(temp!=NULL)
    {
      printf("%d\t",temp->info);
      temp=temp->rlink;
    }
  }
}
void delkey()
{
	struct node *cur, *prev;
	int key,flag=0;
	if(root==NULL)
	printf("empty\n");
	else
	{
		printf("enter item\n");
		scanf("%d",&key);
		cur=root;
		while(cur!=NULL)
		{
		    if(cur->info==key)
		    {
				flag=1;
		         if(cur==root)
		         {
		             printf("item deleted is %d\n", root->info);
			         root=root->rlink;
			         cur->rlink->llink=NULL;
			         cur->rlink=NULL;
			         free(cur);
		         }
		         else if(cur->rlink!=NULL)
		         {
		           printf("item deleted is %d\n", cur->info);
		           prev->rlink= cur->rlink;
		           cur->rlink->llink=prev;
		           free(cur);
		         }
		         else
		         {
		            printf("item deleted is %d\n", cur->info);
		            prev->rlink=cur->rlink;
		            free(cur);
		     
		         }
		  }
		    prev=cur;
		    cur=cur->rlink;
		}
		if(flag==0)
		printf("Key not found\n");
	  }
	}
				 
			 
int main()
{
 int ch;
 for(;;)
 {
	printf("\n1.insert front\n2.delete key\n3.display\n");
	printf("enter ur choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
	  case 1: insfront();
		   break;
	  case 2: delkey();
		    break;
	  case 3: display();
		    break;
      default: exit(0);

	}
 }
}
