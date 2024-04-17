#include<stdio.h>

int adder(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;
}

int func_accepts_adder(int (*padder)(int,int),int (*psub)(int,int),int* ret)
{
	int c = padder(100,200);
	*ret = psub(200,100);
	return c;
}

int main()
{
	int (*pfunc_adder)(int,int);
	int (*pfunc_sub)(int,int);
	int sub_ret_val;
	pfunc_adder = adder;
	pfunc_sub = sub;
	int res = func_accepts_adder(pfunc_adder,pfunc_sub,&sub_ret_val); 
	printf("The adder value is %d\n",res);
	printf("The sub value is %d\n",sub_ret_val);
}
/*
Function which accepts multiple function pointers as argumnets
	1. Define the three function arguments as two function pointers and an int pointer //line 13
	2. Call the function using the function pointer in the function definition //line 15
	3. Call the function using the function pointer in the function definition //line 16
	3. In the main declare two function pointers //line 22-23
	4. Assign the function pointer to the already declared function //line 25
	4. Assign the function pointer to the already declared function //line 26
	5. call the function which accepts the function pointer using the function pointer// line 27

*/

