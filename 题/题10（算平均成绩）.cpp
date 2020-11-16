#include<stdio.h>

int main(void){
	int stu,num;
	int i,j;
	int k=0;
	double v[51][6]={0};
	double p[6]={0};
	double f[51]={0};
	printf("请输入学生数和课程数：");
	scanf("%d %d\n",&stu,&num);
	for(i=0;i<stu;i++){
			printf("请输入第%d个学生%d门课程的分数：",i+1,num);
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
	printf("%d名同学的各科成绩为：",stu);
	for(i=0;i<stu;i++){
		printf("%.2f",(double)f[i]/stu);
		putchar('  ');
	}putchar('\n');
	printf("%d科的平均成绩为：",num);
	for(j=0;j<num;j++){
		printf("%.2f",(double)p[j]/num);
		putchar('  ');
	}putchar('\n');
	printf("%d科均大于平均成绩的学生有%d名",num,k);
	 
	 return 0;
	
}
