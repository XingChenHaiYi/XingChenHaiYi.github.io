//����������߳��ֲ�һ�µ�����ʱ�����Զ�ת���ɽϴ����ͣ�������ķ�Χ����
//char<double<short<int<long<long long;   int<float<double
//��printf���κ�С��int�����ͻᱻת����int��float�ᱻת��double��scanf���ᣬҪ����short����Ҫ%hd 
#include <stdio.h>
int main()
{
    //ǿ������ת��  �����ͣ�ֵ  �磨int��10.2  ��double 10.2 ǿ��ת��Ϊint����short��32���� int 32ת��short
	//����Ҫע�ⰲȫ�ԣ�С�ı��������ܱ�ʾ��ı������磨short��32768����
	printf("%d\n",(short)32768);//���-32768 short���Ϊ32767
	printf("%d\n",(char)32768); //���0   Խ�� �����
	int i = 32768;
	short s = (short)i;
	printf("%d\n",i); //���32768��ǿ������ת��ֻ���ñ���i��ֵȥ�����һ���µ�short��������ı�i
	printf("%hd\n",s); //���-32768 
	double a = 1.0;
	double b = 2.0;
	int c = (int)a/b;//��һ������a/b���ת��Ϊint ������aת��Ϊint���ٳ���b����Ȼa��int����b��double�����Խ������double������c 
	printf("%d\n",c);//���0
	printf("%lf\n",c); //���0.0000 
	//ǿ������ת�����ȼ�������������
	int e = 5;
	int f = 6;
	double g = (double)(e/f);//0.0000,����ǣ�double��e/f�������0.833333�� 
	printf("%lf",g); 
	return 0;	
} 
