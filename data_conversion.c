#include<stdio.h>

int main()
{
	char arrr[10];
	int short data = 300;
	  
	arrr[0] = (data >> 8) & 0xFF;    				/*Higher byte*/
	arrr[1] = data & 0xFF;    						/*lower byte*/
	int short data2 = (arrr[0] << 8) | arrr[1];		/*Recovered data*/
	printf(" Data  =  %d \n\r", (arrr[0] << 8) | arrr[1]);
	printf(" data2  =  %d \n\r", data2);	
	
	return 0;
}
