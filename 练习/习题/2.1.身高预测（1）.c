#include <stdio.h>
int main()
{
	char sex,sports,diet; //(分别为 性别 是否喜爱体育锻炼 是否有良好的饮食习惯)
	double faHeight,moHeight,Height;//分别为父母身高和用户身高 
	printf("分别输入父母身高\n");
	scanf("%lf %lf",&faHeight,&moHeight);
	printf("输入用户性别F（女性）或M（男性）\n");
	scanf(" %c",&sex);
	printf("输入是（Y）否（N）喜爱体育锻炼\n");
	scanf(" %c",&sports);
	printf("输入是（Y）否（N）有良好的饮食习惯\n");
	scanf(" %c",&diet); 
	if(sex=='F'){
		Height=(faHeight*0.923+moHeight)/2;
	} else if(sex=='M'){
		Height=(faHeight+moHeight)*0.54;
	}
	//得出用户正常情况身高 
	if(sports=='Y') Height*=1.02;//判断是否喜欢运动并计算 
	if(diet=='Y') Height*=1.015;//判断是否有良好的饮食习惯并计算
	printf("用户身高为%lf",Height);
	return 0; 
}
