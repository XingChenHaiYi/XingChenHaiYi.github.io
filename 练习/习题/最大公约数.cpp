//辗转相除法求最大公约数；
//1，如果B为0，则a为最大公约数；
//否则，计算a除以b的余数，让a=b，b=那个余数，再回到上一步； 
#include <stdio.h>
int main()
{
	int a=0;
	int b=0;
	int c;
	printf("输入a与b的值\n");
	scanf("%d %d",&a,&b);
	//c用于储存a 
	do{
		c=a;
		a=b;
		b=c%b;
	}while(b!=0);
	printf("最大公约数为%d",a);
	return 0;
 } 
