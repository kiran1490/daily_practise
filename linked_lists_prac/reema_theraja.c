#include<stdio.h>
#include<stdlib.h>

typedef struct ll
{
	int a;
	struct ll *node;
}simple_ll;

simple_ll *add_ll(simple_ll *tail)
{
	simple_ll *new_node = malloc(sizeof(simple_ll));
	printf("The location of new_node is %p\n",new_node);
	new_node->a = 30;
	new_node->node = NULL;
	tail->node = new_node;
	tail = new_node;
	printf("The location of tail node is %p\n",tail);
	return new_node;
}
void display_ll(simple_ll *head)
{
	simple_ll *iter = malloc(sizeof(simple_ll));
	iter = head;
	while(iter!=NULL)
	{
		printf("The ll elemnt data is %d\n",iter->a);
		iter = iter->node;
	}
}
/* Insertion
case1: adding a new node at the start of the LL
case2: Adding a new node at the end of the LL
case3: Adding a new node after a given node
case4: Adding a new node before a given node
*/
/* Case1 */
simple_ll *insert_beg(simple_ll *head)
{
	simple_ll *new_node = malloc(sizeof(simple_ll));
	printf("Enter the new node data\n");
	scanf("%d",&new_node->a);
	new_node->node = head;
	head = new_node;
	return head;
}
/* Case2 */
simple_ll *insert_end(simple_ll *tail)
{
	
	simple_ll *new_node = malloc(sizeof(simple_ll));
	printf("Enter the new node data\n");
	scanf("%d",&new_node->a);
	new_node->node = NULL;
	tail->node = new_node;
	tail = new_node;
	return tail;
}
int main()
{
	simple_ll *one = malloc(sizeof(simple_ll));
	simple_ll *two = malloc(sizeof(simple_ll));
	simple_ll *head = malloc(sizeof(simple_ll));
	simple_ll *tail = malloc(sizeof(simple_ll));
	head = one;
	one->a = 10;
	one->node = two;
	two->a = 20;
	two->node = NULL;
	tail = two;
	head = insert_beg(head);
	tail = insert_end(tail);
	display_ll(head);
	
}

