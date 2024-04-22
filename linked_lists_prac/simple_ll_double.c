#include<stdio.h>
#include<stdlib.h>

/*
Defining the struct with one next node data and prev_node elements
*/
struct simple_ll
{
	struct simple_ll* prev;
	int data;
	struct simple_ll* next;
};

/*using typedef changing the sturct simple_ll to just type_simp_ll */
typedef struct simple_ll type_simp_ll;

int main()
{
	type_simp_ll *inst = NULL;
	type_simp_ll *inst_one = NULL;
	type_simp_ll *inst_two = NULL;
	type_simp_ll *inst_three = NULL;
	type_simp_ll *inst_four = NULL;
	type_simp_ll *inst_five = NULL;
	
	inst = malloc(sizeof(type_simp_ll));
	inst_one = malloc(sizeof(type_simp_ll));
	inst_two = malloc(sizeof(type_simp_ll));
	inst_three = malloc(sizeof(type_simp_ll));
	inst_four = malloc(sizeof(type_simp_ll));
	inst_five = malloc(sizeof(type_simp_ll));
	
	inst->next = inst_one;
	inst_one->next = inst_two;
	inst_two->next = inst_three;
	inst_three->next = inst_four;
	inst_four->next = inst_five;
	inst_five->next = NULL;
	
	/*
	eqating the previous node element to the earlier member of the linked list
	*/
	inst->prev = NULL;
	inst_one->prev = inst;
	inst_two->prev = inst_one;
	inst_three->prev = inst_two;
	inst_four->prev = inst_three;
	inst_five->prev = inst_four;
	
	inst->data = 0;
	inst_one->data = 1;
	inst_two->data = 2;
	inst_three->data = 3;
	inst_four->data = 4;
	inst_five->data = 5;

	type_simp_ll *looper = NULL;
	looper = (type_simp_ll*)malloc(sizeof(type_simp_ll));
	looper = inst;
	while(looper!=NULL)
	{
		printf("The data of the current ll is %d\n",looper->data);
		looper = looper->next;
	}	
	/*	
	transversing the linked list from backwards
	*/
	looper = inst_five;	
	while(looper!=NULL)
	{
		printf("The data of the current ll is %d\n",looper->data);
		looper = looper->prev;
	}
	return 0;
}
/*
	1. always remember to equate the looper to the inst
*/
