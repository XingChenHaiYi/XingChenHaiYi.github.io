//����һ����A����2�� 
//�����3��<=A+3������ɵ������ļ��� 
//Ҫ���С����ÿ��������֮��ո� 
#include <stdio.h>
int main()
{
	int a,i,j,k;
	int count=0;
	//countΪ������ 
	printf("��������");
	scanf("%d",&a);
	for(i=a;i<=a+3;i++){
		for(j=a;j<=a+3;j++){
			for(k=a;k<=a+3;k++){
                if(i!=j &&i!=k &&j!=k){
					    count++;
					    printf("%d%d%d",i,j,k);
					    if(count%6!=0){
						    printf(" ");
					    }else if(count%6==0){
						    printf("\n");
					    }
					}
				}	
			}
		}
	return 0;
}

