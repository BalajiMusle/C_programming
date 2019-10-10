#include <stdio.h>
#include <string.h>
#include <stdlib.h>



//##### Pattern #####
/*

int main()
{
	int i, j, k, t=0, row;
	 # left triangle #
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (j >= 4-i)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}

	# Down triangle #
	printf("enter the row\n");
	scanf("%d", &row);
	
	for (i=0; i < row; i++)
	{
		for (j = 0; j <= i-1; j++)
		{
			printf(" ");
			//t = t+1;
		}
		for (k = 1; k < row-i; k++)
		{
			printf("*");
		}
		for (j = 0; j <= k-1; j++)
		{
			printf("*");
			//t = t+1;
		}
		
		printf("\n");
	}
	
	return 0;
}
*/

//####### string is palindrom or not ####
/*

//###### Method 1 ##########

int main()
{
	char str1[] = "nitin";
	char str2[10];
	int len, i, j;
	int flag = 0;
	
	len=strlen(str1);
	
	printf("%d\n", len);
	
	for (i = len-1, j = 0; j < len/2; i--, j++)
	{
		if (str1[i] == str1[j])
	 	{			
	 		flag = 1;
	 	}
		else
		{
			flag = 0;
			printf("string not palindrom\n");
			break;
		}
	}
	
	if (flag == 1)
	{
		printf("string palindrom\n");
	}

	return 0;
}
*/

//###### Method 2 ##########

/*

int main()
{
	char str1[] = "nitin";
	char *str2 = malloc(sizeof(char*));
	int len, i, j;
	
	len = strlen(str1);
	
	printf("%d\n", len);
	
	for (i = len-1, j = 0; i >= 0; i--, j++)
	{
		str2[j] = str1[i];
	}
	
	str2[j] = '\0';
	
	printf("%s\n", str2);
	
	if (!strcmp(str1, str2))
	{
		printf("palindrom");
	}
	else
	{
		printf("not palindrom");
	}

	return 0;
}

*/
	
//##### swap two variable without using third variable ###
/*

//###### Method 1 ##########

void swap(int *c, int *d);

int main()
{
	int a = 5, b = 2;
	
	swap (&a, &b);
	
	printf("a=%d\n b=%d", a, b);
	
	return 0;
}
void swap(int *c, int *d)
{
	*c = *c ^ *d;
	*d = *c ^ *d;
	*c = *c ^ *d;
	
	//printf("c=%d\n d=%d\n", c, d);
}

//###### Method 2 #########

int main() 
{ 
    int x = 10, y = 5; 
  
    // Code to swap 'x' and 'y' 
    x = x + y; // x now becomes 15 
    y = x - y; // y becomes 10 
    x = x - y; // x becomes 5 
  
    printf("After Swapping: x = %d, y = %d", x, y); 
  
    return 0; 
} 

//###### Method 3 #########

int main() 
{ 
    int x = 10, y = 5; 
  
    // Code to swap 'x' and 'y' 
    x = x * y; // x now becomes 50 
    y = x / y; // y becomes 10 
    x = x / y; // x becomes 5 
  
    printf("After Swapping: x = %d, y = %d", x, y); 
  
    return 0; 
}

*/

//#### collatz sequence #####

/*
 int main()
{
	int count = 0, n;
	
	printf("Enter a Number");
	scanf("%d", &n);
	
	while (n != 1)
	{
		if (n % 2 == 0)
		{
			n = n / 2;
		}
		else
		{
			n = (n * 3) + 1;
		}
		count++;
	}
	printf("count=%d", count);
	
	return 0;
}
*/

//##### fibonacci series #####
/*

 int main()
{
	int i, x = 0, y = 1, z, n;
	
	printf("enter the number of terms");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		//printf("x = %d\n", x);
		//printf("y = %d\n", y);
		z = x + y;
		printf("z = %d\n", z);
		x = y;
		y = z;
	}
	printf("\n");
	
	return 0;
}
*/

//##### use of puts and gets #####
/*

int main()
{
	char name[20];
	
	printf("Name is : ");
	gets(name);
	
	//printf("%s\n", name);
	
	puts(name);
	
	return 0;
}
*/

//##### string concat #####
/*

int main()
{
	char str1[20] = "balaji";
	char str2[20] = "musle";
	
	int i = 0;
	int j = 0;
	
	while (str1[i] != '\0')
	{
		i++;
	}
	
	while (str1[i++] = str2[j++])
	;
	
	printf("%s", str1);
	//puts(str1);
	
	return 0;
}
*/

