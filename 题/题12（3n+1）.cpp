#include <stdio.h>

int main(void)
{ int n;
  int i;
  printf("请输入一个整数：");
  scanf("%d",&n);
  do{
  	if(n%2==0){
  		n/=2;
  		i++;
  	}
  	else {
  		n=(n*3+1)/2;
  		i++;
	  }
	  }while(n!=1);
	  printf("一共进行了%d次",i);
	  return 0;
}
