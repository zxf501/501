#include <stdio.h>

int main(void)
{ int n;
  int i;
  printf("������һ��������");
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
	  printf("һ��������%d��",i);
	  return 0;
}
