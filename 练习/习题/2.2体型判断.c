#include <stdio.h>
#include <math.h>
int main()
{
	double h,w,t;//分别为身高（m），体重（kg）,体指数；
	double h2;//中间变量 用于储存 h 的平方
    printf("分别输入身高体重\n");
	scanf("%lf %lf",&h,&w);
	h2=pow(h,2);
	t = w/h2;
	if(t<18) printf("低体重");
	else if(t>=18&&t<25) printf("正常体重");
	else if(t>=25&&t<27) printf("超重体重");
	else if(t>=27) printf("肥胖");
	return 0;
}
