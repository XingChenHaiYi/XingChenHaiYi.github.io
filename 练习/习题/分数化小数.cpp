//����������a��b��c�����a/b��С����ʽ����ȷ��С�����cλ��a��b��10^6��c��100��
//��������������ݣ��������Ϊa��b��c��0��
//�������룺
//1 6 4
//0 0 0
//���������
//Case 1: 0.1667
#include <stdio.h>
int main()
{
	int a,c;
	long long b;
	while(scanf("%d %d %d",&a,&b,&c)){
		if(a == 0 && b == 0 && c ==0) break;
		double d;
		d = a*1.0/b;
		printf("%.*lf",c,d);//����cλС�� 
	}
	return 0;
}
