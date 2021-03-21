#include<stdio.h>
/*
7-2编写一个程序求出100~300之间满足
这样条件的三位数：它们三个数字之积
为30，三个数字之和为10。
*/

int main()
{
    int x , y ,z;
    int i;

    for(i = 100 ; i <= 300 ; i++)
    {
        x = i / 100 ;
        y = ( i / 10 ) % 10 ;
        z = i % 10 ;
        if(x*y*z == 30 && x + y + z == 10)
            printf("%d\n",i);
    }

    return 0;
}
