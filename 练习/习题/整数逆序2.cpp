#include <stdio.h>
int main()
{
	int a,b,c;
	printf("输入a的值\n");
	scanf("%d",&a);
	c = 0;
	while(a>0){
		b = a%10;
		c = c*10+b;
		printf("%d",b);
//  上面做调试用，可删。		
		a /=10; 
	}
//	输入若为007，输出7。 
	return 0;
}
