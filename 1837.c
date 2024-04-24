# include <stdio.h>
#include <math.h>

void main(){
    int a, b;
    float q, r;
    scanf("%d %d", &a, &b);
    if(a >0){
    q = (float)(a/b);
    r = a - (b*q);
    }else{
        q =  (a/b);
        if(q < 0){
            q --;
        }else{
            q++;
        }
        r = a - (b*q);
    }
    printf("%d %d\n", (int)q, (int)r);
}