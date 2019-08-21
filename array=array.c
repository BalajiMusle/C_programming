#include<stdio.h>

int source_arr[size], dest_arr[size];

int main()
{
	int i, size;
	
	size = 5;	
	for (i=0; i < size; i++)
	{
		printf("Enter array element\n");
		scanf("%d", &source_arr[i]);
	}
	printf("1.source arra elelment[i]=%d\n", source_arr[0]);
	
	for (i = 0; i < size; i++)	
	{
		dest_arr[i] = source_arr[i];
		
	}
	
	for(i = 0; i < size; i++)
	{
		printf("source arra elelment=%d\n", source_arr[i]);
		printf("destination arra elelment=%d\n", dest_arr[i]);
	}

//	printf("2.source arra elelment=%d\n",source_arr[0]);
	
	return 0;
	
}
