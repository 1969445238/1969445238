#include<stdio.h>
/*����1~n�е�����֮�ͼ�ż��֮�ͣ�n��ֵ�ڳ���ִ��ʱ����*/

int main()
{
	int i,n,sum1=0,sum2=0;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			sum2 +=i;
		}else
		{
			sum1 +=i;
		} 
	}
	
	printf("sum1=%d,sum2=%d\n",sum1,sum2);	
	
	
	return 0;
}
