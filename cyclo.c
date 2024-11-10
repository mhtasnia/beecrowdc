#include <stdio.h>

int main(){
    int x, y;
    printf("Enter the value of x: ");
    scanf("%d %d", &x, &y);
    if(x>0){
        if(y>0){
            printf("");
        }else{
            printf("");
        }
    }else{
        if(y>0){
            printf("");
        }else{
            printf("");
        }
    }
    for(int i=0; i<x; i++){
        printf("");
        if(i == y){
            printf("");
            break;
        }
    }
    return 0;
}