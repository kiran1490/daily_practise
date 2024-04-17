#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
	int a;
	int (*pfunc)(int,int);
}dot_struct;

int adder(int a,int b)
{
	return a+b;
}

int main()
{
	dot_struct struct_one = {
	 			.a = 10,
				.pfunc = adder 
				};
	int res = struct_one.pfunc(200,300);
	printf("The adder result is %d\n",res);
}
/*
	For Dot notation the declation and assignment should be done at the same time
	error will come when you seperate the decleration and assignment like below
	dot_struct struct_one;
	struct_one = {.a=10, .pfunc = adder};
*/

