#include <stdio.h>
int main()
{
	int number;
	int a = 0;
	int b = 1;
	printf("输入数字求其阶乘");
	scanf("%d/n",&number);
	while(a<number){
		a++;
		b = b*a;
	}
	printf("%d的阶乘是%d",number,b);
	return 0;
}
