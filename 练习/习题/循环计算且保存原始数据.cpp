#include <stdio.h>
int main()
{
	int x;
	int a=0;
	printf("请输入x的值\n");
	scanf("%d",&x);
	int t = x;
//	t用来保存原始数据x 
    while(x > 1){
    	x/=2;
    	a++;
	}
	printf("log2 of %d is %d",t,a);
	return 0;
}
	
