//蛇形填数。在n×n方阵里填入1，2，…，n×n，要求填成蛇形。例如，n＝4时方阵为：
//10 11 12 1
//9 16 13 2
//8 15 14 3
//7 6 5 4
#include<stdio.h>
    #include<string.h>
    #define max 20
    int a[max][max];
    int main(){
        int x,y,n,tot=0;
        scanf("%d",&n);
        memset(a,0,sizeof(a));
        tot=a[x=0][y=n-1]=1;//从右上角开始，计数为1
        while(tot<n*n){
            while(x+1<n && !a[x+1][y]) a[++x][y]=++tot;//往下走。先判断是否越界并且对应下标的数组值是否为空，最后赋值。
            while(y-1>=0 && !a[x][y-1]) a[x][--y]=++tot;
            while(x-1>=0 && !a[x-1][y]) a[--x][y]=++tot;
            while(y+1<n && !a[x][y+1]) a[x][++y]=++tot;
        }
        for(x=0;x<n;x++){
            for(y=0;y<n;y++) printf("%3d",a[x][y]);
        printf("\n");
        }
        return 0;
    }
