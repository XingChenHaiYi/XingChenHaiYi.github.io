//���дһ����������û���������ֵ�ƽ��������������д���ƽ�������� 
#include <stdio.h>
//������
 int main()
{
	int x;
	int sum = 0;
	int count = 0;
	int number[100];    //�����±���number������һ�����飬ÿ����Ԫ��int����С��100 
	do{
		scanf("%d",&x);
	
		if( x != -1){
		
		    sum+=x;
		    count++;
		    number[count] = x ;//countһ��ʼ��0������֮����1�����ϵ��� ����һ����number�е�count����Ԫ����x 
		    //�������е�Ԫ�ظ�ֵ 
		    //�����������ԵĴ��� 
		    {
		    	int i;
		    	printf("%d\t",count);
		    	for(i=1;i<=count;i++){
		    		printf("%d\t",number[i]);//��ʾÿ����Ԫ������ 
				}
		    	printf("\n");
			}
		    //���� 
	    }   
	}while( x != -1);
//  ����-1ʱֹͣ	
	printf("ƽ������%lf\n",1.0*sum/count);
	int i;
	for(i=1;i<=count;i++){
		if(number[i]>sum/count){
			printf("%d\n",number[i]);
		}//ʹ�������е�Ԫ�� 
	}//�������� 
	return 0;
}
//���������Σ�յģ���Ϊ��������ݿ��ܳ���100�� 
//��c99����԰�number[100]�ĳ�number[count] 
