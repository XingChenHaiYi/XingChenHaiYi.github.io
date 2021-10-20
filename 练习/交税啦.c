#include <stdio.h>
int main()
{
	double sum,money;
	scanf("%lf",&sum);
	if(sum>2000){
		money=(sum-2000)*0.2+64+20;
	}
	else if(sum<=2000&&sum>1200){
		money=(sum-1200)*0.08+20;
	}else if(sum<=1200&&sum>800){
		money=(sum-800)*0.05;
	}else if(sum<=800){
		money=0; 
	}
	printf("Ó¦Õ÷Ë°%lf",money);
	return 0;
}
