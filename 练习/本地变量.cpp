#include <stdio.h>
//函数的每一次运行都会产生一个独立的变量空间，其中的变量是函数的这一次运行所独有的，则称为本地变量
//                          本地变量
//    定义在函数内部的变量就是本地变量，参数也是本地变量

//                             变量的生存期和作用域
//    生存期：什么时候这个变量开始出现了，到什么时候它消亡了 
//    作用域：在（代码的）什么范围内可以访问这个变量（这个变量可以起作用） 
//    对于本地变量，这两个问题的答案是统一的：大括号内——（称为）块 

//                   本地变量的规则 
//  本地变量是定义在块内的  它可以是定义在函数的块内 也可以定义在语句的块内 
//  甚至可以随便拉一个大括号来定义变量 
//  程序进入这个块之前，其中的变量不存在，离开这个块，这个变量就消失了 
//  块外面定义的变量在里面任然有效   
//  块里面定义了和外面同名的变量则覆盖了外面的（但在块外还是用外面的变量与其值） 
//  不能在一个块内定义同名变量，会编译错误 “redefinition” 
//  本地变量不会被默认初始化，不会得到一个默认的初始的值 
//  参数在进入函数时被初始化了   调用函数时一定要给参数一个对于的值  会在进入函数时用来初始化参数 
  void swap(int a,int b);
int main()//main 有自己的变量空间 
{
	int a = 5;//调用swap时要离开main的变量空间，进入swap的 
	int b = 6;
	
	swap(a,b);//在main里面  a b 是存在的，x y t 是不存在的 
	{
		int q =0;
		printf("%d\n",q);//0
		printf("%d\n",a);//5 在外面定义的a = 5仍然有效；
		int a = 0;
		printf("%d\n",a);//0 此处再定义a，在块内覆盖a = 5，但块外不变，因为在块外这个a = 0不存在了； 
	}//虽然这对大括号没有依附于任何语句，但对c语言来说这是合理的写法，会输出 
	
	if(a<b){
		int i = 10;//这个i就是定义在这个块内的变量  它的生存期和作用域就在这个块内，离开了if，这个i就不存在 
	}//   所以i存不存在取决于a与b的大小
	//如果在括号外想使用i，如i++,编译会出现错误 “‘i’undeclared” 
	printf("a = %d b = %d\n",a,b);
	
	return 0;
} 

void swap(int x,int y)
{
	int swap;
	int t = x;//进入 swap函数中  x y是存在的  a b 不存在的  因为是在swap里 而函数的变量只能自己访问 
	x = y;//虽然 a b 还在那里，但我们不能在当前的上下文去访问，作为生存，它们还在，作为作用，它们不在当前的作用域里面 
	y = t;//离开回到main后 t,x,y都不存在了又进入了a b的作用域，可以访问, x y t 是不存在了，而不仅是离开了作用域，因为已经结束该函数的运行
//	
//	
	
	 
}

