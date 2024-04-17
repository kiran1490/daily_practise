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

int main()
{
	simple_adder adder1;
	adder1.a = 10;
	adder1.pfunc_adder = func_adder;
	int c = adder1.pfunc_adder(20,30);
	printf("The adder is %d\n",c);
}
/*
	function pointer as struct member
	1. Define the structure's function pointer member similarily as the function's skeleton //line 7
	2. Define the function //line 11-14
	3. declare a structure variable //line 18
	4. Equate the function to the sturct's function member //line 20
	5. Call the function using the sturct's function member //line 21
	 
*/
