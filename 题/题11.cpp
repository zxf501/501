#include <stdio.h>

int main(void)
{ int m,n; 
  int i,j;
  int v[10001]={0};
  int temp;
  printf("请输入镇上人数和要寻找的大富翁人数："); 
  do{
  scanf("%d,%d\n",&m,&n);
  if(m<0||m>10000||n<0||n>10)
  printf("您输入的数值不符合要求，请重新输入：");
  else ;}
  while(m<0||m>10000||n<0||n>10) ;
  printf("请输入小镇人的财产数：");
  for(i=0;i<m;i++){
  	scanf("%d",&v[i]); 
  }
  for(i=0;i<n;i++){
  	for(j=i+1;j<n+1;j++){
  		if(v[j]>v[i]){
  			temp=v[i];
  			v[i]=v[j];
  			v[j]=temp;
		  }
	  }
  }

  printf("该小镇的富翁财产数为："); 
  for(i=0;i<m;i++){
  	printf("%d",v[i]);
  	putchar('  ');
  }
  return 0; 
}
