#include <stdio.h>
void sum(int begin,int end);  // 函数原型      我们只是把函数头搬前去 这一行是 函数的原型声明， 声明不是函数，它只是提升编译器函数的类型 
int main()                    //到后面它就不会自己去猜函数是不是  两个int，返回也是int  
{                             //它会根据声明判断对sum的调用是否正确 
//函数原型也可在此  但要先在此定义函数中需要用的变量  
//  int i; 
//  void sum(int begin,int end); 
    sum(1,10);                //但到了定义sum时，它还会再判断定义与声明是否一致  如果不一致会error 
	sum(20,30);
	sum(35,45);

	return 0;
} 
void sum(int begin,int end)     // 实际的函数头              此处以下是函数的定义 
{
	int i;
	int sum = 0;
	for(i=begin;i<=end;i++){
	sum+=i;
	}
	printf("%d到%d的和是%d\n",begin,end,sum);
}
//                                             函数原型
//             函数头，以分号“；”结尾，就构成了函数的原型
//             函数原型的目的是告诉编译器这个函数长什么样
//             名称   参数（数量及类型）  返回类型 
//             有些版本教科书习惯把函数原型放在int main里面，如上 
//             我们习惯于把声明写在外面
//             同时原型声明里面可以不写参数的名字的  如只写  void sum(int,int);
//             甚至声明里可以写不是begin end的东西  因为编译器只会检查参数的类型，不检查名称
//             但我们通常保留它，因为便于读者理解 
