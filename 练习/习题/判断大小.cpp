#include <stdio.h>
int main()
{
	int a,b;
	printf("������������");
	scanf("%d %d",&a,&b);
	
	int max = 0;
	if(a>b){
		max=a;
		
	}else{
		max=b;
	}
		printf("����Ǹ���%d\n",max);
	
	printf("������������");
	scanf("%d %d",&a,&b);
	if(a>b){
		max=a;
	}
	if(b>=a){
		max=b;
	}
	printf("����Ǹ���%d",max);
	
	printf("������������");
	scanf("%d %d",&a,&b);
	
	
	max = b;
	if(a>b){
		max=a;
	}
	printf("����Ǹ���%d",max);
	return 0;
}
