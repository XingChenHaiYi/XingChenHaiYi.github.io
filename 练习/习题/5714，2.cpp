#include <stdio.h>
int main()
{
    double m,h;
    scanf("%lf %lf",&m,&h);
    double BMI = m/(h*h);
    if(BMI<18.5){
        printf("Underweight");
    }
    if(BMI>=18.5 && BMI<24){
        printf("Normal");
    }
    if(BMI>24){
        int c = 11;
        double e = BMI;
        int d = 0;
        while(c>10){
            c = e;
            e = e/10;
            d++;
        }
        int f;
        f = 6-d;
        if(f == 4){
        printf("%.4lf\n",BMI);
        }
        if(f == 3){
        printf("%.3lf\n",BMI);
        }
        if(f == 2){
        printf("%.2lf\n",BMI);
        }
        if(f == 1){
        printf("%.1lf\n",BMI);
        }
        if(f <= 0){
        printf("%lf\n",BMI);
        }
        printf("Overweight");
    }
    return 0;
}
