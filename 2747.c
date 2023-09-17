#include <stdio.h>


char dash(){
     for(int i=1 ;i<40; i++){
        printf("-");
    }
}

char line_whitespace(){
    for(int i=1; i<40 ;i++){
        if(i==1 || i==39){
            printf("|");
        }else{
            printf(" ");
        }
    }
}
char line_print(char name[], int n){
    for(int i=1; i<=40-strlen(name) ;i++){
        if(i==1 || i==40-strlen(name)){
            printf("|");
        }else if(i ==n ){
            printf("%s", name);
        }else {
            printf(" ");
        }

}

}
int main(){
    
    dash();
    printf("\n");
    line_print("x = 35",2);
    printf("\n");
    line_whitespace();
    printf("\n");
    line_print("x = 35",17);
    printf("\n");
    line_whitespace();
    printf("\n");
    line_print("x = 35",33);
    printf("\n");
    dash();
    printf("\n");

    
}