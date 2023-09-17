#include <stdio.h>

int decision(int a, int x, int y){
    if(a >= (x+y)){
        printf("Farei hoje!\n");
    }else{
        printf("Deixa para amanha!\n");
    }
}

int main(){
    
    int remaining_time;
    int t_of_p1, t_of_p2;
    scanf("%d", &remaining_time);
    scanf("%d %d",&t_of_p1,&t_of_p2);

    decision(remaining_time, t_of_p1, t_of_p2);
}
