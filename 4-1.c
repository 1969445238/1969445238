#include<stdio.h>
/*�Ӽ�������һ���ַ����ж����Ƿ���Ӣ����ĸ��*/

int main()
{
	char a;
	scanf("%c",&a);
	if(a>='a'&&a<='z'||a>='A'&&a<='Z')
	{
		printf("%c��Ӣ����ĸ\n",a);
	}
	else
	{
		printf("%c����Ӣ����ĸ\n",a);
	}
	
	return 0;
}
