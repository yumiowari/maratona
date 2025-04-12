#include <stdio.h>
#include <math.h>

double area(double x1, double y1,
            double x2, double y2,
            double x3, double y3){
    return fabs(x1 * (y2 - y3) +
                x2 * (y3 - y1) +
                x3 * (y1 - y2)) / 2.0;
}

int main(void){
    double x1, y1,
           x2, y2,
           x3, y3,
           xv, yv;

    double A, A1, A2, A3;

    scanf("%lf %lf"
          "%lf %lf"
          "%lf %lf"
          "%lf %lf", &x1, &y1,
                     &x2, &y2,
                     &x3, &y3,
                     &xv, &yv);

    A  = area(x1, y1, x2, y2, x3, y3);
    A1 = area(xv, yv, x2, y2, x3, y3);
    A2 = area(x1, y1, xv, yv, x3, y3);
    A3 = area(x1, y1, x2, y2, xv, yv);

    if(fabs((A1 + A2 + A3) - A) < 1e-6){
        printf("Dentro\n");
    }else{
        printf("Fora\n");
    }

    return 0;
}