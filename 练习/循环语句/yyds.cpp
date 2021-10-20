#include <stdio.h>
int main()
{
    int a,b,c,d;
    c = 0;
    d = 0;
    scanf("%d",&a);
    do{
    scanf("%d",&b);
    b=b/100;
    d++;
    if(b==21){
    	c++;
	}
}while(d<a);
    printf("%d",c);
    return 0;
}  
    
    
