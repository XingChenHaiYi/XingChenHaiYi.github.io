#include <stdio.h>
int main()
{
	int i;
	printf("��������");
//  ����16����� 
	scanf("%d",&i);
	int fact = 1;
	int n = i;
	for ( ;i>1; i--){
		fact *=i;
	}
//  ��Ϊ������һ��ʼ��i,��i>1ʱ���ظ���ѭ���壬����ÿһ��ѭ������ʹ��i-- 
	printf("%d!=%d\n",n,fact);
	return 0;
}
