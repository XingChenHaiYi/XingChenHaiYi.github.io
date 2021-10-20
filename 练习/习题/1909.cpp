#include <stdio.h>
int main()

{
    int a,b,c,d,e,f;
    scanf("%d",&a);//需要的总数；
    e =10000000000;//e要足够大 
    for(b=0;b<3;b++){
        f = 1;
        scanf("%d %d",&c,&d);//scanf不要换行 
        while(c*f<a){
            f++;
        }
        if(f*d<e){
            e = d*f;
        }
    }
    printf("%d",e);
    return 0;
}
