#include <stdio.h>
int main()
{
	int x,n;
	//int exit=0;
	int one,two,five;
	printf("你有若干1角，2角，5角，凑成x元有多少种方法？输入x\n");
	scanf("%d",&x);
	for(one=0;one<=x*10;one++){
		for(two=0;two<=x*10/2;two++){
			for(five=0;five<=x*10/5;five++){
				if(one+two*2+five*5==x*10){
					printf("可以用%d张一角，%d张二角，%d张五角\n",one,two,five);
					n++;
					//exit=1;
					//break
				}
				//if(exit==1)break;
			}
			//if(exit==1)break;
		}
		//if(exit==1)break;可以使其只输出第一个答案 
	}
	printf("共有%d种",n);
	return 0;
}
