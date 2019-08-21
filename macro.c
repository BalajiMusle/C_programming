#include<stdio.h>

void function()
{
	printf("counter in function=%d\n",__COUNTER__);
}
int main()
{
	printf("func=%s\n",__func__);
	printf("counter=%d\n",__COUNTER__);
	function();
	printf("file=%s\n",__FILE__);
	printf("counter=%d\n",__COUNTER__);
	
	printf("line=%d\n",__LINE__);
	
		printf("date=%s\n",__DATE__);
		
	printf("counter=%d\n",__COUNTER__);
	
	return 0;
}
