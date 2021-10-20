#include <stdio.h>
int main()
{
	int x;
	printf("输入你的成绩"); 
	scanf("%d",&x);
	x=x/10;
	printf("你的评定等级是");
	switch(x){
		case 10:
		case 9:
		printf("A\n");
		break;
		case 8:
		printf("B\n");
		break;
		case 7:
		printf("C\n");
		break;
		case 6:
		printf("D\n");
		break;
		default:
		printf("F\n");
		break;
	}
	return 0;
}
