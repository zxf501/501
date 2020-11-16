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
	printf("请输入第一个选手的评委人数:");
	do{
	scanf("%d",&m);
	if(m<2||m>100)
	printf("\n请重新输入第一个选手评委的人数：");
	}while(m<2||m>100);
	printf("请输入%d个评委的打分：",m); 
	for(i=1;i<=m;i++){
		scanf("%lf",&v1[i]);
		sum1+=v1[i];
	}
	max1=max_of(v1,m);
	min1=min_of(v1,m);
	x=sum1-max1-min1;
		printf("请输入第二个选手的评委人数:");
	do{
	scanf("%d",&n);
	if(n<2||n>100)
	printf("\n请输入第二个选手各评委的人数：");
	}
	while(n<2||n>100) ;
		printf("请输入%d个评委的打分：",n); 
	for(i=1;i<=n;i++){
		scanf("%lf",&v2[i]);
		sum2+=v2[i];
	}
	max2=max_of(v2,n);
	min2=min_of(v2,n);
	y=sum2-max2-min2;
	printf("第一个选手的平均评分为：%.2f",(double)x/(m-2));
	printf("第二个选手的平均评分为：%.2f",(double)y/(n-2));
	return 0;
}
