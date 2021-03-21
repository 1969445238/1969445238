#include<stdio.h>
/*输入直角三角形的两直角边长，求直角三角形的面积。*/

int main()
{
	int a,b,c,s;
	scanf("%d %d %d",&a,&b,&c);
	
	if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
	{
		s=superficial(a,b,c);
		printf("s=%d",s);
	}
	else
	{
		printf("不满足条件\n");
	}
	
	return 0;
	
} 

int superficial(int x,int y,int z)
{
	int t,count;
	if(x>y)
	{
		t=x;x=y;y=t;
	}
	if(x>z)
	{
		t=x;x=z;z=t;
	}
	if(y>z)
	{
		t=y;y=z;z=t;
	}
	count = (x*y)/2;
	return count;
}
