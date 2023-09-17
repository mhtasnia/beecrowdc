#include <stdio.h>
#include <string.h>

int winner(char a[], char b[]){
    int winner;
    if((a=="tesoura" && b=="papel" )||(a=="tesoura" && b=="lagarto" )){
        winner == 1;
    }else if((a=="papel" && b=="pedra") || (a=="papel" && b=="Spock")){
        winner == 1;
    }else if(a=="pedra" && (b=="laganto" || b == "tesoura")){
        winner == 1;
    }else if(a=="lagarto" && (b=="papel" || b == "Spock")){
        winner == 1;
    }else if(a=="Spock" && (b=="pedra" || b == "tesoura")){
        winner == 1;
    }else{
        winner ==2;
    }
return winner;
}

int main(){
    int n;
    scanf("%d", &n);

    char a[100], b[100];

    for(int i=0; i<n; i++){
        scanf("%s %s", a,b);
        if(strcmp(a,b) == 0){
        printf("Caso #%d: De novo!\n", i+1);
    }else{
        
        if(winner(a,b)==1){
            printf("Caso #%d: Bazinga!\n",i+1);
        }else if(winner(a,b)==2){
            printf("Caso #%d: Raj trapaceou!\n",i+1);
        }
        
    }
    
}

}