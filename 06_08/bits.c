#include<stdio.h>
void display_bits(int);
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
int main()
{
	int num=0xAABB;
	display_bits(num);
}
