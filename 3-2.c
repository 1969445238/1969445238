#include<stdio.h>
/*ĳѡ���Ŀ��ʮ����ί��ѡ�ֵĵ÷�Ϊʮ����ί���ֺ��ƽ���֣��Ա��ʵ�����ֹ��ܣ���������ί������10�����������ƽ���֡�*/ 

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
