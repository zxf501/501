#include <stdio.h>

int main(void)
{ int a,b;
  puts("请输入两个整数。");
  printf("整数A：\n",a);
  scanf ("%d",&a);
  printf("整数B：\n",b);
  scanf("%d",&b);
  if (b%a)
  puts("b不是a的约数");
  else
  puts("b是a的约数"); 
  return 0;
}
