#include <stdio.h>
int main()
{
    unsigned long long N,n;//Int·¶Î§Ì«Ð¡ 
    scanf("%lld",&N);
    n = N*(N-1)/2*(N-2)/3*(N-3)/4;
    printf("%lld",n);
    return 0;
}
