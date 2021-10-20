#include <stdio.h>
int main()
{
	int a,b,c;
	printf("输入数字");
	scanf("%d",a);
	b=1;
	for(c=2;c<a;c++){
		if(a%c==0){
//  但凡有一次if成立，b都会一直为0 
		b=0; 
		continue;
//  当if成立，continue使for循环未完成部分跳过，再来下一次循环 
	    }
	printf("%d\n",c);
	}
	if(b==1){
		printf("%d是素数\n",a);
	}else{
		printf("%d不是素数\n",a);
	}
	return 0;
}
