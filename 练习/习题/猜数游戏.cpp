//ϵͳ�������һ��100������������û�����һ��������²⣬����Աȣ�������ʾ("Too big"),С�ˣ�"Too small"��;�µ��������һ�β�����ʾ"Bingo!"
//���3�����ڲµ�����ʾ"Lucky You!";�������3�ε�С�ڻ����n�εģ���ʾ"Good Guess!"����n�λ����븺������ʾ"Game Over"���������� 
//�����ʽ���ڵ�һ�и������� С��100�����������ֱ���ϵͳ��������������Լ������������ÿһ�и���һ���û������롣 
#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	d=0;
	e=0;
	printf("���������a�����b\n");
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
