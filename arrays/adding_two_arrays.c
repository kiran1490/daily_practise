#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr1[] = {10,20,30,40,50,60,70,80,90,100};
	int arr2[] = {110,120,130,140,150,160,170,180,190,200};
	int size_of_arr1 = (sizeof(arr1)/sizeof(int));
	int size_of_arr2 = (sizeof(arr2)/sizeof(int));
	int size_of_arr3 = size_of_arr1 + size_of_arr2;
	int i = 0;
	//for variable number of elements init we have to use the malloc
	int *arr3 = NULL;
	arr3 = (int *)malloc(sizeof(int)*size_of_arr3);
	for(i = 0;i<size_of_arr1;i++)
	{
		arr3[i] = arr1[i];
	}
	for(i = size_of_arr1;i<size_of_arr3;i++)
	{
		arr3[i] = arr2[i-size_of_arr1];
	}
	for(int j = 0;j<size_of_arr3;j++)
		printf("The array element is %d\n",arr3[j]);
		
}

