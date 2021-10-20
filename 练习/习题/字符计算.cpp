#include <stdio.h>
int main()
{
	char c = 'A';
	c++;//字符是一种整数 可以做整数运算； 
	printf("%c\n '%c'\n %d\n",c,c,c);//B ‘B’66 如果时c+=2,得到 C 'C' 67 一个字符加一个数字，得到ASCLL码表种那个数之后的字符； 
	int i='Z'-'A';
	printf("%d\n",i);//25 两个字符的减，得到它们在表中的距离 
	//字母在ASCLL表中是顺序排列的 大写字母和小写字母分开排列 距离为32 小写对应数字大 a+'a'-'A'，大写变小写，a+'A'-'a',小写变大写 
	return 0;
}
