#include <stdio.h>
int main()
{
	int x;
	printf("输入x的值");
	scanf("%d",&x);
	int f = 0;
	if (x < 0){
		f=324;
	}else if(x > 4){
		f = 23*x;
	}else{
		f=x + 435;
	}
	printf("f的值是%d",f);
	return 0;
}
