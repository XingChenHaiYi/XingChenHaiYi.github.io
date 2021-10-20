#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	f=0;
	g=0;
	printf("输入两个数a<b,然后输出中间素数个数并求和\n");
	scanf("%d%d",&a,&b);
	for(c=a;c<=b;c++){
		d=1;
		if(c==1){
			d=0;
		}
		for(e=2;e<c;e++){
			if(c%e==0){
				d=0;
			}
		}
		if(d==1){
			f=f+c;
			g++;
			//f为总和，g计数器 
		}
	}
	printf("有%d 个素数，和是%d",g,f);
	return 0;
}
