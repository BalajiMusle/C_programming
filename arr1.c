#include<stdio.h>
f
int main()
{


	char arr[] = {"bala"};
	int count=0,len = sizeof(arr) / sizeof(char);
	long decimalnum, quotient, remainder;
   	int i, j = 0;
   	char hexadecimalnum[100];
	//	printf("len = %d\n\t",len);
	
	for(i = 0; i < len-1; i++)
	{	
		char ch = arr[i];
		//printf("ch = %c\n\t",arr[i]);
		int decimalnum = (int)ch;
		printf("decimalnum = %d\n\t",decimalnum);
		 quotient = decimalnum;
		 while (quotient != 0)
  		{
     	remainder = quotient % 16;
     		if (remainder < 10)
          		hexadecimalnum[j++] = 48 + remainder;
       		else
          		hexadecimalnum[j++] = 55 + remainder;
       	quotient = quotient / 16;
   		}
		
			 
	}
	hexadecimalnum[++j] ='\0'; 
	 //	for (i = j; i >= 0; i--)
				
	  for (j = 0; j!='\0'; j++)
	 	//for (i=0; i<len-1; i++)	 
            printf("%c", hexadecimalnum[j]);
	
	return 0;
}
