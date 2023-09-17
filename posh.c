#include <stdio.h>
#include <string.h>

int sumOfDigits(int num) {
    int sum = 0;
    
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    
    return sum;
}

int poshDigit(int num) {
    // Calculate the sum of digits of num
    int digitSum = sumOfDigits(num);
    
    // If the sum is a single digit, return it
    if (digitSum < 10) {
        return digitSum;
    }
    
    // Otherwise, recursively calculate the posh digit of the sum
    return poshDigit(digitSum);
}

int main() {
    char n[100000];
    int k;
    
    scanf("%s %d", n, &k);
    
    // Repeat n k times
    char p[100000];
    int len = strlen(n);
    
    for (int i = 0; i < k; i++) {
        strcat(p, n);
    }
    
    // Calculate the posh digit of p
    int result = poshDigit(atoi(p));
    
    // Print the result
    printf("%d\n", result);
    
    return 0;
}
