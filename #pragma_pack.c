#include<stdio.h>
# pragma pack (1)
struct school
{
	double a;
	int b;
	char h;	
//	int c;
//	char d;	
};
 
int main()
{
	struct school students;
	
	printf("size of struct %d \n",sizeof(students));
	return 0;
}
