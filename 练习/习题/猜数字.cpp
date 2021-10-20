#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int a = rand();
	int b = 0;
    int count = 0;
	do{
	printf("请用户输入一个数字\n");
	scanf("%d/n",&b);
		count++;
	if(b>a){
		printf("你的数字猜大了\n");
	} else if(b<a){
		printf("你的数字猜小了\n");
    }
	} while (a!=b);
	printf("你猜对了,次数是%d",count);
    return 0;
}
