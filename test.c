#include<stdio.h>
#include<string.h>


int main()
{
	
	//char *names[]={"balaji", "musle"};
//	printf("%s",*(names));

	int a=5;
	int *p=6487580;
	
		printf("Address of a: %d\n Value: %d\n", &a,a);
		printf("Address of p: %d\n Value: %d\n derefe: %d\n", &p,p,*p);
		
			printf(" Value NULL: %d\n", NULL);
			
			printf("Size of *char: %d\n",sizeof(char*));


					printf("Size of int: %d\n",sizeof(int));
					
						printf("Size of p: %d\n",sizeof(p));
			
	
	return 0;
}
