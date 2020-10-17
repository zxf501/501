#include <stdio.h>

int main(void)
{ int a,b,c,min;
  printf("整数a");
  scanf("%d",&a);
  printf("整数b"); 
  scanf("%d",&b);
  printf("整数c");
  scanf("%d",&c);
  
  min=a;
  if (min>b)  min=b;
  if (min>c)  min=c;
  printf("三个整数中的最小值为：%d.\n",min);
  
  return 0;
}
