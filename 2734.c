#include <stdio.h>

int main(){
    int desiredPressure, readPressure;
    scanf("%d %d", &desiredPressure, &readPressure);

    printf("%d\n", desiredPressure - readPressure);
}