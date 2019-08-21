#include<stdio.h>

int main()
{
	
	static int a=0;
	
	if(a==0)
	{
		printf("ba\n");
			printf("1.a=%d\n",a);
		a++;
	}
	
	else if(a==1)
	{
		printf("la\n");
			printf("2.a=%d\n",a);
		a++;
	}
	else if(a==2)
	{
		printf("ji\n");
			printf("3.a=%d\n",a);
		a++;
	}
	return 0;
}
