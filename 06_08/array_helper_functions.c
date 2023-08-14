#include<stdio.h>
void display_array(int *array,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nThe %d element in array is %d",i,array[i]);
	}	
}
void array_delete_element(int *array, int size,int pos)
{
	int i = pos;
	for(i;i<size;i++)
	{
		array[i] = array[i+1];
	}
	array[i-1]=0;
}
void array_insert_element(int *array, int size, int pos ,int value)
{
	int i = size;
	for(i;i>pos;i--)
	{
		array[i] = array[i-1];
	}
	array[i] = value;
}
