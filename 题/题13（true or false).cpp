#include <stdio.h>

int main(void)
{ int a,b,c;
  int v[1000][3]={0};
  int num;
  int i,j;
  int x,y;
  printf("请输入用例个数：");
  scanf("%d",&num);
  for(i=0;i<num;i++){
  	for(j=0;j<3;j++){
  	scanf("%d",&v[i][j]);
  }
}
  for(i=0;i<num;i++){
  	a=v[i][0];
  	b=v[i][1];
  	c=v[i][2];
  	if(a+b>c){
  		printf("Case #%d: true\n",i);
}
   else printf("Case #%d: false\n",i);
  	
  }
  return 0;
}
