#include <stdio.h>
int main()
//���һ��������ÿ�����ּ�ո� (������ĩβ��0�� 
{
	int x;              
	printf("����x��ֵ");
	scanf("%d",&x);
	int b,c;
	c = x;
	int yyds = 1;
	for(b=0;c>0;b++){
		c=c/10;
		yyds=yyds*10; 
	}
	if(c==0){
		b=1;
	}
	printf("x��%dλ��\n",b);
	//��ȷ���Ǽ�λ���� 
	yyds/=10;
	int a = 0; 
    for(;yyds>0;yyds/=10){
    	a=x/yyds;
    	x=x%yyds;
		printf("%d",a);
		if(yyds>0){
			printf(" ");
			// �˴�ʹÿһ���ּ���һ���ո���������޿ո� 
		}
    }
    if(c==0){
    	printf("0");
	}
	return 0;
}
