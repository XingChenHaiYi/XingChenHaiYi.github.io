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
		printf("a = %d,b = %d,c = %d\n",a,b,c);
//  �����������ã���ɾ��		
		a /=10; 
	}
	printf("%d",c);
//	������Ϊ700�����7����ͷ����Ϊ0 
	return 0;
}
