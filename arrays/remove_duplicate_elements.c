#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10] = {10,10,20,20,30,40,50,50,70,70};
	int number = 10;
	int i,j,k;
	/*Three loops
	1. one for searching the whole array
	2. for checking whenther the element is identical to the looped i
	3. If identical then delete the element
		decrease the size by 1 and j element by 1
	*/
	for(i=0;i<number;i++)
	{
	   for(j = i+1; j < number; j++)
	   {
	      if(a[i] == a[j]){
	         for(k = j; k <number; k++){
	            a[k] = a[k+1];
	         }
	         j--;
	         number--;
	      }
	   }
	}
	printf("The array size is %d\n",number);
	for(int i = 0;i<number;i++)
		printf("%d\t",a[i]);
}

