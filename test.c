#include <stdio.h>
#include <string.h>
#include <stdlib.h>



/***pattern *****

 int main()
{
	int i,j,k,t=0,row;
	/*
	 #left triangle#

	 for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(j>=4-i)
			{
				printf(" *");

			}
			else
			{
				printf("  ");
			}
		}

	}printf("enter the row\n");
	scanf("%d",&row);
	for(i=0;i<row;i++)
	{
		for(j=0;j<=i-1;j++)
				{
					printf(" ");
					//t=t+1;
				}
		for(k=1;k<row-i;k++)
		{
			printf("*");

		}

		for(j=0;j<=k-1;j++)
		{
			printf("*");
			//t=t+1;
		}


		printf("\n");

	}
	return 0;
}*/


//#######reverse string and check it is palindrom or not####
/*

 int main()
{
char str1[]="nitin";
char str2[10];
int len,i,j,flag=0;
len=strlen(str1);
printf("%d\n",len);
for(i=len-1,j=0;j<len/2;i--,j++)
{
	if(str1[i]==str1[j])
	 {			flag=1;
	}
	else
	{printf("string not palindrom\n");
		flag=0;
	 break;}
}
if(flag==1)
printf("string palindrom\n");

}
*/

//#####swap two variable using two variables only ###
/*

 void swap(int *c, int *d);
int main()
{
	int a=5, b=2;
	swap(&a,&b);
	printf("a=%d\nb=%d",a,b);
	return 0;
}
void swap(int *c, int *d)
{
	*c=*c^*d;
	*d=*c^*d;
	*c=*c^*d;
	//printf("c=%d\nd=%d\n",c,d);
}
*/
//##### string is palindrom or not###
/*

int main()
{
char str1[]="nitin";
char *str2=malloc(sizeof(char*));
int len,i,j;
len=strlen(str1);
printf("%d\n",len);
for(i=len-1,j=0;i>=0;i--,j++)
{
	str2[j]=str1[i];


}
str2[j]='\0';
printf("%s\n",str2);
if(!strcmp(str1,str2))

	printf("palindrom");
else
		printf("not palindrom");

}
*/


//####collatz sequence#####

/*

 int main()
{
	int count=0,n;
	printf("Enter a Number");
	scanf("%d",&n);
	while(n!=1)
	{
		if(n%2==0)
		{
			n=n/2;
		}
		else
		{
			n=(n*3)+1;
		}
		count++;
	}
	printf("count=%d",count);
	return 0;
}
*/

//#### fibonacci series #####
/*

 int main()
{
	int i,x=0,y=1,z,n;
	printf("enter the number of terms");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		//printf("x=%d\n",x);
		//printf("y=%d\n",y);
		z=x+y;
		printf("z=%d\n",z);
		x=y;
		y=z;
	}
	printf("\n");
	return 0;

}

*/
/*****use of puts and gets ******

 int main()
{
	char name[20];
	printf("Name is :");
	gets(name);
	//printf("%s\n",name);
	puts(name);
	return 0;
}
*/

//****string concat****
/*

int main()
{
	char str1[20]="balaji";
	char str2[20]="musle";
	int i=0;
	int j=0;
	while(str1[i]!='\0')
	{
		i++;

	}
	while(str1[i++]=str2[j++])
	;

	printf("%s",str1);
	//puts(str1);
	return 0;

}

*/
//#####   factorial #########
/*

int main()
{
	int n,fact=1;
	printf("enter num");
	scanf("%d",&n);
	while(n>1)
	{	fact=fact*n;
		n--;
	}
	printf("fact= %d",fact);
	return 0;
}

*/

//####diamond pattern #####
/*

int main()
{
	int n, i=0,j=0 ,space;
	printf("Enter the num");
	scanf("%d",&n);
	space=4;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=space;j++)
			printf(" ");
		for(j=1;j<=2*i-1;j++)
			printf("*");

		space--;
		printf("\n");
	}

	space=1;
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=space;j++)
			printf(" ");
		for(j=1;j<=2*(n-i)-1;j++)
			printf("*");

		space++;
		printf("\n");
	}

	return 0;
}

*/
//### Reverse string #####
/*

int main()
{
	int i=0,j=0;
	 char str1[]="Balaji";
	 char str2[20];
	 int len=strlen(str1);
	 for(i=len-1,j=0;i>=0;i--,j++)
	 {
		 str2[j]=str1[i];
	 }
	printf("str2= %s",str2);
	return 0;
}

*/

// #### leap year ###
/*

int main()
{
	int year;
	printf("Enter the Year :");
	scanf("%d",&year);
	if(year%100!=0)
	{
		if(year%4==0)
		{
			printf("leap year");

		}
		else
		{
			printf("not leap year");
		}
	}
	else
	{
		if(year%400==0)
		{
			printf("leap year");

		}
		else
		{
			printf("not leap year");
		}
	}

	return 0;
}
*/

