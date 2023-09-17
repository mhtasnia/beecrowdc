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
    int newindex1, newindex2;

    printf("Enter the value of 1st element: ");
    scanf("%d", &newvalue1);
    printf("Enter the index of 1st element: ");
    scanf("%d", &newindex1);
    printf("Enter the value of 2nd element: ");
    scanf("%d", &newvalue2);
    printf("Enter the index of 2nd element: ");
    scanf("%d", &newindex2);
    if(newindex1<newindex2){
        for (i=n; i>=newindex2-1; i--){
            a[i+2] = a[i];
        }
        for (i=newindex2-1; i>newindex1; i-- ){
            a[i] = a[i-1];
        }
    }else{
        for (i=n; i>=newindex1-1; i--){
            a[i+2] = a[i];
        }
        for (i=newindex1-1; i>newindex2; i-- ){
            a[i] = a[i-1];
        }
    }
    a[newindex1] = newvalue1;
    a[newindex2] = newvalue2;
    printf("Elements of the array are: ");
    for(i=0; i<n+2; i++){
        printf("%d ", a[i]);
    }
    return 0;
}