#include <stdio.h>
int main()
{
	int x = 0;
	int n = 0;
	printf("����x");
	scanf("%d",&x);
	do {
		x/=10;
		n++;
	} while(x>0);
	printf("x��λ����%d",n);
	return 0;
}