//##### factorial #####
/*

int main()
{
	int n, fact = 1;
	
	printf("enter num");
	scanf("%d", &n);
	
	while (n > 1)
	{	
		fact = fact * n;
		n--;
	}
	
	printf("fact= %d", fact);
	
	return 0;
}
*/

//##### diamond pattern #####
/*

int main()
{
	int Rows, i = 0, j = 0, space;
	
	printf("Enter the num of Rows : ");
	scanf("%d", &Rows);
	
	space = Rows - 1;
	
	for (i = 1; i <= Rows; i++)
	{
		for (j = 1; j <= space; j++)
		{
			printf(" ");
		}
		
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		
		space--;
		
		printf("\n");
	}
	
	space = 1;
	
	for (i = 1; i <= Rows - 1; i++)
	{
		for (j = 1; j <= space; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * (Rows - i) - 1; j++)
		{
			printf("*");
		}
		
		space++;
		
		printf("\n");
	}
	
	return 0;
}
*/

//##### Reverse string #####
/*

int main()
{
	char str1[] = "Balaji";
	char str2[20];
	
	int i = 0, j = 0;
	
	int len = strlen(str1);
	
	for (i = len - 1, j = 0; i >= 0; i--, j++)
	{
		 str2[j] = str1[i];
	}
	
	printf(" str2 = %s ", str2);
	
	return 0;
}
*/

// ##### leap year #####
/*

int main()
{
	int year;
	
	printf("Enter the Year : ");
	scanf("%d", &year);
	
	if (year % 100 != 0)
	{
		if (year % 4 == 0)
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
		if(year % 400 == 0)
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

//##### print reverse number in difference of 2 #####
/*

int main()
{
	int k=10;
	
	while (k >= 0)
	{
		printf("k = %d", k);
		k = k - 2;
	}
	
	return 0;
}
*/

//##### sum/prod of digits of any number #####
/*

{
	int num, rem, sum = 0;
	
	printf("Enter num : \n");
	scanf("%d", &num);
	
	while (num > 0)
	{
		rem = num % 10;
		sum += rem;
		//prod *= rem;
		num /= 10;
	}
	
	printf("Sum of num is : %d", sum);
	
	return 0;
}
*/

//##### Binary to Decimal #####
/*

int main()
{
	int rem, num, j = 1, dec, d;
	
	printf("Enter binary num=: ");
	scanf("%d", &num);
	
	while (num > 0)
	{
		rem = num % 10;
		d = rem * j;
		dec = dec + d;
		j = j * 2;
		num = num / 10;
	}
	
	printf("Decimal num = %d", dec);
	
	return 0;
}
*/

// ##### count digits in num #####
/*

int main()
{
	int num, count = 0;
	
	printf("Enter num : ");
	scanf("%d", &num);
	
	do
	{
		num /= 10;
		count++;
		
	}while(num > 0);
	printf("Count = %d", count);
	
	return 0;
}
*/

//##### multiply two numbers without using " *" operator #####
/*

int main()
{
	int a, i, b, result = 0;
	
	printf("Enter two num: ");
	scanf("%d %d", &a, &b);
	
	for (i = 1; i <= b; i++)
	{
		result += a;
	}
	
	printf("Result is = %d", result);
	
	return 0;
}
*/

// ##### Armstrong num #####
/*

int main()
{
	int n, num, int cube, rem, sum = 0;
	
	//printf("Enter the number : ");
	//scanf("%d", &num);
	
	for (num =100; num <= 999; num++)
	{
		n = num;
		sum = 0;
		
		while (n > 0)
		{
			rem = n % 10;
			n /= 10;
			cube = rem * rem * rem;
			sum += cube;
		}
		
		if (num == sum)
/*

//##### fibonacci series #####
/*

int main()
{
	int i, x = 0, y = 1, z, n;
	
	printf("enter the number of terms");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		z = x + y;
		printf("%d", z);
		x = y;
		y = z;
	}
	
	printf("\n");
	
		{
			printf("num is armstrong = %d",num);
		}
	}
	
	return 0;
}
*/

//##### String Reverse ##### 
/*

int main()
{
	char str1[] = "Balaji";
	char str2[20];
	int i, j;
	int len = strlen(str1);
	
	for (i = len - 1, j = 0; i >= 0; i--, j++)
	{
		str2[j] = str1[i];
	}
	
	str2[6] ='\0';
	
	printf("str2: %s", str2);
	
	return 0;
}
*/

