// C program to print all permutations with duplicates allowed
#include <stdio.h>
#include <string.h>
 
/* Function to swap values at two pointers */
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
 
/* Function to print permutations of num
This function takes three parameters:
1. num
2. Starting index of the num
3. Ending index of the num. */
int permute(char *num, int start_index, int end_index)
{
	int i;
	static int num_of_combinations;
	
	if (start_index == end_index)
	{
	    printf("%s\n", num);
	    num_of_combinations++;
	}
	else
	{
	    for (i = start_index; i <= end_index; i++)
	    {
	        swap((num + start_index), (num + i));
	        permute(num, start_index+1, end_index);
	        swap((num + start_index), (num + i)); //backtrack
	       
	    }
	}
	
	return num_of_combinations;
}
 
int main()
{
    char num[] = "1234";
    int num_of_combinations;
	int num_len = strlen(num);

    num_of_combinations = permute(num, 0, num_len - 1);
    printf("num_of_combinations : %d\n", num_of_combinations);
    
	return 0;
}
