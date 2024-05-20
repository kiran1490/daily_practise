#include<stdio.h>
#include<stdlib.h>

typedef struct ll
{
	int data;
	struct ll *next;
}simple_ll;

void display(simple_ll *head)
{
	simple_ll *iter = malloc(sizeof(simple_ll));
	iter = head;
	while(iter!=NULL)
	{
		printf("The data of the ll is %d\n",iter->data);
		iter = iter->next;
	}
}
void insert_end(simple_ll *head)
{
	simple_ll *iter = malloc(sizeof(simple_ll));
	simple_ll *new_node = malloc(sizeof(simple_ll));
	printf("Enter the data for the new node\n");
	scanf("%d",&new_node->data);
	iter = head;
	while(iter->next!=NULL)
	{
		iter = iter->next;
	}
	iter->next = new_node;
}
/* return value is required here because the new_node is local variable 
   and it will be destroyed while exixting the insert_begin */
simple_ll* insert_begin(simple_ll *head)
{
	simple_ll *new_node = malloc(sizeof(simple_ll));
	printf("Enter the data for the new node\n");
	scanf("%d",&new_node->data);
	new_node->next = head;
	head = new_node;
	return head;
	
}
int main()
{
	simple_ll *one = NULL;
	one = malloc(sizeof(simple_ll));
	simple_ll *two = malloc(sizeof(simple_ll));
	simple_ll *head = malloc(sizeof(simple_ll));
	one->data = 10;
	one->next = two;
	two->data = 20;
	two->next = NULL;
	head = one;
	insert_end(head);
	head = insert_begin(head);
	head = insert_after(head);
	display(head);
}
