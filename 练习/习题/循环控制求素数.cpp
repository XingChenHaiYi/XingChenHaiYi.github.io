#include <stdio.h>
int main()
{
	int a,b,c;
	printf("输入数字");
	scanf("%d",&a);
	b=1;
	for(c=2;c<a;c++){
		if(a%c==0){
//  但凡有一次if成立，b都会一直为0 
		b=0;
		break;
//  当成立时，由于break，跳出for循环 
	    }
	}
	if(b==1){
		printf("%d是素数\n",a);
	}else{
		printf("%d不是素数\n",a);
	}
	return 0;
}