//##### String length #####
/*

int main()
{
	char str1[] = "Balaji";
	int i = 0;
	
	while (str1[i] != '\0')
	{
		i++;
	}
	
	return i;
}
*/

//##### string compare #####
/*

int main()
{

	char str1[] = "Balaji";
	char str2[] = "Balaji";
	
	int i = 0;
	
	for (i = 0; str1[i] == str2[i]; i++)
	{
		if (str1[i] == '\0')
		{
			return 0;
		}
	}
	
	return str1[i] - str2[i];
}
*/

//##### string copy #####
/*

int main()
{
	char str1[20] = "Balaji";
	char str2[20] = "musle";
	
	int i = 0;
	
	while (str2[i] != '\0')
	{
		str1[i] = str2[i];
		i++;
	}
	
	str1[i] = '\0';
	
	printf("%s", str1);
	
	return 0;
}
*/

//##### string concat #####
/*

int main()
{
	char str1[20] = "Balaji";
	char str2[20] = "Musle";
	
	int i = 0, j = 0;
	
	while (str1[i] != '\0')
	{
		i++;
	}
	while (str1[i++] = str2[j++])
	{
		;
	}
	
	printf("%s", str1);
	
	return 0;
}
*/

//##### Factorial using Recursion #####
/*

long int fact(int n);

int main()
{
	int n;
	
	printf("Enter the num");
	scanf("%d", &n);
	
	if (n < 0)
	{
		printf("No factoril for zero");
	}
	else
	{
		printf(" Factorial of %d is %d ", n, fact(n));
	}
	
	return 0;
}

long int fact(int n)
{
	if (n == 0)
	{
		return 1;
	}
	
	return (n * fact(n - 1));
}
*/

//##### sum using recursion #####
/*

long int sum(int i);
int main()
{
	int n;
	
	printf(" Enter the num ");
	scanf("%d", &n);
	
	printf("Sum of %d is %d ", n, sum(n));
	
	return 0;
}
 
long int sum(int n)
{
	if (n == 0)
	{
		return 0;
	}
	
	return (n + sum(n - 1));
 }
*/

//##### print n to 1 #####
/*

void display(int n);

int main()
{
	int n;
	
	printf("Enter the num");
	scanf("%d", &n);
	
	display(n);
	
	return 0;
}

void display(int n)
{
	if(n == 0)
	{
		return;
	}
	
	printf("%d", n);
	
	display(n - 1);
}
*/

//##### print 1 to n #####
/*

void dis(int n);

int main()
{
	int n;
	
	printf("Enter the num :\n");
	scanf("%d", &n);
	
	dis(n);
	
	return 0;
}

void dis(int n)
{
	if (n == 0)
	{
		return ;
	}
	
	dis(n - 1);
	
	printf("%d", n);
}
*/

//##### fibonacci using rec #####
/*

int fib(int n);

int main()
{
	int nterms, i;
	
	printf("Enter the terms:\n");
	scanf("%d", &nterms);
	
	for (i = 0; i < nterms; i++)
	{
		printf("%d", fib(i));
	}
	
	printf("\n");
	
	return 0;
}
int fib(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	
	return (fib(n - 1) + fib(n - 2));
}
*/

//##### Linked List #####
/*

struct node
{
	int info;
	struct node *link;
};

struct node* create_list(struct node *);  		//function declaration
void disply(struct node *); 					//function declaration
struct node* addatbeg(struct node *, int ); 	//function declaration

int main(void)
{
	struct node *start = NULL;
	
	int data, choice;
	
	while (1)
	{
		printf(" 1. Create List\n  2. display\n  3. Add At Begining\n ");
		scanf("%d", &choice);
		
		switch (choice)
		{
		case 1:
				start = create_list(start);
				break;
		case 2:
				disply(start);
				break;
		case 3:
			printf("Enter the element to be inserted: \n");
			scanf("%d", &data);
			
			start = addatbeg(start, data);
			
			break;
		default :
				printf(" Wrong choice\n ");
		}
	}
	
	return 0;
}

struct node* create_list(struct node *start)
{

	int data;
	struct node *tmp = (struct node*) malloc(sizeof(struct node));

	//printf("Enter the num of nodes\n");
	//scanf("%d",&n);
	
	if (start == NULL)
	{
		printf("Enter the element to be inserted: \n");
		scanf("%d",	&data);
		
		tmp->info = data;
		tmp->link = NULL;
		start = tmp;
	}
	
	return start;
}

void disply(struct node *start)
{
	struct node *p = start;
	
	while (p != NULL)
	{
		printf("-->%d", p->info);
		p = p->link;
	}
	
	printf("\n");
}

struct node* addatbeg(struct node *start, int data)
{
	struct node *tmp;
	
	tmp = (struct node *)malloc(sizeof(struct node));
	
	tmp->info = data;
	tmp->link = start;
	start = tmp;
	
	return start;
}
*/

