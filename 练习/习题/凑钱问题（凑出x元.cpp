#include <stdio.h>
int main()
{
	int x,n;
	//int exit=0;
	int one,two,five;
	printf("��������1�ǣ�2�ǣ�5�ǣ��ճ�xԪ�ж����ַ���������x\n");
	scanf("%d",&x);
	for(one=0;one<=x*10;one++){
		for(two=0;two<=x*10/2;two++){
			for(five=0;five<=x*10/5;five++){
				if(one+two*2+five*5==x*10){
					printf("������%d��һ�ǣ�%d�Ŷ��ǣ�%d�����\n",one,two,five);
					n++;
					//exit=1;
					//break
				}
				//if(exit==1)break;
			}
			//if(exit==1)break;
		}
		//if(exit==1)break;����ʹ��ֻ�����һ���� 
	}
	printf("����%d��",n);
	return 0;
}
