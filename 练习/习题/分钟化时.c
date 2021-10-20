#include <stdio.h>
int main()
{
	int minute1;
	int minute2;
	scanf("%d%d",minute1,minute2);
	int a,b;
	a=(minute1+minute2)/60;
	b=(minute1+minute2)%60;
	printf("%d%d",a,b);
	return 0;
}
