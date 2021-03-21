#include<stdio.h>
/*
6-2设计一段程序，其功能是：
从键盘上输入若干个学生的成绩，
统计并输出最高成绩和最低成绩，
当输入负数时结束输入。
*/

void main ()
{
    float  x,amax,amin;		//定义了三个单精度型变量
    scanf("%f",&x); 		//scanf输入，所以确定（1）为格式符号，（2）变量名
    amax = x;
    amin = x;
    while ( x>=0 )			//看懂题目条件，判断循环条件
    {
        if( x>amax) amax=x;	// >=或>都可以,我在此只列举一种，判断x与amax大小
        if( x<amin) amin=x;	//判断x与amin大小
        scanf("%f",&x);
    }
    printf("\namax=%f\namin=%f\n",amax,amin);
}
