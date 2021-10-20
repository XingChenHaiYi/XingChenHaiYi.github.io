#include<stdio.h>
char c[5];
int main() 
{
    int a = 0;
    for(;a<5;a++){
        scanf("%c",&c[a]);
    }
    int b = 0;
    for(;b<5;b++){
        printf("%c",c[b]+4);
    }
    return 0;
}
