//输入两个正整数n＜m＜10^6，
//输出  1/n^2 + 1/(n+1)^2+……+1/m^2，保留5位小数。输入包含多组数据，
//结束标记为n＝m＝0。提示：本题有陷阱。
//样例输入：
//2 4
//65536 655360
//0 0
//样例输出：
//Case 1: 0.42361
//Case 2: 0.00001
#include <stdio.h>
#include <math.h>
int main()
{
	int n,m;
	int a;
	long long b;//当输入 65536 655360，b会超过范围，要longlong  或者用1.0分别除以两次； 
	double c;
	double sum;
	while(scanf("%d %d",&n,&m)){
		sum = 0;
	    if(m==0&&n==0)break;
	    for(a = n;a<=m;a++){
		    b = pow(a,2);
		    c = 1.0/b;//浮点数一定要注意1.0； 
		    sum+=c;
	    }
	    printf("%.5lf\n",sum);
    }
	return 0;
}