//##### Array #####
/*

int main()
{
	int n;
	int i = 0, j = 0;
	int arr[n];
	
	printf("Enter the num of elements");
	scanf("%d", &n);

	// Insert Element in Array 
	for(i = 0; i < 10; i++)
	{
		arr[i] = i;
    }
    
	// Print Element of Array 
	for(j = 0; j < 15; j++)
	{
		printf(" %d ", arr[i]);
	}
	
	return 0;
}
*/

// ##### Find Max Element in Array #####
/*

int main()
{
	int i, max, n;
	int arr[] = {10, 40, 20, 30};
	
	n = sizeof(arr) / sizeof(int);
	
	max = arr[0];
	
	for (i = 1; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	
	printf("%d\n", n);
	printf("max element in arr is = %d", max);
	
	return 0;
}
*/

//##### Copy String #####
/*

int main()
{

	char str1[] = "balaji";
	char str2[] = "musle";
	int i=0;
	
	while (str2[i] != '\0')
	{
		str1[i] = str2[i];
		i++;
	}
	
	str1[i] = '\0';
	printf("%s", str1);
	
	return 0;
}
*/

//##### Replece num #####
/*

int main()
{
	
	char str[20];
	int a=143749, i;
	int b=7;
	int DECIMAL=10;
	
	char itoa (a,str,DECIMAL);
	
	while (str[i] != '\0')
	{
		if (str[i] == 4)
		{
			str[i] = b;
			//printf("%s string is: ", str[i]);
		}
	}
	
	printf("%s", str);
	
	return 0;
}
*/

//##### " ! " Operation #####
/*

int main()
{
	int x = 50;
	if (!!x)
	{
		printf("x = %d", x);
	}
	
	return 0;
}
*/

//##### FInd Prime Num #####
/*

int main()
{
	int i, num, x;
	
	for (num = 2; num <= 100; num++)
	{
		for (i = 2; i <= num - 1; i++)
		{
			if (num % i)
			{
				x = 1;
				//printf("num=%d\n", num);
			}
			else
			{
				x = 0;
				break;
			}
		}
		
		if (x == 1)
		{
			printf("num = %d\n", num);
		}
	}
	
	return 0;
}
*/

//##### Bubble Sort #####
/*

#define MAX 10

int main()
{
	int i=0, j=0, temp, xchange, n;
	int arr[MAX];
	
	printf("Enter num of elements : ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
	
		printf("Enter Element: \n");
		scanf("%d", &arr[i]);
	}
	
	for (i = 0; i < n - 1; i++)
	{
		xchange = 0;
		for (j = 0; j < (n-1-i); j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				xchange++;
			}
		}
		
		if(xchange==0)
		{
			break;
		}
		
	}
	
	printf("sorted arr is: ");
	
	for (i = 0; i < n; i++)
	{
		printf("Arr elements is: %d\n", arr[i]);
	}
	printf("\n");
	
	return 0;
}
*/

//##### Function Pointer #####
/*

int add(int x, int y);

int main()
{
	int z;
	
	int (*fptr)(int, int);
	fptr = add;
	z=(*fptr)(5,7);
	
	printf("add is : %d",z);
	
	return 0;
}

int add(int x, int y)
{
	int a;
	a = x + y;
	
	return a;
}
*/

//##### Unique string #####
/*

int main()
{
	char str[]= "Balfhgnmopl";
	int i, j, flag;
	
	int len = strlen(str);
	
	for (i = 0; i < len; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			if (str[i] == str[j])
			{
				flag = 1;
				break;
			}
			else
			{
				flag = 0;
			}
		}
		
		if (flag == 1)
		{
			printf(" Not unique ");
			break;
		}
	}
	
	if (flag == 0)
	{ 
		printf(" string unique ");
	}
	
	return 0;
}
*/

