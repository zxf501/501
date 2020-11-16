#include <stdio.h>

int main(void){
	int i,j,a;
	for(i=0;i<3;i++){
		for(a=0;a<i;a++)
		putchar(' ');
		for(j=0;j<5-i*2;j++){
			putchar('*');
		}printf("\n");
		}
	for(i=0;i<2;i++){
			for(j=2;j>i+1;j--){
			putchar(' ');}
		for(a=0;a<3+i*2;a++){
			putchar('*');
		}
	printf("\n");
		}
	
	return 0;
	
	
	
}
