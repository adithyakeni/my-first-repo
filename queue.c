#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZE 5
int q[SIZE], rear= -1,front =0, item ,ch;


int qinsert( int item)
{
if(rear == SIZE-1)
printf(“Queue is Full”);
else
{
rear = rear +1;
q[rear]= item;
}
}

int qdelete( )
{
if(front >rear )
printf ("queue is empty");
else
{
printf("the deleated item is %d", q[front]);
front = front +1;
}
}

int qdisplay( )
{
if(front > rear )
printf ("queue is empty");
else
{
printf ("the contenets of the queue");
for(int i=0;i<=rear;i++)
printf ("queue[%d]=%d\n",i, q[i]);
}
}
void main ( )
{

while (1)
{
printf ("\n 1: INSERT2:DELETE 3:DISPLAY \n");
scanf ("%d", &ch);
switch (ch)
{
case 1: printf ("Enter the element \n");
scanf ("%d", &item);
qinsert(item);
break;
case 2: qdelete ( ); break ;
case 3: qdisplay ( ); break ;
default: printf("Invalid operation");

exit (0);

}
}// end of while
} // end of main program
