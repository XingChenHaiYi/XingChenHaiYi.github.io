//如何写一个程序九三用户输入的数字的平均数，并输出所有大于平均数的数 
#include <stdio.h>
//用数组
 int main()
{
	int x;
	int sum = 0;
	int count = 0;
	int number[100];    //定义新变量number，他是一个数组，每个单元是int，大小是100 
	do{
		scanf("%d",&x);
	
		if( x != -1){
		
		    sum+=x;
		    count++;
		    number[count] = x ;//count一开始是0，加完之后是1，不断递增 ，这一步让number中第count个单元等于x 
		    //对数组中的元素赋值 
		    //以下用来调试的代码 
		    {
		    	int i;
		    	printf("%d\t",count);
		    	for(i=1;i<=count;i++){
		    		printf("%d\t",number[i]);//显示每个单元的数字 
				}
		    	printf("\n");
			}
		    //以上 
	    }   
	}while( x != -1);
//  输入-1时停止	
	printf("平均数是%lf\n",1.0*sum/count);
	int i;
	for(i=1;i<=count;i++){
		if(number[i]>sum/count){
			printf("%d\n",number[i]);
		}//使用数组中的元素 
	}//遍历数组 
	return 0;
}
//这个程序是危险的，因为输入的数据可能超过100个 
//在c99里，可以把number[100]改成number[count] 
