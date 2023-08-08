#include<stdio.h>
#include"bits_helper_functions.h"

int main()
{
	int a = 0xAAAA;
	display_bits(a);
	/*
	a = toggle_bit(a,1);
	display_bits(a);
	check_bit_status(a,0);
	a = set_bit(a,0);
	display_bits(a);
	a = clear_bit(a,0);
	check_bit_status(a,0);
	display_bits(a);
	08_08 */

	a = remove_last_bit(a);
	display_bits(a);
	int c = count_set_bits(a);
	printf("\nThe set bits num is %d\n",c);


}
