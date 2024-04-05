#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

struct simple_stc
{
	int element;
};

typedef struct simple_stc simple_struct;

int main()
{
	simple_struct simp1;
	simple_struct *psimp1;
	simple_struct *point_simp = NULL;
	point_simp = (simple_struct*)malloc(sizeof(simple_struct));
	if(point_simp==NULL)
		printf("Error in malloc\n");
	simp1.element = 10;
	psimp1 = &simp1;
	point_simp->element = 20;
	printf("The value of the simple element 1 (variable)is %d\n",simp1.element); 
	printf("The value of the simple element 1 (pointer)is %d\n",psimp1->element); 
	printf("The value of the pointer element (pointer)is %d\n",point_simp->element); 
}
/*
observations
1. error while directly assigning value to the struct pointer -- should use malloc to get the struct pointers
	//error condition
	simple_struct *point_simp;
	point_simp->element = 10; //will give segmentation fault
	//correct way is to use malloc
	simple_struct *point_simp = NULL;
	point_simp = (simple_strcut*)malloc(sizeof(simple_struct));
	point_simp->element = 20; //will not give segmentation fault
*/

