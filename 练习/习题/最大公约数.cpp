//շת����������Լ����
//1�����BΪ0����aΪ���Լ����
//���򣬼���a����b����������a=b��b=�Ǹ��������ٻص���һ���� 
#include <stdio.h>
int main()
{
	int a=0;
	int b=0;
	int c;
	printf("����a��b��ֵ\n");
	scanf("%d %d",&a,&b);
	//c���ڴ���a 
	do{
		c=a;
		a=b;
		b=c%b;
	}while(b!=0);
	printf("���Լ��Ϊ%d",a);
	return 0;
 } 
