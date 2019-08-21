#include<stdio.h>
#include<string.h>

int str_len(int *data);
int main()
{
	int data = 9876;
	int len = str_len(&data);
	printf("Len = %d\n",len);
	
	
	return 0;
}
int str_len(int *data)
{
	int length;
	length = strlen((const char*)data);
	return length;
}
