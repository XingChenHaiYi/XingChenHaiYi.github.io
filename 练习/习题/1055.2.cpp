#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,e,f,g,h,m;
    char d;
    scanf("%d-%d-%d-%c",&a,&b,&c,&d);
    if(d == 'X')
    d = 10;
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
        if(k!=10)
            printf("%d-%d-%d-%d",&a,&m,&n,&k);
        else{
            char z = 'X'; 
            printf("%d-%d-%d-%c",&a,&m,&n,&z);
        }
    }
    return 0;
}
