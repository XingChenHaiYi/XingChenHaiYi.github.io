#include <stdio.h>
int main()
{
	float a,b,c;// float ��ʾ������
	a=1.345f;
	b=1.123f;
	c=a + b;
	if(c==2.468){
		printf("���");
	} else {
		printf("����ȣ�c=%.10f,��%f\n",c,c);//ǰ���ǶԵ� 
		return 0;
	}
}
