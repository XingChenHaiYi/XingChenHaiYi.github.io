#include <stdio.h>
int main()
{
	int x;
	printf("����x��ֵ��С�ھ�λ��");
	scanf("%d",&x);
	int n = 0;
	printf("x��λ����");
	n++;
	x/=10;
	while(x>0){
		n++;
		x/=10;
	}
	printf("%d",n);
	return 0;
}
