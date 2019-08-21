#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define Max_Num   100
int secret_num;

void init_num_generator(void);
void choose_new_secret_num(void);
void read_guesses(void);

int main()
{
	char command;
	printf("Guess the secret number bet 1 and %d\n", Max_Num);
	init_num_generator();
	
	do
	{
		choose_new_secret_num();
		printf("new num has been choosen .\n");
		read_guesses();
		printf("plat again ? (Y/N)");
		scanf( "%c", &command);
		printf("\n");
	}while (command == 'Y' || command == 'Y');
	
	return 0;
}

void init_num_generator(void)
{
	srand((unsigned) time(NULL));
}

void choose_new_secret_num(void)
{
	secret_num = rand()  %  Max_Num + 1;
}
void read_guesses(void)
{
	int guess, num_guesses=0;
	for(;;)
	{
		num_guesses++;
		printf("Enter Guess : ");
		scanf("%d",& guess);
		if(guess == secret_num)
		{
			printf(" you won in %d guesses !\n\n",num_guesses);
			return ;
		}
		else if(guess<secret_num)
		{
			printf("too low ! try again ");
		}
		else
		{
			printf("too high ! try again ");
		}
	}
}

