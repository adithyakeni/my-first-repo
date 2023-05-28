#include <stdio.h>
#include <stdlib.h>
struct Node
{
int data;
struct Node* link;
};
typedef struct Node NODE;
NODE *first=NULL;
NODE *second=NULL;
NODE *res=NULL;
NODE* newNode(int data)
{
NODE* new_node = (NODE *)malloc(sizeof(NODE));
new_node->data = data;
new_node->link = NULL;
return new_node;
}
void insfront(NODE**head_ref, int new_data)
{
NODE* new_node = newNode(new_data);
new_node->link = *head_ref;
*head_ref = new_node;
}

NODE* addTwoLists(NODE* first, NODE* second)
{

NODE* res = NULL;
NODE *temp;
int carry = 0, sum;

while (first != NULL || second != NULL)
{
sum = carry + (first ? first->data : 0)+ (second ? second->data : 0);
carry = (sum >= 10) ? 1 : 0;
sum = sum % 10;
temp = newNode(sum);
if (res == NULL)
res = temp;
else
{
temp->link = res;
res=temp;
}

if (first)
first = first->link;
if (second)
second = second->link;
}
if (carry > 0)
{
temp= newNode(carry);
temp->link = res;
res=temp;
}
return res;
}
void printList(NODE* node)
{
while (node != NULL) {
printf("%d ",node->data);
node = node->link;
}
printf("\n");
}
int main(void)
{
insfront(&first, 6);
insfront(&first, 4);
insfront(&first, 9);
insfront(&first, 5);
insfront(&first, 7);
printf("First list is ");
printList(first);

insfront(&second, 7);
insfront(&second, 2);
insfront(&second, 1);
insfront(&second, 4);
insfront(&second, 8);

printf("Second list is ");
printList(second);
res = addTwoLists(first, second);
printf("Resultant list is ");
printList(res);
return 0;
}
