#include <stdio.h>
int main()
//! 逻辑非 &&逻辑与 ||逻辑或 
// age>20 && age<30  即age在20和30间；i<0||i>99,i小于0或大于99； ！age<20,即age>=20
// 优先级 !>&&>||,
//短路 逻辑运算自左向右进行，如果左边结果已经可以觉得结果，不进行右侧；所以最好不要把赋值和复合赋值 组合进表达式； 
//对于&&,左边是false就不做右边，||左边是true不做右边 
 
{
	int a = -1;
	if(a>0 && a++>1){
		printf("OK");
	}
	printf("%d\n",a);//输出-1，因为a>0不成立，a++未被执行 
	if(a<0 && a++>1){
		printf("OK");
	}
	printf("%d\n",a);//输出0 
    return 0;
}
