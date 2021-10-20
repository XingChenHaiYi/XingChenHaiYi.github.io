#include <stdio.h>
int main()
{
	double a = 3.0e-2;
	double b = 3.e-2;
	if(a==b)printf("ok");
	else printf("No");
	return 0; 
}
