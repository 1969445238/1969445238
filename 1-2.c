#include<stdio.h>

/*������Ȼ������1��2��3������n�ĺͣ�n��ֵ�ڳ���ִ��ʱ����*/

int main()
{
	int i,n,sum=0;
	scanf("%d",&n);
	
	for(i = 1; i <= n; i++)
	{
		sum +=i;
	}
	printf("sum=%d\n",sum);
	return 0;
}
