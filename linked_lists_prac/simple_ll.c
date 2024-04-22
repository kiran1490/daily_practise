#include<stdio.h>
#include<stdlib.h>
/*
defining a struct simple_ll with a data element and a 
pointer to the same struct simple_ll
*/
struct simple_ll
{
	int data;
	struct simple_ll  *node;
};


int main()
{
	int res;
	/*
	Declaring the struct simple_ll instances
	*/
	struct simple_ll *inst = NULL;
	struct simple_ll *inst_one = NULL;
	struct simple_ll *inst_two = NULL;
	struct simple_ll *inst_three = NULL;
	struct simple_ll *inst_four = NULL;
	struct simple_ll *inst_five = NULL;

	/*
	Allocating memory to the simple_ll instances
	*/
	inst = (struct simple_ll*)malloc(sizeof(struct simple_ll));
	inst_one = (struct simple_ll*)malloc(sizeof(struct simple_ll));
	inst_two = (struct simple_ll*)malloc(sizeof(struct simple_ll));
	inst_three = (struct simple_ll*)malloc(sizeof(struct simple_ll));
	inst_four = (struct simple_ll*)malloc(sizeof(struct simple_ll));
	inst_five = (struct simple_ll*)malloc(sizeof(struct simple_ll));

	/*
	Assigning the node elements of the ith struct to the i+1th pointer
	*/
	inst->node = inst_one;
	inst_one->node = inst_two;
	inst_two->node = inst_three;
	inst_three->node = inst_four;
	inst_four->node = inst_five;
	inst_five->node = NULL;

	/*
	Assigning data to the each data element of the linked_list
	*/
	inst->data = 0;
	inst_one->data = 1;
	inst_two->data = 2;
	inst_three->data = 3;
	inst_four->data = 4;
	inst_five->data = 5;
	/*
	Transversing the linked list
	*/
	struct simple_ll *looper = NULL;
	looper = (struct simple_ll*)malloc(sizeof(struct simple_ll));
	looper = inst;
	while(looper!=NULL)
	{
		printf("The data of the current ll is %d\n",looper->data);
		looper = looper->node;
	}	
	/*
	Freeing the memory
	*/
	free(inst);
	free(inst_one);
	free(inst_two);
	free(inst_three);
	free(inst_four);
	free(inst_five);
	return 0;
}
/*
	checkpoints
	1. if you are directly doing typedef the node element is not visible so you have use the sturct
	   sturct simple_ll *node only not the simp_ll *node directly
	2. check for the (sturct simple_ll*) for malloc conversion
	3. For transversing always you have to equate the looper variable to the first inst
*/
