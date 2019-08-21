#include<stdio.h>


int main()
{
	int case_value;
	printf("Enter case value:");
	scanf("%d",& case_value);
	
	switch(case_value)
	{
	
	
	case 1:
		printf("11");
//	break;
	case 2:
		printf("22");
//	break;
	case 3:
		printf("33");
//	break;
	case 4:
		printf("44");
//	break;
	default:
		printf("default");
	break;
	}
	return 0;
}