//#### print reverse number in difference of 2 ###
/*
{
	int k=10;
	while(k>=0)
	{
		printf("k= %d",k);
		k=k-2;
	}

	return 0;
}
*/

//#### sum/prod of digits of any number ###
/*

{
	int num,rem,sum=0;
	printf("Enter num :\n");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		sum+=rem;
		//prod*=rem;
		num/=10;
	}
	printf("Sum of num is : %d",sum);

	return 0;
}

*/

//### Binary to Decimal ####
/*

{
	int rem,num,j=1,dec,d;
	printf("Enter binary num=:");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		d=rem*j;
		dec=dec+d;
		j=j*2;
		num=num/10;
	}
	printf("Decimal num = %d",dec);
	return 0;
}
*/
// #### count digits in num ##
/*

{
	int num,count=0;
	printf("Enter num=:");
		scanf("%d",&num);
	do
	{
		num/=10;
		count++;
	}while(num>0);
	printf("Count= %d",count);

	return 0;
}
*/

//#### multiply two numbers without using * operator ###
/*

{
	int a,i,b,result=0;
	printf("Enter two num:");
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;i++)
	{
		result+=a;
	}
	printf("Result is = %d",result);
	return 0;
}

*/

// ### Armstrong num ##
/*

{
	int n,num,sum=0;
	//printf("Enter the number :");
	//scanf("%d",&num);
	for(num=100;num<=999;num++)
	{
		n=num;
		sum=0;

		while(n>0)
		{
			int rem=n%10;
			n/=10;
			int cube=rem*rem*rem;
			sum+=cube;
		}
		if(num==sum)/#### fibonacci series #####
/*

 int main()
{
	int i,x=0,y=1,z,n;
	printf("enter the number of terms");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		z=x+y;
		printf("%d",z);
		x=y;
		y=z;
	}
	printf("\n");
		{
			printf("num is armstrong = %d",num);
		}

	}


	return 0;
}
*/

//### String ###
// Reverse
/*

int main()
{
	char str1[]="Balajni";
	char str2[20];
	int i,j, len=strlen(str1);
	for(i=len-1,j=0;i>=0;i--,j++)
	{
		str2[j]=str1[i];

	}
	str2[6]='\0';
	printf("str2= :%s",str2);

	return 0;
}
*/

//### String length ####
/*

int main()
{
	int i=0;
	char str1[]="Balaji";
	while(str1[i]!='\0')
		i++;

	return i;
}
*/

//#### string compare ###
/*

int main()
{
	int i=0;
	char str1[]="Balaji";
	char str2[]="Balaji";
	for(i=0;str1[i]==str2[i];i++)
		if(str1[i]=='\0')
			return 0;
	return str1[i]-str2[i];
}

*/

//### string copy ##
/*

int main()
{
	int i=0;
	char str1[20]="Balaji";
	char str2[20]="musle";
	while(str2[i]!='\0')
		{
		str1[i]=str2[i];
		i++;
		}
		str1[i]='\0';


	printf("%s",str1);
	return 0;
}



//####string concat ####
/*

int main()
{
	int i=0,j=0;
	char str1[20]="Balaji";
	char str2[20]="Musle";
	while(str1[i]!='\0')
	{
		i++;
	}
	while(str1[i++]=str2[j++])
	{
		;
	}
	printf("%s",str1);
	return 0;
}
*/

//### Factorial using Recursion ###
/*


long int fact(int n);
int main()
{
	int n;
	printf("Enter the num");
	scanf("%d",&n);
	if(n<0)
		printf("No factoril for zero");
	else
		printf("Factorial of %d is %d",n,fact(n));

	return 0;
}
long int fact(int n)
{
	if(n==0)
		return 1;
	return (n*fact(n-1));
}

*/
//#### sum using recursion ###
/*

 long int sum(int i);
 int main()
 {
	 int n;
	 printf("Enter the num");
	 scanf("%d",&n);
	 printf("Sum of %d is %d",n,sum(n));


	 return 0;
 }
 long int sum(int n)
 {
	 if(n==0)
		 return 0;
	 return (n+sum(n-1));
 }
*/

//### print n to 1 ###
/*

void display(int n);
int main()
{
	int n;
	printf("Enter the num");
	scanf("%d",&n);
	display(n);
	return 0;
}
void display(int n)
{
	if(n==0)
		return;
	printf("%d",n);
	display(n-1);
}
*/

//### print 1 to n ###
/*

void dis(int n);
int main()
{
	int n;
	printf("Enter the num :\n");
	scanf("%d",&n);
	dis(n);


	return 0;
}
void dis(int n)
{
	if(n==0)
		return ;
	dis(n-1);
	printf("%d",n);
}
*/

