/* Example using va_start by TechOnTheNet.com */

#include <stdio.h>
#include <stdarg.h>

int add(int n, ...)
{
    /* Define temporary variables */
    va_list list;
    int total,i;

    /* Initialize total */
    total = 0;

    /* Set where the variable length part of the argument list ends */
    va_start(list, n);

    /* Loop through each argument adding the int values */
    for (i=0; i < n; i++)
        total = total + va_arg(list, int);

    /* Clean up */
    va_end(list);

    /* Return the calculated total */
    return total;
}

int main(int argc, const char * argv[])
{
    /* Define temporary variables */
    int value1, value2, value3;
    int result;

    value1 = 3;
    value2 = 4;
    value3 = 5;

    /* Call the add function  */
    result = add(4, value1, value2, value3);

    /* Display the results of the additon */
    printf("The sum of %d, %d and %d is %d\n", value1, value2, value3, result);

    return 0;
}
