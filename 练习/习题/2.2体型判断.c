#include <stdio.h>
#include <math.h>
int main()
{
	double h,w,t;//�ֱ�Ϊ��ߣ�m�������أ�kg��,��ָ����
	double h2;//�м���� ���ڴ��� h ��ƽ��
    printf("�ֱ������������\n");
	scanf("%lf %lf",&h,&w);
	h2=pow(h,2);
	t = w/h2;
	if(t<18) printf("������");
	else if(t>=18&&t<25) printf("��������");
	else if(t>=25&&t<27) printf("��������");
	else if(t>=27) printf("����");
	return 0;
}
