#include<stdio.h>
/*输入一个四位数，编写程序使其逆序生成一个新的四位数输出。
     例如一个数8765，逆序后生产一个新的四位数5678并输出
*/

int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	printf("%d%d%d%d\n",d,c,b,a);
	
	return 0;
}
