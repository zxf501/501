#include<stdio.h>

int main(void){
int i,j;
 for(i=0;i<5;i++){
 	for(j=0;j<i+1;j++){
 		putchar('*');
	 }
	 printf("\n");
 }
 for(i=0;i<5;i++){
 	for(j=5;j>i+1;j--){
 		putchar(' ');
	 }
	 for(j=0;j<i+1;j++){
	 	putchar('*');
	 }
	 printf("\n");
 }
 return 0;
} 
