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
	printf("���û�����һ������\n");
	scanf("%d/n",&b);
		count++;
	if(b>a){
		printf("������ֲ´���\n");
	} else if(b<a){
		printf("������ֲ�С��\n");
    }
	} while (a!=b);
	printf("��¶���,������%d",count);
    return 0;
}
