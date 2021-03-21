#include<stdio.h>

/*计算自然数序列1，2，3，…，n的和，n的值在程序执行时输入*/

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
