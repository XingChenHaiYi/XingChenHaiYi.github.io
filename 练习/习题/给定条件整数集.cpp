//关于一个数A（如2， 
//输出由3个<=A+3的数组成的整数的集合 
//要求从小到大，每行六个，之间空格 
#include <stdio.h>
int main()
{
	int a,i,j,k;
	int count=0;
	//count为计数器 
	printf("输入数字");
	scanf("%d",&a);
	for(i=a;i<=a+3;i++){
		for(j=a;j<=a+3;j++){
			for(k=a;k<=a+3;k++){
                if(i!=j &&i!=k &&j!=k){
					    count++;
					    printf("%d%d%d",i,j,k);
					    if(count%6!=0){
						    printf(" ");
					    }else if(count%6==0){
						    printf("\n");
					    }
					}
				}	
			}
		}
	return 0;
}

