#include <stdio.h>
int main()
{
	int x;
	printf("����x��ֵ��С�ھ�λ��");
	scanf("%d",&x);
	int n = 0;
	printf("x��λ����");
	if(x > 0){
    	while(x>0){
		n++;
		x/=10;
	    }
	}else {
		n = 1;
	}
	printf("%d",n);
	return 0;
}
