#include<stdio.h>
/*
6-2���һ�γ����书���ǣ�
�Ӽ������������ɸ�ѧ���ĳɼ���
ͳ�Ʋ������߳ɼ�����ͳɼ���
�����븺��ʱ�������롣
*/

void main ()
{
    float  x,amax,amin;		//�����������������ͱ���
    scanf("%f",&x); 		//scanf���룬����ȷ����1��Ϊ��ʽ���ţ���2��������
    amax = x;
    amin = x;
    while ( x>=0 )			//������Ŀ�������ж�ѭ������
    {
        if( x>amax) amax=x;	// >=��>������,���ڴ�ֻ�о�һ�֣��ж�x��amax��С
        if( x<amin) amin=x;	//�ж�x��amin��С
        scanf("%f",&x);
    }
    printf("\namax=%f\namin=%f\n",amax,amin);
}
