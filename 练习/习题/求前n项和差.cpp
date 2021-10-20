#include <stdio.h>
int main()
{
	//f(x)=1-1/2+1/3-1/4+……+1/n 
	double c,d;
	printf("输入项数");
	scanf("%lf",&c);
	d=0;
	int a;
	for(a=1;a<=c;a++){
		if(a%2!=0){
		    d=1.0/a+d;
		}else{
			d=-1.0/a+d;
		}
	}
	printf("前%lf项和是%lf",c,d);
	return 0;
}
