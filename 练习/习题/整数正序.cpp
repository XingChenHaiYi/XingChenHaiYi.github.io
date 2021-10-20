#include <stdio.h>
int main()
//输出一个数正序，每个数字间空格 (适用于末尾无0） 
{
	int x;
	printf("输入x的值");
	scanf("%d",&x);
	int t = 0;
	do{
		int d = x%10;
		x = x/10;
		t = t*10+d;
	}while(x>0);
	printf("x=%d,t=%d\n",x,t);
	// t是将原本的x倒序，x变为0；
	do{
		x=t%10;
		printf("%d",x);
		if(t>9){
			printf(" ");
			// 此处使每一数字间间隔一个空格，且最后面无空格； 
		}
		t=t/10;
	} while(t>0);
	return 0;
}
