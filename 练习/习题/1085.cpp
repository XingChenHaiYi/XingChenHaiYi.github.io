#include <stdio.h>
int main()
{
    int d,b;
    int c ;
    int f;
    int e = 0;
    for(c=1;c<7;c++){
        scanf("%d %d\n",&b,&d);
        if(b+d>8 && b+d>e){
            f = c;
            e = b+d;
        }
        
    }
    printf("%d",f);
	return 0;
}
