#include <stdio.h>

int main(void)
{ int a,b;
  int r;
  printf("����a��b��ֵ��");
  scanf("%d%d.\n",&a,&b);
  printf("a+b=%d.\n",a+b);
 
  printf("a-b=%d.\n",a-b);
  
  printf("a*b=%d.\n",a*b);

  printf("a/b=%d.\n",a/b);
 
  printf("a%b=%d.\n",a%b);
  
  printf("(a+b)/2=%d.\n",(a+b)/2);

  printf("ƽ��ֵ=%f.\n\n",(double)(a+b)/2);
 
  printf("�뾶:");
  scanf("%lf",&r);
  printf("�뾶Ϊ%.3f��Բ�������%.3f.\n",&r,r*r*3.14);
  return 0;
}
