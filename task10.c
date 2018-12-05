#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//
void getDigits(int **digits, int *count, int n){
    *count = (int) (log10(n) + 1);
    *digits = malloc(sizeof(int) * *count);
    int m = n;
    for(int i = *count - 1; i >= 0; i--){
        *((*digits) + i) = m % 10;
        m /= 10;
    }
}

int recurseSum(int sum, int i, int *digits, int count){
    if(i >= count)
        return sum;
    return recurseSum(sum + digits[i], i + 1, digits, count);
}
void distance(int number, int * X, int * Y) {
    double **dist = (double **) malloc(number * sizeof(double *));
    for (int i = 0; i < number; i++)
        dist[i] = (double *) malloc((number - 1) * sizeof(double));
    for (int i = 0; i < number; i++) {
        for (int k = 0; k < i; k++)
            dist[i][k] = sqrt(pow(X[i] - X[k], 2) + pow(Y[i] - Y[k], 2));
        for (int k = i + 1; k < number; k++)
            dist[i][k - 1] = sqrt(pow(X[i] - X[k], 2) + pow(Y[i] - Y[k], 2));
    }
    for (int k = 0; k < number - 1; k++) {



        for (int i = 0; i < number; i++)
            printf("%.3lf ", dist[i][k]);
        printf("\n");
    }

}


int main(int c, char **args){
    // ==== "Task 2" ====
    printf("Enter amount of points:\n");
    int q;
    scanf("%i",&q);
    int * x = (int *)malloc(q * sizeof(int));
    int * y = (int *)malloc(q * sizeof(int));
    printf("Enter x ane y of each point\n");
    x[0] = 1;
    for (int i = 0; i < q; i++)
        scanf("%d %d", x + i, y + i);
    for (int i = 0; i < q; i++)
        printf("x[%d] = %d y[%d] = %d\n", i, x[i], i, y[i]);
    distance(q, x, y);

    // ==== "Task 4" ====
    printf("Enter number:\n");
    int n = 0;
    scanf("%d", &n);
    int *digits = 0;
    int digitsCount = 0;
    getDigits(&digits, &digitsCount, n);

    int sum = recurseSum(0, 0, digits, digitsCount);
    printf("Sum = %d\n", sum);

    return 0;
}