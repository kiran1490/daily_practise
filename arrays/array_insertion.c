#include<stdio.h>
#include<stdlib.h>
int main()
{
	//please remember the lessthan and greater than size if you are coming down the loop
	//starting at the last element and coming to first element you should > not <
	//Insert element at location 4
	int arr[10] = {1,2,3,5,6,7,8,9,10};
	for(int i = 9;i>3;i--)
	{	
		arr[i] = arr[i-1];
	}
	arr[3] = 4;
	for(int i = 0;i<10;i++)
		printf("The array %d element is %d\n",i,arr[i]);
}

