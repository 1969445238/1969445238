#include<stdio.h>
/*5-2�Ӽ�������һ�����ݣ���0�������룬�����ݺ͡�*/

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
