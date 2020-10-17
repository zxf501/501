#include <stdio.h>

int main(void)
{ int a;
  printf("请输入一个整数");
  scanf("%d",&a);
  if (a>0)
     if (a%2)
     puts("该整数为奇数");
	 else
	 puts("该整数为偶数");
  else 	  
    puts("您输入的不是正数。\a\n");
  return 0;
}
