#include<stdio.h>


int main()
{
	int *ptr1;
	int *ptr2;
	*ptr1=10;
	*ptr2=*ptr1;
	printf("ptr2");
	
	return 0;
}
