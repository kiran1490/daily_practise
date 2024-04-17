#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int a;
	int (*pfunc_adder)(int,int);
}simple_adder;


int func_adder(int a,int b)
{
	return a+b;
}
int func_subtractor(int a,int b)
{
	return a-b;
}

int main()
{
	simple_adder adder1;
	adder1.a = 10;
	adder1.pfunc_adder = func_adder;
	int c = adder1.pfunc_adder(20,30);
	printf("The adder is %d\n",c);
	adder1.pfunc_adder = func_subtractor;
	int d = adder1.pfunc_adder(20,30);
	printf("The subtractor is %d\n",d);
}
/*
	Here we are using the same function pointer aka adder1.pfunc_adder to point to two functions
	1. func_adder and 2. func_subtractor
	This is the one use case of the function pointers 
*/
