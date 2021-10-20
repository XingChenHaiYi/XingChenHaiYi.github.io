#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("输入分子a和分母b\n");
	scanf("%d %d",&a,&b);
	c=1;
	if(a!=b){
	    do{
		    if(a%c==0){
			    if(b%c==0){
				    d=c;
			    }
		    }
		    c++;
	    }while(c<=a);
		printf("%d/%d",a/d,b/d); 
    }else if(a==b){
    	printf("1/1");
	}
	return 0;
}
