#include<stdio.h>
#include<stdlib.h>
int main()
{
	//Remove 5th element from the array
	int arr[10] = {10,20,30,40,50,60,70,80,90,100};
	for(int i = 4;i<10;i++)
	{
		arr[i] = arr[i+1]; //error will occur here in the statement 
	}
	arr[9] = 0;
	for(int i = 0;i<10;i++)
		printf("The array element is %d\n",arr[i]);
	/* *** stack smashing detected ***: terminated
		Aborted (core dumped)
	The above error will come if you access the one element more 
	arr[10] = 0;
	will give the error
	Since the index starts at 0 so the last element would be one less than the size of array
	Ex: arr[10]  --- The last element would be 9
	*/
	return 0;
}
