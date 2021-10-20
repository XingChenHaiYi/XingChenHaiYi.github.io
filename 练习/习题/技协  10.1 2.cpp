#include<stdio.h>
int main()
{
   int a,b;
   scanf("%d %d",&a,&b);
   int c = a;
   int n = 0;
   do{
   	    printf("Destory it,all this-%08d\n",c);
   	    c--;
   	    if(c==0){
   	        printf("Destory it,all this-00000000");
   	        break;
   	    }
   	    n++;
   }while(n>0);
   return 0;
}
