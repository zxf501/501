#include <stdio.h>

int main(void)
{ int a,b;
  int r;
  printf("整数a和b的值：");
  scanf("%d%d.\n",&a,&b);
  printf("a+b=%d.\n",a+b);
 
  printf("a-b=%d.\n",a-b);
  
  printf("a*b=%d.\n",a*b);

  printf("a/b=%d.\n",a/b);
 
  printf("a%b=%d.\n",a%b);
  
  printf("(a+b)/2=%d.\n",(a+b)/2);

  printf("平均值=%f.\n\n",(double)(a+b)/2);
 
  printf("半径:");
  scanf("%lf",&r);
  printf("半径为%.3f的圆的面积是%.3f.\n",&r,r*r*3.14);
  return 0;
}
