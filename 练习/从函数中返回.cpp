#include <stdio.h>
int isPrime(int i)
{
	int ret = 1;
	int k;
	for(k=2;k<i-1;k++){
		if(i%k==0){
			ret=0;
			break;
		}
	}
	return ret;//如果函数想返回一个结果时  要用return 把该结果交给调用它的地方  
	//因为  isPrime有一个返回的类型int  即会返回一个int的结果  所以要用return 让它返回那么一个int的结果  void则不需要 
}
int max(int a,int b)                                  //函数中可以有多个return，所以可写成; 
{                                                     //不用int ret 
	int ret;                                          //if(a>b){
	if (a>b){                                         //    return a;
		ret = a;                                      //} else { 
	} else {                                          //    return b; 
		ret = b;                                      //}
	}                                                 //最后也就不需要return了 
	return ret;  //单一出口，只有一个return；         //return不一定要在最后 
	//return停止函数的执行，并送回return后的一个值    //不符合单一出口理念，不好，因为有很多个地方可以离开这个函数，将来如果要进行修改，要改很多地方 
	//所以有两种写法  return；  或return 表达式； 
	// 
}
int main()
{
	int a,b,c; 
	a=5;
	b=6;
	c=max(10,12);//10给a,12给b；return 后把12返回，所以c赋值为12； 
	printf("%d\n",c);//12
	c=max(a,b);//a和b的值5,6交给了函数中的a，b；把6返回； 
	printf("%d\n",c);//6
	c=max(c,23);//c=6交给函数中的a；23交给函数中的b；把23返回 
	printf("%d\n",c);//23
	c=max(max(c,a),5);//函数的返回值可以再赋给变量或传递给函数 ，如max可以用另一个max的结果作为参数；甚至可以丢弃，如只写 max（12，13）；没有调用  
	//有的时候我们使用函数并不是为了看它返回的结果,而是要函数运行的副作用，如函数运行中的输出，而且不会有error和warming       
	printf("%d\n",c);//23
	printf("%d\n",max(a,b));//输出的是max的结果 a=5,b=6
	return 0;
}
//没有返回值的函数 void函数名（参数表）
//不能使用带值的return；
//可以没有return；
//调用时不能做返回值的赋值； 
