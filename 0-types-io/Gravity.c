//
// Created by 33133 on 2024/4/5.
//
#include <stdio.h>

int main(){
    const double G = 6.674e-11;

    const double M = 77.15;

    double m , R;
    scanf("%lf %lf",&m,&R);

    double F = (G *M *m )/(R*R);
    printf("%.3e\n\n",F);
    return 0;
}