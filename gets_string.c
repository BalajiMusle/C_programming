#include<stdio.h>


int main()
{
	
	char str[16];
	int i,j;
	printf("Enter ip\n");
	gets(str);
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]== '*')
		{
			str[i] = '.';
			
		}
	}
	printf(" ip = %s\n", str);
	
	return 0;
}
