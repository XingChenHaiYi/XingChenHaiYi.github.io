#include <stdio.h>
int main()
{
	int a,b,c,d;
	d=0;
	for(a=2;d<50;a++){
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
		    printf("%d\t",a);
//  \tʹ֮���� 
		    d++;
	    }
	    if(d%5==0){
	    	printf("\n");
//  �˴�ʹû�������Ϊһ��	    	
		}
    }
    printf("�ܼ�%d��",d);
	return 0;
}
