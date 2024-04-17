#include<stdio.h>
int adder(int a,int b)
{
	return a+b;
}
int main()
{
	int (*padder)(int,int);
	padder = adder;
	int c =  padder(10,20);	
	printf("The addition is %d\n",c);
}
/*
1. Function pointers are just the pointers to the function definition.
2. We can point to the function only when the function skeleton i.e return type and arguments are same
Process:
	1. Define the actual funtion  //lines 2-5
	2. Declare a pointer to the above function using -- return type (*function_name)(argument1,argument2); //line 8
	3. Equate the function pointer to the name of the earlier defined function //line 9
	4. call the function using the pointer along with arguments.

Uses of function pointers:
Callback Functions: Function pointers are frequently used in callback mechanisms 
where a function is passed as an argument to another function.
 This is common in event-driven programming or libraries where you want 
to specify custom behavior for certain events. For example, in GUI programming, 
you might specify a callback function to handle button clicks.
*/
