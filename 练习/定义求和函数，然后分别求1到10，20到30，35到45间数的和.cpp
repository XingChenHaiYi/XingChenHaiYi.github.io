#include <stdio.h>
void sum(int begin,int end)
{
	int i;
	int sum = 0;
	for(i=begin;i<=end;i++){
		sum+=i;
	}
	printf("%d到%d的和是%d\n",begin,end,sum);
}
//上方定义了一个求和函数，求俩数间所有数字之和
//函数有先后关系，把sum写在上面是因为，c的编译器会自上而下分析你的代码 
//如果sum在下面，编译器会自己猜一个函数 

int main()
{
	sum(1,10);//在看到sum（1，10）时，它需要知道sum(）的样子，也就是sum()返回要几个参数，每个参数的类型如何，返回什么类型
	sum(20,30);
	sum(35,45);
	
	return 0;
} 
//但可以写成这样·
//#include <stdio.h>
//void sum(int begin,int end);  我们只是把函数头搬前去 这一行是 函数的原型声明， 声明不是函数，它只是提升编译器函数的类型 
//int main()                    到后面它就不会自己去猜函数是不是  两个int，返回也是int  
//{                             它会根据声明判断对sum的调用是否正确 
//	sum(1,10);                  但到了定义sum时，它还会再判断定义与声明是否一致  如果不一致会error 
//	sum(20,30);
//	sum(35,45);
//	
//	return 0;
//} 
//void sum(int begin,int end)                   此处一下是函数的定义 
//{
//	int i;
//	int sum = 0;
//	for(i=begin;i<=end;i++){
//		sum+=i;
//	}
//	printf("%d到%d的和是%d\n",begin,end,sum);
//}
