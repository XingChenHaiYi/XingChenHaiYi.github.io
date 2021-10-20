#include <stdio.h>
int main()
{
	int a,b;
	printf("输入两个整数");
	scanf("%d %d",&a,&b);
	
	int max = 0;
	if(a>b){
		max=a;
		
	}else{
		max=b;
	}
		printf("大的那个是%d\n",max);
	
	printf("输入两个整数");
	scanf("%d %d",&a,&b);
	if(a>b){
		max=a;
	}
	if(b>=a){
		max=b;
	}
	printf("大的那个是%d",max);
	
	printf("输入两个整数");
	scanf("%d %d",&a,&b);
	
	
	max = b;
	if(a>b){
		max=a;
	}
	printf("大的那个是%d",max);
	return 0;
}
