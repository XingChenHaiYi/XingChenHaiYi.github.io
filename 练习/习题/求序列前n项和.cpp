//Ҫ�����2/1+3/2+5/3+������ǰn��ͣ�ÿһ�������ǰһ��������ĸ�ĺͣ���ĸ��ǰһ����ӡ����ս��Ϊ����С�������λ��������˫���ȷ�Χ 
#include <stdio.h>
int main()
{
	int n,z;
	double a,b,c,d,e;
	//ab���int,��n�ܴ�a,b�ᳬ��int�ķ�Χ����ɸ���
	//double ��Χ��int�󣬵���n����2k��ab��Ϊinf��Խ�� ��;d��Ϊnan(��Ч���֣� 
	a=2;
	b=1;
	d=0;
	printf("��������n\n");
	scanf("%d",&n);
	for(z=0;z<n;z++){
		c=a/b;
		e=b;
		//��e�洢b 
		b=a;
		a=a+e;
		d=d+c;
	}
	printf("%.2lf",d);
	//.2ʹ�䱣����λС�� 
	return 0;
} 
