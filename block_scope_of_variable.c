#include<stdio.h>

void one(void);
void two(void);
int main()
{
	int i=1;
	if(i)
	{
		int i;
		i=3;
	}
	printf("1******. i = %d\n",i);
	one();
	printf("2*****. i = %d\n",i);
	two();
	printf("2*****. i = %d\n",i);	
	return 0;
}
void one(void)
{
	int j=5;

}
void two(void)
{
	int j=5;
	
}
