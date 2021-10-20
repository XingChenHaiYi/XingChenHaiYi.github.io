#include <stdio.h>
int main()
{
	int m1,m2,h1,h2;
	
	printf("输入起始时间与结束时间");
	
	scanf("%d %d",&h1,&m1);
	scanf("%d %d",&h2,&m2);
	
	int h=h2-h1;
	int m=m2-m1;
	if(m<0) {
	m=60+m;
	h --;
	}
	printf("时间差是%d小时%d分.\n",h,m);
	return 0;
	
}
