#include <stdio.h>
int main()
//���һ��������ÿ�����ּ�ո� (������ĩβ��0�� 
{
	int x;
	printf("����x��ֵ");
	scanf("%d",&x);
	int t = 0;
	do{
		int d = x%10;
		x = x/10;
		t = t*10+d;
	}while(x>0);
	printf("x=%d,t=%d\n",x,t);
	// t�ǽ�ԭ����x����x��Ϊ0��
	do{
		x=t%10;
		printf("%d",x);
		if(t>9){
			printf(" ");
			// �˴�ʹÿһ���ּ���һ���ո���������޿ո� 
		}
		t=t/10;
	} while(t>0);
	return 0;
}
