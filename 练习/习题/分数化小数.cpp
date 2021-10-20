//输入正整数a，b，c，输出a/b的小数形式，精确到小数点后c位。a，b≤10^6，c≤100。
//输入包含多组数据，结束标记为a＝b＝c＝0。
//样例输入：
//1 6 4
//0 0 0
//样例输出：
//Case 1: 0.1667
#include <stdio.h>
int main()
{
	int a,c;
	long long b;
	while(scanf("%d %d %d",&a,&b,&c)){
		if(a == 0 && b == 0 && c ==0) break;
		double d;
		d = a*1.0/b;
		printf("%.*lf",c,d);//保留c位小数 
	}
	return 0;
}
