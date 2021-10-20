//开灯问题。
//有n盏灯，编号为1～n。第1个人把所有灯打开，第2个人按下所有编号为2的倍数的开关（这些灯将被关掉），
//第3个人按下所有编号为3的倍数的开关（其中关掉的灯将被打开，开着的灯将被关闭），
//依此类推。一共有k个人，问最后有哪些灯开着？
//输入n和k，输出开着的灯的编号。k≤n≤1000。
//样例输入：
//7 3
//样例输出：
//1 5 6 7
# include<stdio.h>
# include<string.h>
int main()
{
	int n,m,o;
	scanf("%d",&n); 
	m = n+1;
	int a[m];
	scanf("%d",&o);
	//a[m] = {0};// a【】要初始化，否则a【】会不为0； 或者如下 
	memset(a,0,sizeof(a));// memset（a，0，sizeof（a））作用是清楚数组；别忘了 string.h
	int b,c,d;
	for(b = 1;b<=o;b++)
	{
		c = 1;
		for(;c<=n;c++){
			if(c%b == 0){
				a[c]++;
				//printf("a[%d] = %d ",c,a[c]);   调试用 
			}
		}
		//printf("\n");
	}
	for(d = 1;d<=n;d++){
		if(a[d]%2!=0)
		printf("%d ",d);
	}
	return 0;
}