//##### Bit Set #####
/*

int main()
{
	int num = 15, bitcheck = 3;
	
	if ((num & (1 << 3)) != 0)
	{
		printf(" bit set ");
	}
	else
	{
		printf(" not set ");
	}
	
	return 0;
}
*/

//##### c program to find the sum of first N numbers which are either multiple of 3 or 5 #####
/*

int main(void)
{
	int a, b, i, n = 50, sum = 0;
	
	for (i = 0; i < n; i++)
	{
		a = i % 3;
		b = i % 5;
		
		if (a == 0 || b == 0)
		{
			printf("num : %d\n", i);
			sum = sum + i;
		}
	}
	
	printf("sum = %d", sum);
	
	return 0;
}
*/

//##### Reverse string without using library function #####
/*

int main()
{
	char str1[] = "Balaji";
	char str2[20];
	int i, j, len;
	
	len = strlen(str1);
	
	for (i = len - 1, j = 0; i >= 0; i--, j++)
	{
		str2[j] = str1[i];
	}
	printf("str2: %s", str2);
	
	return 0;
}
*/

//##### Count words in sentence without using library function #####
/*

int main()
{
    char str[100];
    int i, count = 0;
    
    printf(" Enter the sentence\n ");
    gets(str);
   // scanf("%[^\n]s", &str);  //This scanf store string with white spaces.
   
    for (i = 0; str[i] != '\0'; i++)
    {
    	if (str[i] == ' ')
    	{
    		count++;
    	}
    }
    
    printf("words in sentence are = %d", count + 1);
    
	return 0;
}
*/

//##### reverse num #####
/*

int main()
{
	int rev = 0, rem, num = 123;
	
	while (num > 0)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	
	printf(" rev num = %d", rev);
	
	return 0;
}
*/

//##### macro inside main function #####
//## Exam Question ## 
/*

int main()
{
	#define max 40
	max = 30;
	printf("max : %d", max);
	
	return 0;
}
*/

//################################# Array ###############################################


//## Exam Question Type 1 ##
/*

int main()
{
	int i; 
	int arr[5] = {7};							// 7 stored at index 0
												// output : 
	for (i = 0; i < 5; i++)						// arr[0] = 7
	{											// arr[1] = 0
		printf(" arr[%d] = %d\n", i, arr[i]);  	// arr[2] = 0
	}										   	// arr[3] = 0
										      	// arr[4] = 0
	return 0;							       
}
*/

//## Exam Question Type 2 ##
/*

int main()
{

	int i; 
	int arr[5];
	arr[0] = 7;									// 7 stored at index 0
												// output : 
	for (i = 0; i < 5; i++)						// arr[0] = 7
	{											// arr[1] = 0			Garbage num
		printf(" arr[%d] = %d\n", i, arr[i]);  	// arr[2] = 46			Garbage	num
	}										  	// arr[3] = 0			Garbage	num
										       	// arr[4] = 1216394848	Garbage	num
	return 0;							       
}
*/

//## Exam Question Type 3 ##
/*

int main()
{

	int i; 
	int arr[5];
	arr[4] = 7;									// 7 stored at index 4
												// output : 
	for (i = 0; i < 5; i++)						// arr[0] = 0			Garbage	num
	{											// arr[1] = 0			Garbage num
		printf(" arr[%d] = %d\n", i, arr[i]);  	// arr[2] = 46			Garbage	num
	}										  	// arr[3] = 1216394848	Garbage	num
										       	// arr[4] = 7			
	return 0;							       
}
*/
//###############################################################################################

//##### Reverse string using pointer  #####
/*

int main()
{
	char str1[] = "balaji";
	char *sptr = str1;
	
	char str2[20];
	char *dptr = str2;
	
	char *tempptr;
	tempptr = dptr;   // tempptr is used to store the dptr starting address
	
	int i, j;
	
	int len = strlen(str1);
	
	while (*sptr != '\0')
	{
		sptr++;
	}

	while (len > 0)
	{
	
		*dptr++  = *(--sptr);
		len--;
		//printf("sptr : %c\n", *sptr);         //print sptr character
		//printf("dptr : %c\n", *(--dptr));	  //print dptr character
		
	}
	
	printf("str2 :%s\n", str2);   			 // Output : ijalab
	dptr = tempptr;
	printf("dptr string :%c\n", *dptr++);    // Output : i
	
	return 0;
}

//##### string concat  #####
/*

int main()
{
	char str1[20] = "balaji";
	char str2[20] = "musle";
	
	int i = 0;
	int j = 0;
	
	while (str1[i] != '\0')
	{
		i++;
	}
	while (str2[j] != '\0')
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
	printf("str1 : %s", str1);
	
	return 0;
}
*/

