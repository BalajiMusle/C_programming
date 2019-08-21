#include<stdio.h>

int main()
{
	int N=3,*p,sum=0;

	int arr[5]={10,20,30};
	for(p=&arr[0]; p<&arr[N]; p++)
	{
		sum += *p;
	}
	printf("Sum = %d\n",sum);
	return 0;
}
