//
// Created by 33133 on 2024/4/5.
//
#include <stdio.h>
#include <math.h>

int main(){
    float p , q;
    double x;
    scanf("%f %f",&p,&q);
    double a = -q/2;
    double m = (q/2);
    double n = (p/3);
    double discriminant = m * m + n * n * n;
    x = cbrt(a+ sqrt(discriminant))+ cbrt(a- sqrt(discriminant));
    printf("%.3lf\n",x);
    return 0 ;
}