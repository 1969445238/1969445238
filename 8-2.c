#include<stdio.h>
/*
8-2从0开始，输出n个连续的偶数。
注：n的值从键盘输入。
*/

int main()
{
    int n , i = 0;
    scanf("%d",&n);

    for(; n > 0 ; i++,n--)
    {

        printf("%d\n",i*2);
    }

    return 0;
}
