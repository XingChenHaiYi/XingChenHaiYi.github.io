#include  <stdio.h>
int isPrime(int x,int knownPrimes[],int numberOfKnownPrimes){
	int ret = 1;
	int i;
	for(i = 0;i<numberOfKnownPrimes;i++){
		if(x%knownPrimes[i]==0){
			ret = 0;
			break;
		}
	}
	return ret;
}
int main()
{
	const int number = 100;
	int prime [number] = {2}; //即prime【0】 = 2
	int count = 1;
	int i = 3;
	while(count<number){
		if(isPrime(i,prime,count)){ //意为if……！=0 
			prime[count++] = i;//此步意为把i放在原先count位子上，然后count++； count++这一步会后执行   cnt++是先使用再++ 
		}
		i++;
	} 
	for(i = 0;i<number;i++){
		printf("%d",prime[i]);
		if((i+1)%5) printf("\t");//意为if((i+1)%5!=0) 
		else printf("\n");
	}
	return 0;
}
