#include <stdio.h>

int main()
{
	printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ�磬");
	
	double foot,inch;
	
	scanf("%lf %lf",&foot, &inch);
	
	printf("�����%f�ס�\n",
	((foot + inch / 12)* 0.3048));
	
	return 0;
}
