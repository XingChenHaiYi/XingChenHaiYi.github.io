//系统随机生成一个100以内随机数，用户输入一个数对其猜测，与其对比，大了提示("Too big"),小了（"Too small"）;猜到则结束；一次猜中显示"Bingo!"
//如果3次以内猜到，显示"Lucky You!";如果超过3次但小于或等于n次的，显示"Good Guess!"超过n次或输入负数，显示"Game Over"并结束程序。 
//输入格式：在第一行给出两个 小于100的正整数，分别是系统产生都随机数，以及最大次数。随后每一行给出一个用户的输入。 
#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	d=0;
	e=0;
	printf("输入随机数a与次数b\n");
	scanf("%d %d",&a,&b);
	do{
		scanf("%d",&c);
		if(d<b){
			d++;
			if(c==a){
			    if(d==1){
		    		printf("Bingo!");
		    		e=1;
		    	}
			    else if(2<=d<=3){
				    printf("Lucky You!");
			    	e=1;
			    }
			    else if(3<d<=b){
				    printf("Good Guess!");
				    e=1;
			    }
				else if(c<0){
			    	printf("Game over");
			    	e=1;
				}
            }else if(c<a){
            	printf("Too small\n");
			}else if(c>a){
				printf("Too big\n");
			}
		}else if(d=b){
            	printf("Game Over");
            	e=1;
		}   
	}while(e==0);
	return 0;
} 
