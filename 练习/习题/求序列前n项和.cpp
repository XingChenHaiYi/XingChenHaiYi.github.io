//要求计算2/1+3/2+5/3+……的前n项和，每一项分子是前一项分子与分母的和，分母是前一项分子。最终结果为保留小数点后两位，不超过双精度范围 
#include <stdio.h>
int main()
{
	int n,z;
	double a,b,c,d,e;
	//ab如果int,当n很大，a,b会超过int的范围，变成负数
	//double 范围比int大，但是n到了2k，ab会为inf（越界 ）;d会为nan(无效数字） 
	a=2;
	b=1;
	d=0;
	printf("输入项数n\n");
	scanf("%d",&n);
	for(z=0;z<n;z++){
		c=a/b;
		e=b;
		//用e存储b 
		b=a;
		a=a+e;
		d=d+c;
	}
	printf("%.2lf",d);
	//.2使其保留两位小数 
	return 0;
} 
