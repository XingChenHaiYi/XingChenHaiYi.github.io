#include <stdio.h>
int max(int a,int b)                                  //函数中可以有多个return，所以可写成; 
{                                                     //不用int ret 
	int ret;                                          //    if(a>b){
	if (a>b){                                         //       return a;
		ret = a;                                      //    } else { 
	} else {                                          //       return b; 
		ret = b;                                      //}
	}                                                 //最后也就不需要return了 
	return ret; 
}
//                                          调用函数
//  如果函数有参数，调用时必须传递给它数量，类型正确的值
//  可以传递给函数的值是表达式的结果，这包括：  字面量  变量  函数的返回值  计算的结果
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

