//ˮ�ɻ�����Narcissistic number��Ҳ����Ϊ����ȫ���ֲ�������pluperfect digital invariant, PPDI����
//������������������ķ˹׳����ķ˹��������Armstrong number����
//ˮ�ɻ�����ָһ�� n λ����n��3 ��������ÿ��λ�ϵ����ֵ� n ����֮�͵������������磺1^3 + 5^3+ 3^3 = 153����
#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,d;
	printf("����������3<=a<=7\n");
	scanf("%d",&a);
    b=1;
    c=1;
    while(b<a){
    	b++;
    	c*=10;
	}
	d=c;
	while(d<10*c){
		int e = d;//��ʾ�����λ������ѭ����100��ʼ���Դ����� 
		//��¼d
		int f = 0;
		int sum=0;
		do{
			int f = e%10;
			//f��e�ĸ�λ
			e/=10;
            int g = pow(f,a) ;
            sum +=g;
            //��ÿһλ��n�η�֮�� 
		} while(e>0);
		if(sum==d){
			printf("%d\n",d);
		}
		d++;
	}
	
	return 0;
}
