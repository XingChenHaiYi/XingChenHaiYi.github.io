#include <stdio.h>
int main()
{
    int x,n;
    scanf("%d %d",&x,&n);
    int a,b,c;
    a = n/7;//整周数;
    b = n%7;//余下天数；
    if(x!=7){
        if(b+x<=6){
            c = a*2;//摸鱼天数；
        }if(b+x==7){
            c = a*2+1;
        }if(b+x>=8){
        	c = a*2+2;
       	}
    } else {//x = 7 时情况不同· 
    	if(b+x==7){
            c = a*2;
        }if(b+x>=8){
        	c = a*2+1;
       	}
	}
    int d;
    d = n - c;
    int e;
    e = 250*d;
    printf("%d",e);
    return 0;
}
