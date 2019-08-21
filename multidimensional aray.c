#include<stdio.h>
#define N  10

int main()
{
	double ident[N][N];
	int row, col;
	
	for(row=0; row<N; row++)
	{
			for(col=0; col<N; col++)
			{
				if(row==col)
				{
					printf("Balaji");
					ident[row][col]=1;
						
				}
			
				else
				{
			
					ident[row][col]=0;
				
					printf("arr[index]=%d\n",ident[row][col]);
				}
			}
	}
				
	

	return 0;
}
