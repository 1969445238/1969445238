#include<stdio.h>
/*某选秀节目有十个评委，选手的得分为十个评委评分后的平均分，试编程实现评分功能，即输入评委给出的10个分数，输出平均分。*/ 

int main()
{
	int i,a[10],sum=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		sum +=a[i];
	}
	printf("average=%d\n",sum/10);
	
	
	
	
	return 0;
}
