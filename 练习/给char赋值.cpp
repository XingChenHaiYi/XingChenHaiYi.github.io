#include <stdio.h>
int main()
{
	char c;
	char d;
	c = 1;
	d='1';
	if(c==d){
		printf("相等\n");
	}else{
		printf("不相等\n");//答案不相等，因为他们c是数字1，d是字符1 
	}
	printf("c=%d\n",c);//1
	printf("d=%d\n",d);//49   49='1',65='A'
	char a;
	scanf("%c",&a);//输入字符%c 
	printf("c=%d\n",a);//输出整数值a  若输入1（字符），输出为49（‘1’代表的整数值），下面为1 
	printf("c='%c'\n",a);//把a当作字符输出多少 输入a则输出a，输入数字则输出数字（无论是否运算过） 
	char b;
	int i;
	scanf("%d",&i);//scanf%d只能处理 int 不能处理char;
	b=i; 
	printf("c=%d\n",c);//如果输入1，输出1和‘’1代表的字符输出不了因为没有，如果输入49，输出49与‘1’ 
	printf("c='%c'\n",c);
	return 0;
}