//### fibonacci using rec ##
/*
int fib(int n);
int main()
{
	int nterms,i;
	printf("Enter the terms:\n");
	scanf("%d",&nterms);
	for(i=0;i<nterms;i++)
	{
		printf("%d",fib(i));

	}
	printf("\n");

	return 0;
}
int fib(int n)
{
	if(n==0 || n==1)
		return 1;
	return (fib(n-1)+fib(n-2));
}
*/

//### Linked List ###
/*


struct node
	{
		int info;
		struct node *link;
	};
struct node* create_list(struct node *);
void disply(struct node *);
struct node*  addatbeg(struct node *,int );

int main(void)
{
	struct node *start=NULL;
	int data,choice;

	while(1)
	{
		printf("1.Create List\n2.display\n3.Add At Begining\n");
		scanf("%d",&choice);

	switch(choice)
	{
	case 1:
			start=create_list(start);
			break;
	case 2:
		disply(start);
				break;
	case 3:

		printf("Enter the element to be inserted: \n");
		scanf("%d",&data);
		start=addatbeg(start,data);
			break;
	default :
			printf("Wrong choice\n");
	}
}
	return 0;
}

struct node* create_list(struct node *start)
{
	struct node *tmp=(struct node*)malloc(sizeof(struct node));
	int data;
	//printf("Enter the num of nodes\n");
	//scanf("%d",&n);

	if(start==NULL)
	{
	printf("Enter the element to be inserted: \n");
	scanf("%d",&data);
	tmp->info=data;
	tmp->link=NULL;
	start=tmp;
	}


	return start;
}

void disply(struct node *start)
{
	struct node *p=start;
while(p!=NULL)
{	 printf("-->%d",p->info);
p=p->link;
}
printf("\n");

}

struct node* addatbeg(struct node *start,int data)
{

	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
		tmp->info=data;
		tmp->link=start;
		start=tmp;

	return start;
}

*/

//##### Array ####
/*

int main()
{
	int n;
	printf("Enter the num of elements");
	scanf("%d",&n);
	int arr[n];
	int i=0,j=0;
	for(i=0;i<10;i++)
	{
		arr[i]=i;
    }
	for(j=0;j<15;j++)
	{
		printf(" %d ",arr[i]);
	}
	return 0;
}

*/
// ##### Find Max Element in Array ####
/*

int main()
{
	int i,max, n;
	int arr[]={10,40,20,30};
	n=sizeof(arr)/sizeof(int);
	max=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("%d\n",n);
	printf("max element in arr is = %d",max);

	return 0;
}

*/

//### Copy String ###
/*

int main()
{
	int i=0;
	char str1[]="balaji";
	char str2[]="musle";
	while(str2[i]!='\0')
	{
		str1[i]=str2[i];
		i++;
	}
	str1[i]='\0';
	printf("%s",str1);
	return 0;
}

*/

//### Replece num ###
/*

int main()
{
	int a=143749,i;
	int b=7;
	int DECIMAL=10;
	char str[20];
	char itoa (a,str,DECIMAL);
	while(str[i]!='\0')
	{
		if(str[i]==4)
			str[i]=b;
		//printf("%s string is:",str[i]);
	}
	printf("%s",str);

	return 0;
}

*/

//### Palindrom ###
/*

int main()
{
	char str1[]="nitin";
	char str2[20];
	int i,j,flag,len=strlen(str1);
	printf("length= %d\n",len);
	for(i=len-1,j=0;i>=0;i--,j++)
	{

		if(str1[j]==str1[i])
		{
			flag=1;

		}
		else
		{

			flag=0;
		}
	}
	if(flag==1)
		printf("string is palindrom");
	else
		printf("string is not palindrom");

	return 0;
}

*/
/*

int main()
{
	int x=50;
	if(!!x)
	printf("%d",!x);
	return 0;
}
*/

//### FInd Prime Num ####
/*

int main()
{
	int i,n,x;
	for(n=2;n<=100;n++)
	{
		for(i=2;i<=n-1;i++)
		{
			if(n%i)
			{	x=1;
				//printf("num=%d\n",n);

			}
			else
			{
				x=0;
				break;
			}
		}
		if(x==1)
		printf("num=%d\n",n);
	}
	return 0;
}

*/

//#### Bubble Sort ###
/*

#define MAX 10

int main()
{
	int i=0,j=0,arr[MAX],temp,xchange,n;
	printf("Enter num of elements :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Element: \n");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		xchange=0;
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				xchange++;
			}
		}
		if(xchange==0)
		{
			break;
		}
	}
	printf("sorted arr is:");
	for(i=0;i<n;i++)
	{
		printf("Arr elements is: %d\n",arr[i]);
	}
	printf("\n");
	return 0;
}

*/

