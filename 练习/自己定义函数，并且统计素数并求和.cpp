#include <stdio.h>
int isPrime(int i)
{
	int ret = 1;
	int k;
	for(k=2;k<i-1;k++){
		if(i%k==0){
			ret=0;
			break;
		}
	}
	return ret;  //��ʱ������return 1 �����ظ���������return 0������0
}
//�˴��Ϸ������������Լ��ĺ��� ,�ú������������ж��������������� 
int main()
{
	int m,n;
	int sum=0;
	int cnt=0;
	int i;
	
	scanf("%d %d",&m,&n);
	if(m==1)
	m=2;
	for(i=m;i<=n;i++){
		if(isPrime(i)){//��Ϊif(isPrime(i))��=0 
			sum+=i;
			cnt++;
		}//���庯����������ֻ�����򵥵�ѭ�� 
	}
	printf("%d %d\n",cnt,sum);
	return 0;
}
