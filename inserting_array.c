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
    int newvalue1, newvalue2;
    printf("Enter the value of 2 new element: ");
    scanf("%d %d", &newvalue1, &newvalue2);
    int newindex;
    printf("Enter the index of new element: ");
    scanf("%d", &newindex);

    for (i=n; i>=newindex; i--){
        a[i+2] = a[i];
    }
    a[newindex] = newvalue1;
    a[newindex+1] = newvalue2;
    printf("Elements of the array are: ");
    for(i=0; i<n+2; i++){
        printf("%d ", a[i]);
    }
    return 0;
}