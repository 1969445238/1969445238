#include<stdio.h>
/*
8-1要求从键盘输入学生的成绩，
判断学生的成绩是否及格并输出。
*/

int main()
{
    int x;
    scanf("%d",&x);

    if(x >= 60)
    {
        printf("true\n");
    }else
    {
        printf("false\n");
    }


    return 0;
}
