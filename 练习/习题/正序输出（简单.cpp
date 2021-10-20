#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    e=0;
    printf("ÊäÈëÊı×Ö");
	scanf("%d",&a);	
	b=1;
	c=a;
	while(a>9){
		a/=10;
		b*=10;
		e++;
	}
	do{
		d=c/b;
		printf("%d",d);
		if(e>0){
			printf(" ");
		}
		c%=b;
		b/=10;
		e--;
	}while(e>=0);
	return 0;
}
