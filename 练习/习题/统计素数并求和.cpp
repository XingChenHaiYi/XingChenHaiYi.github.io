#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	f=0;
	g=0;
	printf("����������a<b,Ȼ������м��������������\n");
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
			//fΪ�ܺͣ�g������ 
		}
	}
	printf("��%d ������������%d",g,f);
	return 0;
}
