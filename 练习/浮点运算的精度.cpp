#include <stdio.h>
int main()
{
	float a,b,c;// float 表示浮点数
	a=1.345f;
	b=1.123f;
	c=a + b;
	if(c==2.468){
		printf("相等");
	} else {
		printf("不相等，c=%.10f,或%f\n",c,c);//前者是对的 
		return 0;
	}
}
