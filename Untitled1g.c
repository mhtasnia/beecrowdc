#include <stdio.h>

int main() {
    int x,y,i,sum=0;
    int max,min;
    scanf("%d%d",&x,&y);
    if(x>y){
        min=y;
        max=x;
    }
    else{
        min=x;
        max=y;
    }
    for(i=min+1;i<max;i++){
        if(i%2!=0){
            sum=sum+i;
        }


    }
    printf("%d\n",sum);

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    return 0;
}
