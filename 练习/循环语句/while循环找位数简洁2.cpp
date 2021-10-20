#include <stdio.h>
int main()
{
	int x;
	printf("输入x的值，小于九位数");
	scanf("%d",&x);
	int n = 0;
	printf("x的位数是");
	if(x > 0){
    	while(x>0){
		n++;
		x/=10;
	    }
	}else {
		n = 1;
	}
	printf("%d",n);
	return 0;
}
