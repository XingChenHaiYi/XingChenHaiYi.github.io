#include <stdio.h>
int main()
{
	int a,b,c,d;
	d=0;
	for(a=1;a<=100;a++){
	b=1;
	    for(c=2;c<a;c++){
		    if(a%c==0){
//  但凡有一次if成立，b都会一直为0 
		    b=0;
		    break;
//  当成立时，由于break（可删，跳出for循环 ，进行下一轮 
	        }
	    }
	    if(b==1){
	    	if(a!=1){
//      此处if是为了去除1，也可将for中a改为2	    		
		    printf("%d\n",a);
		    d++;
		    }
	    }
    }
    printf("总计%d个",d);
	return 0;
}
