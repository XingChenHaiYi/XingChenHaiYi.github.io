#include <stdio.h>
#include <math.h>
int main()
//���һ��������ÿ�����ּ�ո� (������ĩβ��0�� 
{
	int x;
	printf("����x��ֵ");
	scanf("%d",&x);
	int b,c;
	c = x;
	for(b=0;c>0;b++){
		c=c/10;
	}
	if(c==0){
		b=1;
	}
	printf("x��%dλ��\n",b);
	//��ȷ���Ǽ�λ���� 
	int yyds; 
	yyds= pow(10,b-1);
	//  pow ����  ��ʽ����Ϊ10��b-1�η��� 
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
    
	return 0;
}
