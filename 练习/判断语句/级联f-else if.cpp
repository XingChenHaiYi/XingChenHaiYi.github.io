#include <stdio.h>
int main()
{
	int x;
	printf("����x��ֵ");
	scanf("%d",&x);
	int f = 0;
	if (x < 0){
		f=324;
	}else if(x > 4){
		f = 23*x;
	}else{
		f=x + 435;
	}
	printf("f��ֵ��%d",f);
	return 0;
}
