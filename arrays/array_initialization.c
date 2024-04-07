#include<stdio.h>
#include<stdlib.h>

int main()
{
	/*
	Normal initialization according to the size 
	If you have init less elements then the remaining elements will be 0 
	*/
	int arr[10] = {1,2,3,4,5,6,7,8};
	for(int i = 0;i<10;i++)
		printf("The array element is %d\n",arr[i]);
	printf("New Array\n");
	/*
	Initialization of the array without the size of the array
	*/
	int arrays[] = {1,2,3,4,5,6,7};
	int size_of_array = sizeof(arrays)/sizeof(int);
	for(int i = 0;i<size_of_array;i++)
		printf("The array element is %d\n",arrays[i]);
	printf("Size of Array is %d\n",size_of_array);
	printf("New Array\n");
	/*
	Initialization of the array according to specific element only
	*/
	int array_1[] = {[1] = 10,[2] = 20,[5] = 30,[8] = 30};
	size_of_array = sizeof(array_1)/sizeof(int);
	for(int i = 0;i<size_of_array;i++)
		printf("The array element is %d\n",array_1[i]);
	printf("Size of Array is %d\n",size_of_array);
	return 0; 
}