//#### Function Pointer ###
/*

int add(int x, int y);
int main()
{
	int z;
	int (*fptr)(int,int);
	fptr=add;
	z=(*fptr)(5,7);
	printf("add is : %d",z);
	return 0;
}

int add(int x, int y)
{
	int a;
	a=x+y;
	return a;
}

*/

//### Unique string ###
/*

int main()
{
	char str[]="Balfhgnmopl";
	int i,j,flag, len=strlen(str);
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(str[i]==str[j])
			{
				flag=1;
				break;
			}
			else
				flag=0;

		}
		if(flag==1)
			break;
	}
	if(flag==0)
	{
		printf("string unique");

	}
	else
		printf("Not unique");
	return 0;
}


*/
//### Bit Set ##
/*

int main()
{
	int num=15,bitcheck=3;
	if((num & 1<<3)!= 0)
	{
		printf("bit set");

	}
	else
		printf("not set");

	return 0;

}

*/

//### c program to find the sum of
//first N numbers which are either multiple of 3 or 5

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b,i,n=50,sum=0;
	for(i=0;i<n;i++)
	{
		a=i%3;
		b=i%5;
		if(a==0 || b==0)
		{
			printf("%d\n",i);
			sum=sum+i;
		}

	}
	printf("sum=%d",sum);
	return 0;
}

*/

//### Reverse string without using library function ###
/*

int main()
{
	char str1[]="Balaji";
	char str2[20];
	int i,j, len=strlen(str1);
	for(i=len-1,j=0;i>=0;i--,j++)
	{
		str2[j]=str1[i];

	}
	printf("%s",str2);

	return 0;
}

*/

// Count words in sentence without using library function
/*

int main()
{
    char str[100];
    int i,count=0;
    printf("Enter the sentence\n");
    gets(str);
   // scanf("%[^\n]s",&str);
    for(i=0;str[i]!='\0';i++)
    {
    	if(str[i]==' ')
    	{
    		count++;
    	}
    }
    printf("words in sentence are=%d",count+1);

	return 0;
}

*/

//### reverse num ###
/*

int main()
{
	int rev=0,rem,num=123;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;

		num=num/10;
	}
	printf("rev num=%d",rev);

	return 0;
}

*/
//### macro inside main exam question ###
/*

int main()
{
#define max 40
	max=30;
	printf("%d",max);

	return 0;
}
*/

//### Array exam question ###
/*

int main()
{
	int i, arr[5]={1};
	for(i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}

	return 0;
}

*/
/*

int main()
{
	char str1[]="balaji";
	char str2[20];
	char *sptr =str1;
	char *kptr,*rptr =str2;

	int i, j, len=strlen(str1);
//	printf("%d\n",len);
//	for(i=len-1,j=0;i>=0;i--,j++)
//	{
//		str2[j]=str1[i];
//
//	}
//	printf("%s",(rptr);
	while(*sptr != '\0')
	{
		sptr++;
	}
	*kptr = *rptr;

	while(len >=0)
	{
	*[rptr++]=*[sptr--];
	}
	print("%s",rptr)
	return 0;
}

*/
/* string concat

int main()
{
	char str1[20]="balaji";
	char str2[20]="musle";
	int i=0;
	int j=0;
	while(str1[i]!='\0')
	{
		i++;

	}
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		i++;
		j++;
	}

	printf("%s",str1);

return 0;
}

*/
/*
// Num palindrom
char *itoa(int value, char*buffer, int base);
int main()
{
	char buffer[33];
	int value=123;
	int base=10;
	printf("itoa(%d, buffer, %d)=%s\n",value,base,itoa(value, buffer, base));
	return 0;
}
char *itoa(int value, char*buffer, int base)
{

}

*/
// Decimal to Binary
/*

int main()
{
	int num =313;
	int binaryNum[1000];
	int j,i=0;
	while(num>0)
	{
		binaryNum[i]=num%2;
		num=num/2;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",binaryNum[j]);
	}
	return 0;
}

*/
/*

int main()
{
	int a=3,b=-3, c=a/b,d=a%b;
	enum days {MON=-1, TUE, WED=6, THU, FRI=6, SAT};
	    printf("%d, %d, %d, %d, %d, %d\n", MON, TUE, WED, THU, FRI, SAT);
	printf("%d\n%d",c,d);
	return 0;
}

*/
/*
int main()
{
    struct emp
    {
        char *n;
        int age;
    };
    struct emp e1 = {"Dravid", 23};
    struct emp e2 = e1;
   strupr(e2.n);
    printf("%s\n", e1.n);
    return 0;
}
*/

int main()
{
	unsigned char a , b, d, e;
	unsigned short c;
	printf("Enter a = \n");
	scanf("%d",&a);
	d = a;
	printf("Enter b = \n");
	scanf("%d",&b);
	e=b;
	c = (d*100+e);
	printf("c = %d",c);

	return 0;
}
