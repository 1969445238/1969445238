#include<stdio.h>
/*输入2个整数 num1 和 num2，计算并输出它们的和、差、积、商与余数。*/

int main()
{
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	
	printf("+=%d\n",num1+num2);
	printf("-=%d\n",num1-num2);
	printf("*=%d\n",num1*num2);
	printf("/%=%d...%d\n",num1/num2,num1%num2);
	
	
	
	return 0;
}
