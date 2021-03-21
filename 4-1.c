#include<stdio.h>
/*从键盘输入一个字符，判断它是否是英文字母。*/

int main()
{
	char a;
	scanf("%c",&a);
	if(a>='a'&&a<='z'||a>='A'&&a<='Z')
	{
		printf("%c是英文字母\n",a);
	}
	else
	{
		printf("%c不是英文字母\n",a);
	}
	
	return 0;
}
