#include <stdio.h>
int main()
{
	int a,b,c;
	printf("��������");
	scanf("%d",a);
	b=1;
	for(c=2;c<a;c++){
		if(a%c==0){
//  ������һ��if������b����һֱΪ0 
		b=0; 
		continue;
//  ��if������continueʹforѭ��δ��ɲ���������������һ��ѭ�� 
	    }
	printf("%d\n",c);
	}
	if(b==1){
		printf("%d������\n",a);
	}else{
		printf("%d��������\n",a);
	}
	return 0;
}
