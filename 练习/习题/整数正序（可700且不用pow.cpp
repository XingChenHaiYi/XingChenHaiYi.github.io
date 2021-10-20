#include <stdio.h>
int main()
//输出一个数正序，每个数字间空格 (适用于末尾无0） 
{
	int x;              
	printf("输入x的值");
	scanf("%d",&x);
	int b,c;
	c = x;
	int yyds = 1;
	for(b=0;c>0;b++){
		c=c/10;
		yyds=yyds*10; 
	}
	if(c==0){
		b=1;
	}
	printf("x是%d位数\n",b);
	//先确定是几位数； 
	yyds/=10;
	int a = 0; 
    for(;yyds>0;yyds/=10){
    	a=x/yyds;
    	x=x%yyds;
		printf("%d",a);
		if(yyds>0){
			printf(" ");
			// 此处使每一数字间间隔一个空格，且最后面无空格； 
		}
    }
    if(c==0){
    	printf("0");
	}
	return 0;
}
