#include <stdio.h>
int main()
{
	char c;
	char d;
	c = 1;
	d='1';
	if(c==d){
		printf("���\n");
	}else{
		printf("�����\n");//�𰸲���ȣ���Ϊ����c������1��d���ַ�1 
	}
	printf("c=%d\n",c);//1
	printf("d=%d\n",d);//49   49='1',65='A'
	char a;
	scanf("%c",&a);//�����ַ�%c 
	printf("c=%d\n",a);//�������ֵa  ������1���ַ��������Ϊ49����1�����������ֵ��������Ϊ1 
	printf("c='%c'\n",a);//��a�����ַ�������� ����a�����a������������������֣������Ƿ�������� 
	char b;
	int i;
	scanf("%d",&i);//scanf%dֻ�ܴ��� int ���ܴ���char;
	b=i; 
	printf("c=%d\n",c);//�������1�����1�͡���1������ַ����������Ϊû�У��������49�����49�롮1�� 
	printf("c='%c'\n",c);
	return 0;
}
