#include <stdio.h>
int main()
{
	int x;
	int a=0;
	printf("������x��ֵ\n");
	scanf("%d",&x);
	int t = x;
//	t��������ԭʼ����x 
    while(x > 1){
    	x/=2;
    	a++;
	}
	printf("log2 of %d is %d",t,a);
	return 0;
}
	
