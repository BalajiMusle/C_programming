#include<stdio.h>


int main()
{
	int i,datalen = 4,buf_index = 0,count=0,result = 0;
	char arr_source[] = {"A"};
	int *ptr;
	ptr = & arr_source;
	int arr_dest[datalen];
	
	while (datalen>0)
	{
										printf("\t1.ptr=%c\n\t",*ptr);
		int ascii = *ptr++;
										printf("1.ascii=%c\n\t",ascii);
	//	printf("2.ptr=%c\n",*ptr);
		ascii =ascii - 0x30;
		ascii =ascii & 0xf;
										printf("2.ascii=%02X\n\t",ascii);
		result = result * 10 + ascii;
									
										printf("result=%X\n\t",result);
		arr_dest[buf_index++] = ascii;
	//	printf("arr_dest=%x\n",arr_dest[0]);
		datalen--;
		count++;

	}
	
	for(i = 0; i < count; i++);
	{
		printf("arr_dest=%x\n\t",arr_dest[i]);
	}
	
	return 0;
}
