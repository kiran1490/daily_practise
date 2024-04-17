#include<stdio.h>

int adder(int a,int b)
{
	return a+b;
}

int func_accepts_adder(int (*padder)(int,int))
{
	int c = padder(100,200);
	return c;
}

int main()
{
	int (*pfunc_adder)(int,int);
	pfunc_adder = adder;
	int res = func_accepts_adder(pfunc_adder); 
	printf("The adder value is %d\n",res);
}
/*
Function which accepts function pointer as argumnet
	1. Define the function arguments as you define pointers //line 8
	2. Call the function using the function pointer in the function definition //line 10
	3. In the main declare the function pointer //line 17
	4. Assign the function pointer to the already declared function //line 18
	5. call the function which accepts the function pointer using the function pointer// line 20

*/

/*
warning while doing int (*pfunc_adder)(int);

argument_as_function_pointer.c: In function ‘main’:
argument_as_function_pointer.c:18:14: warning: assignment to ‘int (*)(int)’ from incompatible pointer type ‘int (*)(int,  int)’ [-Wincompatible-pointer-types]
   18 |  pfunc_adder = adder;
      |              ^
argument_as_function_pointer.c:19:31: warning: passing argument 1 of ‘func_accepts_adder’ from incompatible pointer type [-Wincompatible-pointer-types]
   19 |  int res = func_accepts_adder(pfunc_adder);
      |                               ^~~~~~~~~~~
      |                               |
      |                               int (*)(int)
argument_as_function_pointer.c:8:30: note: expected ‘int (*)(int,  int)’ but argument is of type ‘int (*)(int)’
    8 | int func_accepts_adder(int (*padder)(int,int))
      |                        ~~~~~~^~~~~~~~~~~~~~~~

*/
