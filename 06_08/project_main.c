#include<stdio.h>
#include"bits_helper_functions.h"

int main()
{
	int a = 0xAAAA;
	display_bits(a);
	/*
	a = toggle_bit(a,1);
	display_bits(a);
	*/
	check_bit_status(a,1);
	b = set_bit(a,1);
	display_bits(a);
	check_bit_status(a,1);


}