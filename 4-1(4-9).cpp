
#include <stdio.h>
 
int main(void)
{
	int a, b=1;
	
	printf("��������");
	scanf("%d",&a);
	
	while(a >= b){
		if(b%2)
			putchar('+');
		else
			putchar('-');
		b++;
	}
	
	return 0;
 } 

