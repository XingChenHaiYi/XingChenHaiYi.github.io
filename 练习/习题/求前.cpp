#include <stdio.h>
int main()
{
	//f(x)=1+1/2+1/3+1/4+����1/n 
	double a,c,d;
	printf("��������");
	scanf("%lf",&c);
	d=0;
	for(a=1;a<=c;a++){
		    d=1/a+d;
	}
	printf("ǰ%lf�����%lf",c,d);
	return 0;
}
