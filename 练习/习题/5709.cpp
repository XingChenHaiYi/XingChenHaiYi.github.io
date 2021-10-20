#include <stdio.h>
int main()
{
    int m,t,s;
    scanf("%d %d %d",&m,&t,&s);
    if(t!=0){
        int a,b;
        a = s/t;
        b = s%t;
        if(b!=0){
            if(a<m){
                printf("%d",m-a-1);
            } else {
                printf("0");
            }
        } else {
            if(a<=m){
                printf("%d",m-a);
            } else {
                printf("0");
            }    
        } 
    } else if(t==0) {
        printf("0");
    }
    return 0;
}
