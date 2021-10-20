#include <stdio.h>
int main()
{
	int x;
	printf("输入x的值，小于九位数\n");
	scanf("%d",&x);
	int n = 1;
	printf("x的位数是n\n");
	while(x>=10){
		n++;
		x/=10;
		printf("x = %d,n = %d\n",x,n);
//		加入printf，查看每次循环数值 
	}
	printf("x的位数是n=%d",n);
	return 0;
}
