#include <stdio.h>

int main(void){
	int n;
	int i;
	int j=1;
	int v[1000];
	printf("������һ����:");
	scanf("%d",&n);
	printf("��������%d����",n);
	for(i=0;i<n;i++){
		scanf("%d",&v[i]);
	}
	printf("\n");
	for(i=0;i<n;i++){
		if(v[i]%2!=0) {
		 j=v[i]*j;}
	}
	if(v[i]=v[i-1])
	if(n%2!=0)  j=j*n;
	printf("�����ĳ˻�Ϊ%d",j);
	return 0;
}																	
