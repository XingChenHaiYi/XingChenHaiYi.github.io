#include<stdio.h>
#define maxn 105   //用105 替换maxn
int a[maxn];
int main()
{
int x, n = 0;
while(scanf("%d", &x) == 1)//当  x 成功读入时   熟人ctrl+z推出； 
a[n++] = x;   //先赋值a[n] = x；再a++ 	可以将其改写成"{a[n]＝x；n＝n＋1；}
for(int i = n-1; i >= 1; i--)
printf("%d ", a[i]);
printf("%d\n", a[0]);
return 0;
}

