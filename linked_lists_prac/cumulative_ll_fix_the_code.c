#include<stdio.h>
#include<stdlib.h>

struct simp_ll
{
	int data;
	struct simp_ll *node;
};

typedef struct simp_ll simple_ll;

void transverse_the_ll(simple_ll *input_ll)
{
	simple_ll *looper = malloc(sizeof(simple_ll));
	looper = input_ll;
	while(looper!=NULL)
	{
		printf("The data of the current element of the ll is %d\n",looper->data);
		looper = looper->node;
	}
}

void append_the_ll(simple_ll *input_ll)
{
	simple_ll *looper = (simple_ll *)malloc(sizeof(simple_ll));
	simple_ll *prev = (simple_ll *)malloc(sizeof(simple_ll));
	simple_ll *append_mem = NULL;
	append_mem = (simple_ll *)malloc(sizeof(simple_ll));
	printf("please enter the data to be appended\n");
	int data_in;
	scanf("%d",&data_in);
	append_mem->data = data_in;
	append_mem->node = NULL;
	looper = input_ll;
	while(looper!=NULL)
	{
		prev = looper;
		looper = looper->node;
	}
	/*
	should assign to looper since it is pointer itself
	*/
	prev->node = append_mem;
}
int main()
{
	char c;
	simple_ll *mem1 = NULL;
	mem1 = (simple_ll *)malloc(sizeof(simple_ll));
	mem1->data = 10;
	mem1->node = NULL;
	while(1)
	{
		printf("Please choose the operation\n");
		c = getchar();
		switch (c)
		{
			case 't' :
				transverse_the_ll(mem1);
				break;
			case 'a' :
				append_the_ll(mem1);
				break;
			case 'b' :
				exit(1);
			default:
				printf("Plese give the valid input\n");
		}
	}
}
