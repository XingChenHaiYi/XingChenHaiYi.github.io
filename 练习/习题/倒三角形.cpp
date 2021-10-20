//输入正整数n≤20，输出一个n层的倒三角形。例如，n＝5时输出如下：
//#########
// #######
//  #####
//   ###
//    #
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a,m,p,q;
	q = n;
	for(m = 1;m<=q;m++){//m = 1时，p = m，无空格； m= 2，1空格； 
		for(p = 1;p<m;p++){
			printf(" ");
		}
    	for(a = 2*n-1; a>0;a--){
	    	printf("#");
	    }
	    printf("\n");
	    n--;
    }
    return 0;
}
