#include <stdio.h>
int main()
{
	int i;
	printf("输入数字");
//  大于16会出错 
	scanf("%d",&i);
	int fact = 1;
	int n = i;
	for ( ;i>1; i--){
		fact *=i;
	}
//  意为，对于一开始的i,当i>1时，重复做循环体，做完每一轮循环语句后，使得i-- 
	printf("%d!=%d\n",n,fact);
	return 0;
}
