#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d,e,f,g,h,m;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e = a;
    h = 2;
    m = b;
    for(f = 2;f >= 0;f--){
        g = pow(10,f);
        e = e+b/g*h;
        h++;
        b = b%g;
    }
    int i,j,k,n;
    n = c;
    for(i = 4;i >= 0;i--){
        j = pow(10,i);
        e = e+c/j*h;
        h++;
        c = c%j;
    }
    k = e%11;
    if(k == d){
        printf("Right");
    } else {
        printf("%d-%d-%d-%d",&a,&m,&n,&k);
        return 0;
    }
}
