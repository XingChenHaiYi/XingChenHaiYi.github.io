#include <stdio.h>
int main()
{
	int a,b,c;
	printf("����a��ֵ\n");
	scanf("%d",&a);
	c = 0;
	while(a>0){
		b = a%10;
		c = c*10+b;
		printf("%d",b);
//  �����������ã���ɾ��		
		a /=10; 
	}
//	������Ϊ007�����7�� 
	return 0;
}
