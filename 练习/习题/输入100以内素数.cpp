#include <stdio.h>
int main()
{
	int a,b,c;
	a=1;
	do{
	a++;
	b=1;
	for(c=2;c<a;c++){
		if(a%c==0){
//  但凡有一次if成立，b都会一直为0 
		b=0;
		break;
//  当成立时，由于break，跳出for循环 
	    }
	}
	if(b==1){
		printf("%d\n",a);
	}
    }while(a<100);
	return 0;
}
