#include <stdio.h>

int main()
{
	int a;
	printf("输入你的本金%d:",a);
	scanf("%d",&a);
	
	double b;
	printf("你得到本息%f", a * (1 + 0.033) * (1 + 0.033) * (1 + 0.033));
	
	return 0;
} 
