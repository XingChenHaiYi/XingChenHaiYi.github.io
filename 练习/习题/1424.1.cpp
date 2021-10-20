#include <stdio.h>
int main()
{
    int x,n;
    scanf("%d %d",&x,&n);
    int a,b,c;
    a = x+n;
    if(x<6){
        b = a/7*2;
        if(a%7<6){
            c = n-b;
        }if(a%7 == 6){
            c = n-b-1;
        }
    }if(x==6){
        b = a/7*2;
        if(a%7<6){
            c = n-b+1;
        }if(a%7 == 6){
            c = n-b;
        }
    }if(x==7){
        b = a/7*2;
        if(a%7<6){
            c = n-b+2;
        }if(a%7 == 6){
            c = n-b+1;
        }    
    }
    int d;
    d = c*250;
    printf("%d",d);
    return 0;
}    

