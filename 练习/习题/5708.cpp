#include<stdio.h>
#include <math.h>
int main()
{
    double a,b,c;
    double s;
    scanf("%lf %lf %lf",&a,&b,&c);
    double p;
    p = (a+b+c)/2;
    printf("%lf\n",p);
    s = sqrt(p*(p-a)*(p-b)*(p-c));    //sqrt是开方函数 
	printf("%.1lf",s);
    return 0;
}
