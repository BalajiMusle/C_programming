#include<stdio.h>
int i;
void print_all_row(void);
void print_one_row(void);
int main()
{
	print_one_row();
	print_all_row();
	
	return 0;
}

void print_one_row(void)
{
	for(i=1; i<=10; i++)
	{
			printf(" i = %d\n ");
		printf(" * ");
	}
	printf(" \n ");
}

void print_all_row(void)
{
	for(i=1; i<=10; i++)
	{
			printf(" i = %d\n ");
		print_one_row();
			printf(" i = %d\n ");
		printf(" * ");
		printf(" \n ");
	}
}
