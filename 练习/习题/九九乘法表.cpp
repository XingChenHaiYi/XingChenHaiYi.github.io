//�žų˷��� 
//Ҫ����� 
//������n��cong1*1��n*n 
#include <stdio.h>
int main()
{
	int n;
	printf("����������n\n");
	scanf("%d",&n);
	int i;
	int j;
	i=1;
	while(i<=n){
		j=1;
		while(j<=i){
			printf("%d*%d=%d",j,i,j*i);
			if(i*j<10){
				printf("   ");
			}else if(i*j>=10){
				printf("  ");
			}
		    j++;
		}printf("\n");
		i++;
	}
	//��
	    i=0;
		while(i<n){
		i++;
		j=0;
		    while(j<i){
			    j++;
		    	printf("%d*%d=%d",j,i,j*i);
		    	if(i*j<10){
		    		printf("   ");
		    	}else if(i*j>=10){
		    		printf("  ");
		    	}
	    	}printf("\n");
        }
    //����forѭ����
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d*%d=%d",j,i,j*i);
			if(j*i<10){
				printf("   ");
			}else if(j*i>=10){
				printf("  ");
			}
		}printf("\n");
	}
	return 0;
}
