#include<stdio.h>
/*
8-2��0��ʼ�����n��������ż����
ע��n��ֵ�Ӽ������롣
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
