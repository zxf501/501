#include <stdio.h>

int main(void)
{ int m,n; 
  int i,j;
  int v[10001]={0};
  int temp;
  printf("����������������ҪѰ�ҵĴ���������"); 
  do{
  scanf("%d,%d\n",&m,&n);
  if(m<0||m>10000||n<0||n>10)
  printf("���������ֵ������Ҫ�����������룺");
  else ;}
  while(m<0||m>10000||n<0||n>10) ;
  printf("������С���˵ĲƲ�����");
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

  printf("��С��ĸ��̲Ʋ���Ϊ��"); 
  for(i=0;i<m;i++){
  	printf("%d",v[i]);
  	putchar('  ');
  }
  return 0; 
}
