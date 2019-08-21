#include<stdio.h>

int main()
{
	int a=9, len=0, maxlen= 7;
	
	while(a>0)
	{
		len++;
		if(len> maxlen)
		{
			len = maxlen;
			break;
		}
		
		a--;
	}
	




	
	printf("len = %d", len);
	
	return 0;
}
