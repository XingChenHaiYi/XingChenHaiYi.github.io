#include <stdio.h>
 void cheer(int i)  // ��������void����Ϊ�������κζ��� 
{
	printf("cheer %d\n",i);
}
int main()//���ܳ�������int  main 
{
    cheer(2);//��Ϊ����cheer����   �����cheer�� 
    cheer(2.4);//   ���Ͳ�ͬ������ʱ��warming�����еĲ��ᣩ��Ϊ������double��int��ת������2.4�䵽2��������ʧ   �����2
	 
    return 0;
}
