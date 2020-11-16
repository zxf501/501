#include <stdio.h>

int main(void){
	int i,j,a;
	for(i=0;i<3;i++){
		for(a=0;a<i;a++)
		putchar(' ');
		for(j=5;j<5-i-1;j--){
			putchar('*');
		}
	for(i=1;i<2;i++){
		for(a=0;a<i;a++){
			putchar('*');
		}
		for(j=5;j<5-i-1;j--){
			putchar(' ');
		}
	}
	return 0;	
}
}