//############################### INBUILT TYPECAST FUNCTIONS IN C ################################

//##### itoa #####
//itoa( ) function converts int to string
/*
 
int main()
{
    int a=54325;
    char buffer[20];
    itoa(a,buffer,2);   // here 2 means binary
    printf("Binary value = %s\n", buffer);
 
    itoa(a,buffer,10);   // here 10 means decimal
    printf("Decimal value = %s\n", buffer);
 
    itoa(a,buffer,16);   // here 16 means Hexadecimal
    printf("Hexadecimal value = %s\n", buffer);
    return 0;
}
*/

//##### ltoa #####
//ltoa( ) function converts long to string
/*

 int main()
{
    long  a=10000000;
    char buffer[50];
    ltoa(a,buffer,2);   // here 2 means binary
    printf("Binary value = %s\n", buffer);
 
    ltoa(a,buffer,10);   // here 10 means decimal
    printf("Decimal value = %s\n", buffer);
 
    ltoa(a,buffer,16);   // here 16 means Hexadecimal
    printf("Hexadecimal value = %s\n", buffer);
    return 0;
}
*/

//##### atoi #####
//atoi( ) function converts string to int
/*

 int main()
{
    char a[10] = "100";
    int value = atoi(a);
    printf("Value = %d\n", value);
    return 0;
}
*/

//##### atof #####
//atof( ) function converts string to float
/*

 int main()
{
    char a[10] = "3.14";
    float pi = atof(a);
    printf("Value of pi = %f\n", pi);
    return 0;
}
*/

//##### atol #####
//atol( ) function converts string to long
/*

 int main()
{
    char a[20] = "100000000000";
    long value = atol(a);
    printf("Value = %ld\n", value);
    return 0;
}
*/
//######################################### End ##################################################

//##### Num Palindrom #####
/*
 
int main()
{
	char buffer[20];
	int len, i, j;
	int flag = 0;
    int num = 5432345;
 
    itoa(num, buffer, 10);   // here 10 means decimal
	
	len = strlen(buffer);

	for (i = len - 1, j = 0; j < len / 2; i--, j++)
	{
		if (buffer[i] == buffer[j])
	 	{			
	 		flag = 1;
	 	}
		else
		{
			flag = 0;
			printf(" Num not palindrom\n");
			break;
		}
	}
	
	if (flag == 1)
	{
		printf(" Num palindrom\n");
	}
   
    return 0;
}
*/

//##### Decimal to Binary #####
/*

int main()
{
	int dec_num = 313;
	int bin_num[1000];
	int j, i = 0;
	
	while (dec_num > 0)
	{
		bin_num[i] = dec_num % 2;
		dec_num = dec_num / 2;
		i++;
	}
	
	for (j = i - 1; j >= 0; j--)
	{
		printf("binary Num[%d] : %d", j, bin_num[j]);
	}
	
	return 0;
}
*/

//##### Enum #####
/*

int main()
{

	enum days
	{
		MON=-1, 
		TUE, 
		WED=6, 
		THU, 
		FRI=6, 
		SAT
	};
	
	printf("MON : %d TUE : %d WED : %d THU : %d FRI : %d SAT : %d\n",
			MON, 	 TUE, 	  WED, 	   THU, 	FRI, 	 SAT);
			
	return 0;
}
*/

//##### '/' and '%' operation #####
/*

int main()
{
	//int a = 10, b = -3;
	//int c = b / a, d = b % a;  //Output : c = 0, d = -3
	
	int a = 3, b = -3;
	int c = a / b, d = a % b;  //Output : c = -1, d = 0
	int c = b / a, d = b % a;  //Output : c = -1, d = 0
	
			
	printf("c :%d\n d :%d", c, d);
	
	// Negative num is mod by any num the answer is same negative num.
	// except negative num is mod by same positive num then answer will be 0. 
	
	return 0;
}
*/

//##### struct #####
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
    
    printf("n : %s\n", e1.n);
    
    return 0;
}
*/

//##### concat two char num into one unsigned short #####
/*

int main()
{
	unsigned char a , b;    
	unsigned short c;      		// Example :
								// a = 20, b = 40
	c = (a * 100 + b);			// Expected Ans. c = 2040
	
	printf("c = %d", c);

	return 0;
}
*/
