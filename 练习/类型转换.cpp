//当运算符两边出现不一致的类型时，会自动转换成较大类型（表达数的范围更大）
//char<double<short<int<long<long long;   int<float<double
//对printf，任何小于int的类型会被转换成int，float会被转换double；scanf不会，要输入short，需要%hd 
#include <stdio.h>
int main()
{
    //强制类型转换  （类型）值  如（int）10.2  把double 10.2 强行转换为int，（short）32，把 int 32转换short
	//但是要注意安全性，小的变量不总能表示大的变量；如（short）32768如下
	printf("%d\n",(short)32768);//输出-32768 short最大为32767
	printf("%d\n",(char)32768); //输出0   越界 会溢出
	int i = 32768;
	short s = (short)i;
	printf("%d\n",i); //输出32768，强制类型转换只是用变量i的值去算出了一个新的short，但不会改变i
	printf("%hd\n",s); //输出-32768 
	double a = 1.0;
	double b = 2.0;
	int c = (int)a/b;//这一步并非a/b结果转换为int ，而是a转换为int，再除以b，虽然a是int，但b是double，所以结果会变成double，赋给c 
	printf("%d\n",c);//输出0
	printf("%lf\n",c); //输出0.0000 
	//强制类型转换优先级高于四则运算
	int e = 5;
	int f = 6;
	double g = (double)(e/f);//0.0000,如果是（double）e/f，结果是0.833333； 
	printf("%lf",g); 
	return 0;	
} 
