#include<stdio.h>
#define maxn 105   //��105 �滻maxn
int a[maxn];
int main()
{
int x, n = 0;
while(scanf("%d", &x) == 1)//��  x �ɹ�����ʱ   ����ctrl+z�Ƴ��� 
a[n++] = x;   //�ȸ�ֵa[n] = x����a++ 	���Խ����д��"{a[n]��x��n��n��1��}
for(int i = n-1; i >= 1; i--)
printf("%d ", a[i]);
printf("%d\n", a[0]);
return 0;
}

