#include <stdio.h>

int main(void){
    int number1, number2;
    while(scanf("%d %d", &number1, &number2) != EOF){
        // printf("%d\n", number1^number2);
        printf("%d\n", (~number1&number2)|(number1&(~number2)));
    }
}