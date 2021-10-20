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
		case '/':if(fabs(date2)<=1e-7)//比较实型变量date2与0
		//由于浮点数的精度问题，float取值并不能取0，所以不能用if(date2==0); 
		{
			printf("分母为0，错误！"); 
		} else {
			printf("%lf / %lf = %lf\n",date1,date2,date1/date2);
		}
		break;
		default:printf("您输入符号有误");
	}
	return 0;
}
