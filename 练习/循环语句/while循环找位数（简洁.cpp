#include <stdio.h>
int main()
{
	int x;
	printf("����x��ֵ��С�ھ�λ��\n");
	scanf("%d",&x);
	int n = 1;
	printf("x��λ����n\n");
	while(x>=10){
		n++;
		x/=10;
		printf("x = %d,n = %d\n",x,n);
//		����printf���鿴ÿ��ѭ����ֵ 
	}
	printf("x��λ����n=%d",n);
	return 0;
}
