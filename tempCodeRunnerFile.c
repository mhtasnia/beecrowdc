#include <stdio.h>

int countCorrectTea(int arr[], int T){
    int count = 0;
    for(int i=0; i<5; i++){
        if(arr[i] == T){
            count++;
        }
    }
    return count;
}

void main(){
    int T;
    int arr[5];

    scanf("%d", &T);
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d\n", countCorrectTea(arr, T));

}