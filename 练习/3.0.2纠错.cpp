#include <stdio.h>
int main()
{
	int cm;
	scanf("%d",&cm);
	int foot,inch;
	foot = cm/30.48;
	double feet = cm/30.48;
	inch =(feet-foot)*12;
	printf("%d %d",foot,inch);
	return 0; 
	 
}
