#include <stdio.h>
 
int main(void)
{
	int a, retry;
	
	do {
		printf("������һ������");	scanf("%d",&a);
		
		if(a == 0)	puts("������Ϊ0");
		if(a > 0)	puts("������Ϊ����");
		if(a < 0)	puts("������Ϊ����");
		
		printf("�����Ƿ����---Y/1---N/0:");	scanf("%d",&retry);
		
	} while(retry == 1);
	
	puts("ллʹ�ã�");
	
	return 0;
 } 

