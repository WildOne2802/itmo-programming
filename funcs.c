#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
#include "funcs.h"
#include <math.h>
#include <stdio.h>

double calc_pentagon_perimeter(pentagon figure) {
    double line1 = sqrt(pow((figure.x2 - figure.x1), 2) + pow((figure.y2 - figure.y1), 2));
    double line2 = sqrt(pow((figure.x3 - figure.x2), 2) + pow((figure.y3 - figure.y2), 2));
    double line3 = sqrt(pow((figure.x4 - figure.x3), 2) + pow((figure.y4 - figure.y3), 2));
    double line4 = sqrt(pow((figure.x5 - figure.x4), 2) + pow((figure.y5 - figure.y4), 2));
    double line5 = sqrt(pow((figure.x1 - figure.x5), 2) + pow((figure.y1 - figure.y5), 2));
    figure.perimeter=line1 + line2 + line3 + line4 + line5;
    return figure.perimeter;
}

pentagon create_pentagon() {
    pentagon figure;
    printf("Enter x1, y1, x2, y2 ... x5, y5\n");
    scanf("%lf %lf", &figure.x1, &figure.y1);
    scanf("%lf %lf", &figure.x2, &figure.y2);
    scanf("%lf %lf", &figure.x3, &figure.y3);
    scanf("%lf %lf", &figure.x4, &figure.y4);
    scanf("%lf %lf", &figure.x5, &figure.y5);
    return figure;
}