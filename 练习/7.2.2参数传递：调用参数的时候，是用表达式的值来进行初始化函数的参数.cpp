#include <stdio.h>
int max(int a,int b)                                  //�����п����ж��return�����Կ�д��; 
{                                                     //����int ret 
	int ret;                                          //    if(a>b){
	if (a>b){                                         //       return a;
		ret = a;                                      //    } else { 
	} else {                                          //       return b; 
		ret = b;                                      //}
	}                                                 //���Ҳ�Ͳ���Ҫreturn�� 
	return ret; 
}
//                                          ���ú���
//  ��������в���������ʱ���봫�ݸ���������������ȷ��ֵ
//  ���Դ��ݸ�������ֵ�Ǳ��ʽ�Ľ�����������  ������  ����  �����ķ���ֵ  ����Ľ��
int main()
{
	int a,b,c;
	a = 5;
	b = 6;
	c = max(10,12);
	printf("%d\n",c);
	c = max(a,b);
	printf("%d\n",c);
	c = max(c,23);
	printf("%d\n",c);
	c = max(max(23,45),a);
	printf("%d\n",c);
	c = max(23+45,b);
	printf("%d\n",c);
	return 0;
}

