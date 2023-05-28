#include<stdio.h>
#include <stdlib.h>
#define MAX 5
int q[MAX],i,ch,item,f=0,r=-1,c=0;


void cqinsert(int item)
{
if(c==MAX)
printf("Queue is full");
else
{
c=c+1;
r=(r+1)%MAX;
q[r]=item;
}
}


int cqdelete( )
{
if(c==0)
printf("Queue is Empty");
else
{
c=c-1;
printf("The deleted element is %d",q[f]);
f=(f+1)%MAX;
}
return 0;
}

void cqdisplay( )
{
int i,X;
if(c==0)
printf("Queue is Emplty");
else
{
X=f;
printf("The status of queue\n");
for(i=1;i<=c;i++)
{
printf("%d ",q[X]);
X=(X+1)%MAX;
}
}
}



void main()
{

while(1)
{
printf("\n1:Insert 2:Delete 3:Display\n");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("Enter the number \n");
scanf("%d",&item);
cqinsert(item); break;
case 2: cqdelete( ); break;
case 3: cqdisplay( );break;
default: printf("Invalid choice \n");

exit(0);

}
}
} 
