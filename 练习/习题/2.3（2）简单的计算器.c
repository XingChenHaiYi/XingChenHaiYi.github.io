#include <stdio.h>
#include <math.h> 
int main()
{
	float date1,date2;
	char op;
	scanf("%f %c%f",&date1,&op,&date2);
	switch(op)
	{
		case '+':printf("%lf + %lf = %lf\n",date1,date2,date1+date2);
		break;
		case '-':printf("%lf - %lf = %lf\n",date1,date2,date1-date2);
		break;
		case '*':printf("%lf * %lf = %lf\n",date1,date2,date1*date2);
		break;
		case '/':if(fabs(date2)<=1e-7)//�Ƚ�ʵ�ͱ���date2��0
		//���ڸ������ľ������⣬floatȡֵ������ȡ0�����Բ�����if(date2==0); 
		{
			printf("��ĸΪ0������"); 
		} else {
			printf("%lf / %lf = %lf\n",date1,date2,date1/date2);
		}
		break;
		default:printf("�������������");
	}
	return 0;
}
