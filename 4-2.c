#include<stdio.h>
/*4-2编写程序，要求从键盘输入两个数，然后输出两个整型数中的最大值。*/

int main()
{
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	
	if(num1>num2)
	{
		printf("max=%d\n",num1);
	}
	else if(num1<num2)
	{
		printf("max=%d\n",num2);
	}
	
	
	
	return 0;
}
