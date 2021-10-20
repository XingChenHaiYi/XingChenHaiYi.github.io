#include <stdio.h>
int main()
{
    int m,h;
    scanf("%d %d",&m,&h);
    double BMI = m/(h*h);
    if(BMI<18.5){
        printf("Underweight");
    }
    if(BMI>=18.5 && BMI<24){
        printf("Normal");
    }
    if(BMI>24){
        printf("%lf\n",BMI);
        printf("Overweight");
    }
    return 0;
}
//  此为40分答案 
