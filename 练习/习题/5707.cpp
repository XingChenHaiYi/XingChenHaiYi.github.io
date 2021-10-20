#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h;
    scanf("%d%d",&a,&b);
    if(a<=b){
        printf("08:49");
    }
    if(a>b){
        c = a/b;
        d = c+10;
        e = a%b;
        f = 8*60-d;
        g = f/60;
        h = f%60;
        if(e==0){
            if(h<10){
                printf("0%d:0%d",7-g,60-h);
            } else if(h>=10){
                printf("0%d:%d",7-g,60-h);
            }
        } else if(e!=0){
            if(h<10){
                printf("0%d:0%d",7-g,59-h);
            } else if(h>=10){
                printf("0%d:%d",7-g,59-h);
            }
        }
    }
    return 0;
}
