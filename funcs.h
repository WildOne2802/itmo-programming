#ifndef _funcs_h_
#define _funcs_h_
typedef struct{
    double x1; double y1;
    double x2; double y2;
    double x3; double y3;
    double x4; double y4;
    double x5; double y5;
    double area;
    double perimeter;
}pentagon;
double calc_pentagon_perimeter(pentagon);
pentagon create_pentagon();
#endif