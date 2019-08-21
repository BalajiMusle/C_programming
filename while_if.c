#include<stdio.h>

int main()
{
	int i=0,a=5 ,j=0, count =0,data=4;
	if(data!=0)
	{
		while( count < data )
		{
			if(a==5){ break; }
				count++;
					printf("while_1 count=%d\n",count);
		
		}
		count++;
			printf("if count=%d\n",count);
		

		while( count < data)
		{
			
		
			count++;
				printf("while_2 count=%d\n",count);
		
		}
	}
	
	return 0;
}
