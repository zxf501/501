
#include <stdio.h>
 
int main(void)
{
	int a;
	
	scanf("%d",&a);
	
	if(a == 0)
		puts("a为0");
	else if(a < 0 )
		puts("a为负数");
	else if(a > 0 )
		puts("a为正数");

        return 0;
 } 

