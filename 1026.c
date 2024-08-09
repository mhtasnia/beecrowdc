#include <stdio.h>

int main(void){
    long long int number1, number2;
    while(scanf("%lld %lld", &number1, &number2) != EOF){
        printf("%lld\n", number1^number2);
    }
}