#include <stdio.h>
int main(){
    int n;
    int arr[15];
    
    printf("Enter the valid number of elements: ");
    scanf("%d", &n);
    if(n>=1 && n<=15 ){
        break;
    }
    printf("Enter n number of elements: ");
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Your array is:\n");
    for (int i=0; i<n; i++){
            printf("arr[%d] : %d\n", i,arr[i]);
        }
    return 0;
}