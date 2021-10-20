#include <stdio.h>
int main()
{
	int x = 0;
	printf("输入x的值");
	scanf("%d",&x);
	
	int n = 0;
	if(x>999){
		n = 4;
	}else if(x>99){
	    n = 3;
    }else if(x>9){
    	n = 2;
	}else{
		n = 1;
	}
	printf("这个数是%d位数",n);
	return 0;
}
