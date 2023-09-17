#include <stdio.h>
int main(){
    int distance;
    int point;
    scanf("%d", &distance);
    if(distance <= 800){
        point=1;
    }else if(distance>800 && distance<=1400){
        point=2;
    }else{
        point =3;
    }
    printf("%d\n",point);
}
