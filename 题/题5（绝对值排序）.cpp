#include<stdio.h>
int fabs(int a){
	int b;
	if(a>0) b=a;
	else b=-a;
	return b;
}

int main(void){
	int i,j,n;
	int v[100];
	int temp;
	printf("������һ��������");
	do{
		scanf("%d",&n);
		if(n>100)  printf("������һ��С��100��������"); 
	} while(n>100);
	v[0]=n;
	printf("��������%d��������\n",n);
	for(i=1;i<=n;i++){
	   scanf("%d",&v[i]);
	}
	for(i=n;i>0;i--){
		for(j=n-1;j>0;j--){
			if(fabs(v[i])>fabs(v[j]))  
			temp=v[i];
			v[i]=v[j];
			v[j]=temp;	
	}
	}
	for(i=0;i<n+1;i++){
		printf("%d",v[i]);
		printf(" ");
	}
	return 0;
} 
