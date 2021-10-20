#include <stdio.h>
int main()
{
	int n;
	printf("输入数字");
//  大于16会出错 
	scanf("%d",&n);
	int fact = 1;
	
	int i = 1;
	for ( i=1; i<=n; i++ ){
		fact *=i;
	}
//  意为，对于一开始的i=1,当i<n时，重复做循环体，做完每一轮循环语句后，使得i++ 
	printf("%d!=%d\n",n,fact);
	return 0;
}
