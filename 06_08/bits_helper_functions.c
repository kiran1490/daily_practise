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

/*
	a funtion to toggle the positioned bit
*/
int toggle_bit(int num, int position)
{
	int bit_mask = (1<<position);
	if(num&bit_mask)
	{
		bit_mask = ~(bit_mask);	
		num = num & bit_mask;
	}
	else
	{
		num = num | bit_mask;
		
	}
	return num;
}
/*
	a funtion to check whether the given bit is SET or NOT SET in NUMBER
*/
void check_bit_status(int num,int position)
{
	int bit_mask = (1<<position);
	if(num&bit_mask)
	{
		printf("The Bit %d in 0x%X is SET\n",position,num);
	}
	else
	{
		printf("The Bit %d in 0x%X is NOT SET\n",position,num);
		
	}
	
}
