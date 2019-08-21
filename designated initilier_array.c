#include<stdio.h>

int main()
{
	int arr[10]={[2]=4,[4]=8,[6]=12,[8]=16};
	int i=0;
	for(i=0; i<10; i++)
	{
		printf("arr[index]=%d\n",arr[i]);
	}
	
	
	return 0;
}
