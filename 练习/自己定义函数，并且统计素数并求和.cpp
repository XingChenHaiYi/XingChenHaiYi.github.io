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
	return ret;  //当时素数，return 1 ，返回该数；否则return 0；返回0
}
//此处上方定义了我们自己的函数 ,该函数可以用于判断素数的其他场合 
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
		if(isPrime(i)){//意为if(isPrime(i))！=0 
			sum+=i;
			cnt++;
		}//定义函数后，主函数只需做简单的循环 
	}
	printf("%d %d\n",cnt,sum);
	return 0;
}
