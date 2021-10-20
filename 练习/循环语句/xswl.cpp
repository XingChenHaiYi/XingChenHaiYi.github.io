#include <stdio.h>
int main()
{
    int a,b,c;
    c=1;
    scanf("%d",&a);
    do{
        b=a%10;
        c=c*b;
        a/=10;
    }while(a>1);
    printf("%d",c%2021);
  return 0;
}
