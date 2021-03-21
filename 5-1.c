#include<stdio.h>
#define Pi 3.14
/*5-1输入半径，编程计算相应的圆的周长、圆的面积和圆球的体积。
用函数scanf输入数据，输入数据要有提示语，
输出计算结果中要有文字说明，计算结果取小数点后2位。*/

int main()
{
	float r;
	printf("请输入半径：");
	scanf("%f",&r);
	
	printf("%.2f圆的周长：%.2f,",r,2*Pi*r);
	printf("面积：%.2f,",Pi*r*r);
	printf("体积：%.2f\n",(4*Pi*r*r*r)/3);
	
	
	
	
	return 0;
}
