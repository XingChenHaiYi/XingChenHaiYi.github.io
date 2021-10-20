#include <stdio.h>
int main()
{
    double a,b;
    scanf("%lf",&a);
    int j,k,x,y,z,i;
    k = 0;
    y = a/1;
    for(x=0;x<3;x++){
        z = y%10;
        y = y/10;
        k=10*k+z;
    }
    j = a/1;
    b = a-j;
    i = b*10;
    printf("%d.%d",i,k);
	return 0;
}
