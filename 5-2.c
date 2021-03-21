#include<stdio.h>
/*5-2从键盘输入一组数据，以0结束输入，求数据和。*/

int main()
{


	int i,sum=0;
	printf("enter a number:");
	loop:scanf("%d",&i);
	if(i==0)
	 goto printf_s;
	else 
	sum+=i;
	goto loop;
	printf_s:printf("the total is %d\n",sum);








	return 0;
	
}
