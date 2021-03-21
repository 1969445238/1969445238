#include<stdio.h>
/*计算1~n中的奇数之和及偶数之和，n的值在程序执行时输入*/

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
