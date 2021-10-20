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
		printf("a = %d,b = %d,c = %d\n",a,b,c);
//  上面做调试用，可删。		
		a /=10; 
	}
	printf("%d",c);
//	输入若为700，输出7。开头不可为0 
	return 0;
}
