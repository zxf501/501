#include <stdio.h>

int main(void)
{ int a,b;
  puts("请输入两个整数。");
  printf("整数a:\n");
  scanf("%d",&a);
  printf("整数b:\n");
  scanf("%d",&b);
  if (a==b)
  puts("a与b相等");
  else if (a>b)
  puts("a大于b");
  else 
  puts("a小于b"); 
  
 
  return 0;
}
