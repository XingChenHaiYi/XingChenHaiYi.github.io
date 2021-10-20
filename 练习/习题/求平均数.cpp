#include <stdio.h>
int main()
{
	int number;
	int sum = 0;
	int count = 0;
	do{
		printf("输入数字\n");
		scanf("%d",&number);
		if(number != -1){
		
		    sum+=number;
		    count++;
	    }   
	}while( number != -1);
//  输入-1时停止	
	printf("平均数是%lf",1.0*sum/count);
	return 0;
}
