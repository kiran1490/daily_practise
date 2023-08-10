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
/*
	a funtion to SET the particular bit in a given number
*/
int set_bit(int num,int position)
{
	int bit_mask = (1<<position);
	if(num&bit_mask)
	{
	}
	else
	{
		num = num | bit_mask;
	}
	return num;
	
}
/*
	a funtion to clear the particular bit in a given number
*/
int clear_bit(int num,int position)
{
	int bit_mask = (1<<position);
	if(num&bit_mask)
	{
		bit_mask = ~(bit_mask);	
		num = num & bit_mask;
	}
	else
	{
	}
	return num;
	
}
/*
	a funtion to remove last bit in a given number
*/
int remove_last_bit(int num)
{
	num = num>>1;
	return num;
	
}
/*
	a funtion to count the number of bits set in the given number
*/
int count_set_bits(int num)
{
	int mask = 0;
	int i = 0,count = 0;
	for(i=31;i>=0;i--)
	{
		mask = (1<<i);
		num&mask ? count++ : count ;
	}
	return count;
}
/*
	a helper funtion to return the position of the set bit if the set bits are 1
*/
int bit_position(int num)
{
	int mask = 0;
	int i = 0,count = 0;
	int position = 0;
	for(i=31;i>=0;i--)
	{
		mask = (1<<i);
		num&mask ? count++ : count ;
	}
	if(count == 1)
	{
		for(i=31;i>=0;i--)
		{
			mask = (1<<i);
			num&mask ? position = i : count ;
		}
	}
	else
	{
		return -1;
	}
	return position;
}
/*
	funtion to check whether a number is power of 2 or not
*/
void power_of_2(int num)
{
	int position = bit_position(num);
	if(position == -1)
	{
		printf("\n Not a power of 2");
	}
	else
	{
		printf("\n power of 2");
	}
}
/*
	funtion to check whether a number is power of 4 or not
*/
void power_of_4(int num)
{
	int position = bit_position(num);
	if(position == -1)
	{
		printf("\n Not a power of 4");
	}
	else 
	{
		if (position%2==0)
		printf("\n power of 4");
		else
		printf("\n not a power of 5");
	}
}

/*
	funtion to check whether a number is power of 8 or not
*/
void power_of_8(int num)
{
	int position = bit_position(num);
	if(position == -1)
	{
		printf("\n Not a power of 8");
	}
	else 
	{
		if (position%3==0)
		printf("\n power of 8");
		else
		printf("\n not a power of 8");
	}
}

/*
	funtion to check whether a number is power of 16 or not
*/
void power_of_16(int num)
{
	int position = bit_position(num);
	if(position == -1)
	{
		printf("\n Not a power of 16");
	}
	else 
	{
		if (position%4==0)
		printf("\n power of 16");
		else
		printf("\n not a power of 16");
	}
}
/*
	a function to swap i and j bits in a number
*/
int swap_bits(int num, int i ,int j)
{
	int mask_i = (1<<i);
	int collect_bit_i = 0;
	(num&mask_i) ? collect_bit_i = 1 : collect_bit_i = 0;
	int mask_j = (1<<i);
	int collect_bit_j = 0;
	(num&mask_j) ? collect_bit_j = 1 : collect_bit_j = 0;
	int sub_mask_i = collect_bit_j << j;
	int sub_mask_j = collect_bit_i << i;
}
