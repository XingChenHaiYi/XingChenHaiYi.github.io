//����������n��20�����һ��n��ĵ������Ρ����磬n��5ʱ������£�
//#########
// #######
//  #####
//   ###
//    #
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a,m,p,q;
	q = n;
	for(m = 1;m<=q;m++){//m = 1ʱ��p = m���޿ո� m= 2��1�ո� 
		for(p = 1;p<m;p++){
			printf(" ");
		}
    	for(a = 2*n-1; a>0;a--){
	    	printf("#");
	    }
	    printf("\n");
	    n--;
    }
    return 0;
}
