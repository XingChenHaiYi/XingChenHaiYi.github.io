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
//  ������һ��if������b����һֱΪ0 
		b=0;
		break;
//  ������ʱ������break������forѭ�� 
	    }
	}
	if(b==1){
		printf("%d\n",a);
	}
    }while(a<100);
	return 0;
}
