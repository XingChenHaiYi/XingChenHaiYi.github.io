#include <stdio.h>
int main()
{
	int n;
	printf("��������");
//  ����16����� 
	scanf("%d",&n);
	int fact = 1;
	
	int i = 1;
	for ( i=1; i<=n; i++ ){
		fact *=i;
	}
//  ��Ϊ������һ��ʼ��i=1,��i<nʱ���ظ���ѭ���壬����ÿһ��ѭ������ʹ��i++ 
	printf("%d!=%d\n",n,fact);
	return 0;
}
