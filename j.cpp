#include <stdio.h>

int main(void)
{ int a;
  printf("������һ������");
  scanf("%d",&a);
  if (a>0)
     if (a%2)
     puts("������Ϊ����");
	 else
	 puts("������Ϊż��");
  else 	  
    puts("������Ĳ���������\a\n");
  return 0;
}
