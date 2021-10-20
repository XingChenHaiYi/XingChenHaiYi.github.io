#include <stdio.h>
int main()
{
	int x;
	int a = -1;
	printf("ÊäÈëxµÄÖµ\n");
	scanf("%d",&x);
	int t = x;
	do{
		x/=2;
		a++;
	}while(x >= 1);
	printf("log2 of %d is %d",t,a);
	return 0;
}
