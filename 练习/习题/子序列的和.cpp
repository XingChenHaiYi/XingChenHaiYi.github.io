//��������������n��m��10^6��
//���  1/n^2 + 1/(n+1)^2+����+1/m^2������5λС������������������ݣ�
//�������Ϊn��m��0����ʾ�����������塣
//�������룺
//2 4
//65536 655360
//0 0
//���������
//Case 1: 0.42361
//Case 2: 0.00001
#include <stdio.h>
#include <math.h>
int main()
{
	int n,m;
	int a;
	long long b;//������ 65536 655360��b�ᳬ����Χ��Ҫlonglong  ������1.0�ֱ�������Σ� 
	double c;
	double sum;
	while(scanf("%d %d",&n,&m)){
		sum = 0;
	    if(m==0&&n==0)break;
	    for(a = n;a<=m;a++){
		    b = pow(a,2);
		    c = 1.0/b;//������һ��Ҫע��1.0�� 
		    sum+=c;
	    }
	    printf("%.5lf\n",sum);
    }
	return 0;
}
