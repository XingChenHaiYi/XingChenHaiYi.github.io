#include <stdio.h>
int main()
{
	int a,b;
	a=6;
	b=6;
	printf("%d\n",5>3==6>4);
	printf("%d\n",6>5>4);
	printf("%d\n",a==b==6);
	printf("%d\n",a==b>0);
	printf("解析：5大于3成立得1,6大于4成立得1,1等于1得1，==优先级小\n");
	printf("解析：6大于5得1,1小于4得0\n");
	printf("a等于b得1,1不等于6，得0\n");
	printf("b大于0得1，a不等于1得0\n");
	return 0;
}
