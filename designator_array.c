#include<stdio.h>

int main()
{
	int arr[10]={1,2,3,4,[0]=5,6,7,8};
	int i=0;
	for(i=0; i<10; i++)
	{
		printf("arr[index]=%d\n",arr[i]);
	}
	
	
	return 0;
}
