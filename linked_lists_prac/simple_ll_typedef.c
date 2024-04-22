#include<stdio.h>
#include<stdlib.h>
struct simple_ll
{
	int data;
	struct simple_ll* node;
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
	
	inst = (type_simp_ll*)malloc(sizeof(type_simp_ll));
	inst_one = (type_simp_ll*)malloc(sizeof(type_simp_ll));
	inst_two = (type_simp_ll*)malloc(sizeof(type_simp_ll));
	inst_three = (type_simp_ll*)malloc(sizeof(type_simp_ll));
	inst_four = (type_simp_ll*)malloc(sizeof(type_simp_ll));
	inst_five = (type_simp_ll*)malloc(sizeof(type_simp_ll));
	
	inst->node = inst_one;
	inst_one->node = inst_two;
	inst_two->node = inst_three;
	inst_three->node = inst_four;
	inst_four->node = inst_five;
	inst_five->node = NULL;

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
		looper = looper->node;
	}
	return 0;
}
/*
	1. always remember to equate the looper to the inst
*/
