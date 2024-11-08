#include <stdio.h>

int prefixsumarray(int input_arr[], int n, int output_arr[]);

int main(){
    int n;
    scanf("%d", &n);
    int input_arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &input_arr[i]);
    }
    int output_arr[n];
    prefixsumarray(input_arr, n, output_arr);
    for(int i = 0; i < n; i++){
        printf("%d ", output_arr[i]);
    }
}

int prefixsumarray(int input_arr[], int n, int output_arr[]){
    output_arr[0] = input_arr[0];
    for(int i = 1; i < n; i++){
        output_arr[i] = output_arr[i - 1] + input_arr[i];
    }
    return *output_arr;
}