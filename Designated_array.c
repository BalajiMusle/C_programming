#include<stdio.h>

int main()
{
	int i;
	//int array[10] = {[5] = 5, [2] = 2, [7] = 7, [1] = 1, [9] = 9};    /* Example 1 */
	int array[10] = {5, 1, 9, [4] = 3, 7, 2, [8] = 6};					/* Example 2 */
	
	for (i = 0; i < 10; i++)
	{
		printf("Array[%d] = %d\n",i, array[i]);
	}
}
