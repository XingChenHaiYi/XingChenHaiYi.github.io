#include <stdio.h>
int main()
{
	int a,b,c,d;
	d=0;
	for(a=2;d<50;a++){
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
		    printf("%d\t",a);
//  \t使之对齐 
		    d++;
	    }
	    if(d%5==0){
	    	printf("\n");
//  此处使没五个素数为一行	    	
		}
    }
    printf("总计%d个",d);
	return 0;
}
