#include<stdio.h>
#include"bits_helper_functions.h"
#include"array_helper_functions.h"

int main()
{
	/*
	int a = 0xAAAA;
	display_bits(a);
	a = toggle_bit(a,1);
	display_bits(a);
	check_bit_status(a,0);
	a = set_bit(a,0);
	display_bits(a);
	a = clear_bit(a,0);
	check_bit_status(a,0);
	display_bits(a);
	08_08 

	a = remove_last_bit(a);
	display_bits(a);
	int c = count_set_bits(a);
	printf("\nThe set bits num is %d\n",c);
	09_08 
	a = 0x100;
	power_of_2(a);
	power_of_4(a);
	power_of_8(a);
	power_of_16(a);
	//a = a^a;
	//display_bits(a);
	//a = swap_bits(a,0,1);
	//display_bits(a);
	int b = 0xbbbb;
	swap_numbers(&a,&b);
	printf("\nThe num is 0x%x",a);
	printf("\nThe num is 0x%x",b);
	printf("\n");
	
	*/	
	int a[] = {1,2,3,4,5,6,7,8,9};
	int pos = 5;
	int size = sizeof(a)/sizeof(int);
	//display_array(a,num);
	array_delete_element(a,size,pos);
	array_insert_element(a,size,pos,4);
	display_array(a,size);


}
