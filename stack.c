#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZE 15

int stack[SIZE],top=-1,item;
 
void push()
{
	if(top==SIZE-1)
	printf("stack is fulll");
	else
	{
		printf("enter the element");
		scanf("%d",&item);
		stack[++top]=item;
	}
}

void pop()
{
	if(top==-1)
	printf("stack is empty");
	else
	{
		printf("the item deleated is %d",stack[top--]);
	}
}

void display()
{
	if(top==-1)
	printf("stack is empty");
	else
	{
		int i;
		for(i=top;i>=0;i--)
		{
			printf("%d",stack[i]);
		}
	}
}

int main()
{
	int ch;
	for(;;)
	{
		printf("enter ur choice");
		printf("\n 1.push\n 2.pop\n3.display\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: push();
		            break;
		    case 2: pop();
		            break;
		    case 3: display();
		            break;
		  
		 }
	 }
 }            
		            
