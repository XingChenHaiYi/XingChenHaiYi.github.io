#include <stdio.h>
int main()
{
	char sex,sports,diet; //(�ֱ�Ϊ �Ա� �Ƿ�ϲ���������� �Ƿ������õ���ʳϰ��)
	double faHeight,moHeight,Height;//�ֱ�Ϊ��ĸ��ߺ��û���� 
	printf("�ֱ����븸ĸ���\n");
	scanf("%lf %lf",&faHeight,&moHeight);
	printf("�����û��Ա�F��Ů�ԣ���M�����ԣ�\n");
	scanf(" %c",&sex);
	printf("�����ǣ�Y����N��ϲ����������\n");
	scanf(" %c",&sports);
	printf("�����ǣ�Y����N�������õ���ʳϰ��\n");
	scanf(" %c",&diet); 
	if(sex=='F'){
		Height=(faHeight*0.923+moHeight)/2;
	} else if(sex=='M'){
		Height=(faHeight+moHeight)*0.54;
	}
	//�ó��û����������� 
	if(sports=='Y') Height*=1.02;//�ж��Ƿ�ϲ���˶������� 
	if(diet=='Y') Height*=1.015;//�ж��Ƿ������õ���ʳϰ�߲�����
	printf("�û����Ϊ%lf",Height);
	return 0; 
}
