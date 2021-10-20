#include <stdio.h>
#include <math.h> 
int main()
{
	float date1,date2;
	char op;
	char whether;//用于判断是否需要继续运算 
	do{
		printf("请输入\n");
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
		    	printf("分母为0，错误！\n"); 
	    	} else {
		    	printf("%lf / %lf = %lf\n",date1,date2,date1/date2);
		    }
		    break;
		    default:printf("您输入符号有误\n");
	    }
	    printf("Do you want to continue (Y/N or y/n)\n");
	    scanf(" %c",&whether);
    }while(whether=='y'||whether=='Y');
    printf("It is end");
	return 0;
}
