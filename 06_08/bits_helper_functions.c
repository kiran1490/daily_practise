#include<stdio.h>

/*
	An helper function to display the bits of the input argument
	intput parameter an int
	return none
*/
void display_bits(int num)
{
	int mask = 0;
	int i = 0;
	for(i=31;i>=0;i--)
	{
		mask = (1<<i);
		(num&mask) ? printf("1") : printf("0");
	}
	printf("\n");
}
