#include <stdio.h>

int is_prime(int num){
    int flag = 1;
    if(num ==0 || num==1){
            flag = 0;
        }else{
            for(int j=2; j<=num/2; j++){
        if(num%j == 0){
            flag = 0;
            break;
        }
    }
        }
        
    return flag;
}

int main(){
    int n, interval;
    
    while(scanf("%d", &n) != EOF){
        int coin_value[n];
        for(int i=0; i<n; i++){
            scanf("%d",&coin_value[i]);
        }

        scanf("%d", &interval);

        int sum = 0;
        for(int i=0; i<n; i+=interval){
            sum+=coin_value[i];
        }

        if(is_prime(sum)){
            printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
        }else{
            printf("Bad boy! I’ll hit you.\n");
        }

        
    }
}