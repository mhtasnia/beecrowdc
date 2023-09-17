#include <stdio.h>

int main(){
    //traverse
    int a[10], n, i;
    printf("Enter the value of n = ");
    scanf("%d", &n); 
    printf("Enter %d values for the array: ",n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Elements of the array are: ");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}