#include <stdio.h>



//Задание 9, вариант 7




int isPrime(int n){
    int c;
    for (c = 2 ; c <= n - 1; c++) {
        if(n % c == 0)
            break;
    }
    return c == n;
}
int main() {
    int duration;
    int fee;
    int feeForLimitOverrun;
    int limit = 499;
    printf("%s\n","==== TASK 2 ====");
    printf("%s\n","Enter vremya");
    scanf("%i",&duration);
    printf("%s\n","Enter stoimost za mesyac");
    scanf("%i",&fee);
    printf("%s\n","Enter stoimost za minutu pri prevyshenii tarifa");
    scanf("%i",&feeForLimitOverrun);
    printf("$$$ per month:\n");
    if(duration<=limit){
        printf("%i\n",fee);
    }
    else {
        if (feeForLimitOverrun <= (fee / limit))
            printf("Wrong input, minuta sverh stoit menshe minuty tarifa\n");
        else {
            duration = duration - limit;
            printf("%i\n", duration * feeForLimitOverrun + fee);
        }
    }
    printf("%s\n","==== TASK 4 ====");
    printf("%s","Enter last number to loop to:\n");

    int n = 0;
    scanf("%d", &n);

    for(int i = 0; i <= n; i++){
        if(isPrime(i))
            printf("%d ", i);
    }
    return 0;
}