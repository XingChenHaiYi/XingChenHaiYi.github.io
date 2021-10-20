//水仙花数（Narcissistic number）也被称为超完全数字不变数（pluperfect digital invariant, PPDI）、
//自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），
//水仙花数是指一个 n 位数（n≥3 ），它的每个位上的数字的 n 次幂之和等于它本身（例如：1^3 + 5^3+ 3^3 = 153）。
#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,d;
	printf("输入正整数3<=a<=7\n");
	scanf("%d",&a);
    b=1;
    c=1;
    while(b<a){
    	b++;
    	c*=10;
	}
	d=c;
	while(d<10*c){
		int e = d;//表示如果三位数，则循环从100开始，以此类推 
		//记录d
		int f = 0;
		int sum=0;
		do{
			int f = e%10;
			//f是e的个位
			e/=10;
            int g = pow(f,a) ;
            sum +=g;
            //是每一位的n次方之和 
		} while(e>0);
		if(sum==d){
			printf("%d\n",d);
		}
		d++;
	}
	
	return 0;
}
