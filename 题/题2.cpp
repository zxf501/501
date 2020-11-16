#include<stdio.h>

int main(void){
 int a,b,c;	
 printf("请输入两门课程的成绩："); 
 scanf("%d %d",&a,&b);
 if (0<a<100&&0<b<100){
 c=a/60+b/60;
 switch(c){
 	case 0:  
	case 1:         printf("it is not pass");    break;
 	case 2 : printf("it is pass");        break;
 }}
 else printf("it is error");
 return 0;
}
