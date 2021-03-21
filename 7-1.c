#include<stdio.h>
/*
7-1从键盘上输入一个小写字母，
将其转化为大写字母并输出。
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
        printf("非合法字符\n");
    }

    return 0;
}
