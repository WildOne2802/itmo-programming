#include <stdio.h>
#include <math.h>
#include "funcs.h"
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main(){
    pentagon figure;
    figure= create_pentagon();
    figure.area = calc_pentagon_perimeter(figure);
    printf("Pentagon's area: %lf", figure.area);
    return 0;
}
