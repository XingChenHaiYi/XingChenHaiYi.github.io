#include <stdio.h>
int main()
{
	int m1,m2,h1,h2;
	
	printf("������ʼʱ�������ʱ��");
	
	scanf("%d %d",&h1,&m1);
	scanf("%d %d",&h2,&m2);
	
	int h=h2-h1;
	int m=m2-m1;
	if(m<0) {
	m=60+m;
	h --;
	}
	printf("ʱ�����%dСʱ%d��.\n",h,m);
	return 0;
	
}
