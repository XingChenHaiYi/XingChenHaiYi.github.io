#include <stdio.h>
 void cheer(int i)  // 返回类型void，意为不返回任何东西 
{
	printf("cheer %d\n",i);
}
int main()//不能出现两个int  main 
{
    cheer(2);//意为调用cheer函数   会输出cheer， 
    cheer(2.4);//   类型不同，编译时会warming，（有的不会）因为隐含了double到int的转换，从2.4变到2，会有损失   会输出2
	 
    return 0;
}
