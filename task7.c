#include <stdio.h>
#include <math.h>


//задание 7, вариант 7.


enum confectionary{
    cake,
    cupcake,
    icecream,
    candy
};
union printerStatus{
    struct {
        unsigned ready: 1;
        unsigned lowTonerLevel: 1;
        unsigned damagedRoller: 1;
        unsigned noPaper: 1;
    }status;
    unsigned pState;
};
typedef struct {
    float x, y;
} Vec;

typedef struct {
    Vec a, b, c, d;
} square;

float distance(Vec a, Vec b){
    float dx = a.x - b.x;
    float dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

float calcPerimeter(square square){
    float ab = distance(square.a, square.b);
    float bc = distance(square.b, square.c);
    float cd = distance(square.c, square.d);
    float da = distance(square.d, square.a);
    return ab + bc + cd + da;
}
int main(){
    printf("==== Task 1 ====\n");
    printf("%i\n",candy);
    printf("==== Task 2 ====\n");
    square square = {
            {0, 1},
            {1, 1},
            {1, 0},
            {0, 0}
    };
    float p = calcPerimeter(square);
    printf("Perimeter of square = %f\n", p);
    printf("==== Task 3 ====\n");
    printf("Enter hexadecimal number to fill bitfield: \n");
    union printerStatus stat;
    scanf("%x",&stat.pState);

    printf("Printer ready: %s \n", (stat.status.ready) ? "ON" : "OFF");

    printf("Low Toner Level: %s \n", (stat.status.lowTonerLevel) ? "ON" : "OFF");

    printf("Roller is damaged:: %s \n", (stat.status.damagedRoller) ? "ON" : "OFF");

    printf("No paper: %s \n", (stat.status.noPaper) ? "ON" : "OFF");

    return 0;
}