#include<stdio.h>

int main(void){
	int stu,num;
	int i,j;
	int k=0;
	double v[51][6]={0};
	double p[6]={0};
	double f[51]={0};
	printf("������ѧ�����Ϳγ�����");
	scanf("%d %d\n",&stu,&num);
	for(i=0;i<stu;i++){
			printf("�������%d��ѧ��%d�ſγ̵ķ�����",i+1,num);
		for(j=0;j<num;j++){
			scanf("%lf",&v[i][j]);
		}
		putchar('\n');
	}
	for(i=0;i<stu;i++){
		for(j=0;j<num;j++)
		f[i]+=v[i][j];
	}
	for(j=0;j<num;j++){
		for(i=0;i<stu;i++){
			p[j]+=v[i][j];
		}
	}
	for(i=0;i<stu;i++){
		for(j=0;j<num;j++){
			if(j==num-1) k++; 
			if(v[i][1]>=(double)p[j]/stu) continue;
			else break;
		}
	}
	printf("%d��ͬѧ�ĸ��Ƴɼ�Ϊ��",stu);
	for(i=0;i<stu;i++){
		printf("%.2f",(double)f[i]/stu);
		putchar('  ');
	}putchar('\n');
	printf("%d�Ƶ�ƽ���ɼ�Ϊ��",num);
	for(j=0;j<num;j++){
		printf("%.2f",(double)p[j]/num);
		putchar('  ');
	}putchar('\n');
	printf("%d�ƾ�����ƽ���ɼ���ѧ����%d��",num,k);
	 
	 return 0;
	
}
