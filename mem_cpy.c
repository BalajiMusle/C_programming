#include<stdio.h>
#include <string.h>
typedef struct 
{
	int arr1[10];
} st_struct;

void set(void *ptrsourse);
void get(void *ptrsourse);

int main()
{
	st_struct *desc;
	int a = 555,b;
	set(&a);
	get(&b);
	printf("b = %d\n", b);
	return 0;
}

void set(void *ptrs)
{
	st_struct *desc;
	int *pointer;
	pointer = ptrs;
	printf("pointer = %d\n", *pointer);
	memcpy( &desc->arr1[0], pointer, 4);
	printf("desc->arr1[0] = %d\n", desc->arr1[0]);
}


void get(void *ptrs)
{
	st_struct *desc;
	int *pointer;
	pointer = ptrs;
	memcpy(  pointer,&desc->arr1[0], 4);
	printf("pointer = %d\n", *pointer);
	//printf("desc->arr1[0] = %d\n", desc->arr1[0]);
}
