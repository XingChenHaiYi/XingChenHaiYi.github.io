#include <stdio.h>
int main()
{
	int a,b,c,d;
	d=0;
	for(a=1;a<=100;a++){
	b=1;
	    for(c=2;c<a;c++){
		    if(a%c==0){
//  ������һ��if������b����һֱΪ0 
		    b=0;
		    break;
//  ������ʱ������break����ɾ������forѭ�� ��������һ�� 
	        }
	    }
	    if(b==1){
	    	if(a!=1){
//      �˴�if��Ϊ��ȥ��1��Ҳ�ɽ�for��a��Ϊ2	    		
		    printf("%d\n",a);
		    d++;
		    }
	    }
    }
    printf("�ܼ�%d��",d);
	return 0;
}
