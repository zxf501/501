#include<stdio.h>
double max_of(double v[],int n){
	double max=v[1];
	int i;
	for(i=1;i<=n;i++){
		if(max<v[i]){
			max=v[i];
		}
	}	return max;
} 
double min_of(double v[],int n){
	double min=v[1];
	int i;
	for(i=1;i<=n;i++){
		if(min>v[i]){
			min=v[i];
		}
	}	return min;	
}

int main(void){
	int i;
	int m,n;
	double x,y;
	double max1,max2,min1,min2;
	double v1[101]={0};
	double v2[101]={0};
	double sum1=0, sum2=0;
	printf("�������һ��ѡ�ֵ���ί����:");
	do{
	scanf("%d",&m);
	if(m<2||m>100)
	printf("\n�����������һ��ѡ����ί��������");
	}while(m<2||m>100);
	printf("������%d����ί�Ĵ�֣�",m); 
	for(i=1;i<=m;i++){
		scanf("%lf",&v1[i]);
		sum1+=v1[i];
	}
	max1=max_of(v1,m);
	min1=min_of(v1,m);
	x=sum1-max1-min1;
		printf("������ڶ���ѡ�ֵ���ί����:");
	do{
	scanf("%d",&n);
	if(n<2||n>100)
	printf("\n������ڶ���ѡ�ָ���ί��������");
	}
	while(n<2||n>100) ;
		printf("������%d����ί�Ĵ�֣�",n); 
	for(i=1;i<=n;i++){
		scanf("%lf",&v2[i]);
		sum2+=v2[i];
	}
	max2=max_of(v2,n);
	min2=min_of(v2,n);
	y=sum2-max2-min2;
	printf("��һ��ѡ�ֵ�ƽ������Ϊ��%.2f",(double)x/(m-2));
	printf("�ڶ���ѡ�ֵ�ƽ������Ϊ��%.2f",(double)y/(n-2));
	return 0;
}
