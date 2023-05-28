#include<stdio.h>
#include<stdlib.h>

struct node

{

  int row, col,val;

  struct node* prev,*nxt;

};

typedef struct node NODE;

  NODE *root=NULL;

int m,n;



void insrear(int row,int col, int data)

{

NODE *temp,*curr;

temp=(NODE*)malloc(sizeof(NODE));

temp->val=data;

temp->row=row;

temp->col=col;

temp->prev=NULL;

temp->nxt=NULL;

if(root==NULL)

 root=temp;

 else

 {

   curr=root;

   while(curr->nxt!=NULL)

   curr=curr->nxt;



   curr->nxt=temp;

   temp->prev=curr;

 }

}

void display_list()

{

  NODE *temp;



if(temp==NULL)

printf("List Empty\n");

else

{

  temp=root;

  printf("ROW\t Col\t Value\n");

  while(temp!=NULL)

  {

    printf("%d\t %d\t%d\n",temp->row,temp->col,temp->val);

     temp=temp->nxt;

  }

}

}

void display_matrix()

{

  int i,j;

  NODE *temp;

if(root==NULL)

printf("list is empty\n");

else

{

  temp=root;

  for(i=1;i<=m;i++)

  {

    for(j=1;j<=n;j++)

    {

      if(temp!=NULL && temp->row==i&&temp->col==j)

      {

	printf("%d\t",temp->val);

	temp=temp->nxt;

      }

      else

      printf("0\t");

    }

    printf("\n");

   }

  }

}



int main()

{

  int i,j,a[10][10];



  printf("enter the number of rows\n");

  scanf("%d",&m);

  printf("Enter the number of Columns\n");

  scanf("%d",&n);

  printf("enter the elements\n");

  for(i=1;i<=m;i++)

  {

  for(j=1;j<=n;j++)

  {

   scanf("%d",&a[i][j]);

   if(a[i][j]!=0)

  insrear(i,j,a[i][j]);

  }

  }

  printf("List content display\n");

  display_list();

  printf("Matrix Display from List\n");

  display_matrix();


  return 0;

}

