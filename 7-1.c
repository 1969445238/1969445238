#include<stdio.h>
/*
7-1�Ӽ���������һ��Сд��ĸ��
����ת��Ϊ��д��ĸ�������
*/

int main()
{
    char a;
    scanf("%c",&a);
    if(a >= 'a' && a <= 'z')
    {
        a -= 32;
        printf("%c\n",a);
    }else
    {
        printf("�ǺϷ��ַ�\n");
    }

    return 0;
}
