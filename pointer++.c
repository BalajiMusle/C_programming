#include<stdio.h>

int main()
{
	int arr[100];
	int *ptr;
	ptr = & arr[0];
	printf("1.ptr location=%d\n",ptr);
	ptr+=2;
//	ptr++;
	printf("2.ptr location after ++=%d\n",ptr);
	
	
	
	return 0;
}
