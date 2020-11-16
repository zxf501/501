#include<stdio.h>

int main (void){
	int a,b;
	int i;
	for(a=2;a<=100;a++){
		for(i=2;i<=a-1;i++){
			if(a%i==0)  break;
			else ;
		}
			if(i>=a) printf("%d\n",a);
			else ;
	}
}
