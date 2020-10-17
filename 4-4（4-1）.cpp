#include <stdio.h>
 
int main(void)
{
	int a, retry;
	
	do {
		printf("请输入一个数：");	scanf("%d",&a);
		
		if(a == 0)	puts("该整数为0");
		if(a > 0)	puts("该整数为正数");
		if(a < 0)	puts("该整数为负数");
		
		printf("请问是否继续---Y/1---N/0:");	scanf("%d",&retry);
		
	} while(retry == 1);
	
	puts("谢谢使用！");
	
	return 0;
 } 

