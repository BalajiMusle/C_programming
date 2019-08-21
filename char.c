#include<stdio.h>
#include<math.h>
 
int main()
{
      int decimal_number, remainder, hexadecimal_number = 0;
      int count = 0;
      printf("Enter a Decimal Number:\t");
      scanf("%d", &decimal_number); 
      while(decimal_number != 0)
      {
            remainder = decimal_number % 16;
            hexadecimal_number = hexadecimal_number + remainder * pow(10, count);
            decimal_number = decimal_number / 16;
            count++;
      }
      printf("\nHexadecimal Equivalent:\t%d\n", hexadecimal_number);
      return 0;
}

