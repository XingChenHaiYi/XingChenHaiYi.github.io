#include <stdio.h>
int main()

{
    int a,b,c,d,e,f;
    scanf("%d",&a);//��Ҫ��������
    e =10000000000;//eҪ�㹻�� 
    for(b=0;b<3;b++){
        f = 1;
        scanf("%d %d",&c,&d);//scanf��Ҫ���� 
        while(c*f<a){
            f++;
        }
        if(f*d<e){
            e = d*f;
        }
    }
    printf("%d",e);
    return 0;
}
