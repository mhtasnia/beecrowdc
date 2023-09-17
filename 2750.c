#include <stdio.h>


char dash(){
     for(int i=1 ;i<40; i++){
        printf("-");
    }
}

char line_num_7(int n){
    for(int i=1; i<40 ;i++){
        if(i==1 || i==39 || i==13 || i==23){
            printf("|");
        }else if(i==8){
            printf("%d", n);
        }else if(i==18){
            printf("%o", n);
        }else if(i==31){
            printf("%x", n);
        }else{
            printf(" ");
        }
    }
}

char line_num_9(int n){
    for(int i=1; i<40 ;i++){
        if(i==1 || i==38 || i==13 || i==22){
            printf("|");
        }else if(i==8){
            printf("%d", n);
        }else if(i==17){
            printf("%o", n);
        }else if(i==30){
            printf("%x", n);
        }else{
            printf(" ");
        }
    }
}

char line_num_15(int n){
    for(int i=1; i<40 ;i++){
        if(i==1 || i==37 || i==12 || i==21){
            printf("|");
        }else if(i==7){
            printf("%d", n);
        }else if(i==16){
            printf("%o", n);
        }else if(i==29){
            printf("%X", n);
        }else{
            printf(" ");
        }
    }
}
char line_print(){
    for(int i=1; i<=40 ;i++){
        if(i==1 || i==13){
            printf("|");
        }else if(i ==4 ){
            printf("decimal");
        }else if((i>1 && i<4) || (i>3+strlen("decimal") && i<13)){
            printf(" ");
        }else if(i==13 || i==23){
            printf("|");
        }else if(i == 16){
            printf("octal");
        }else if((i>13 && i<16) || (i>15+strlen("octal") && i<23)){
            printf(" ");
        }else if(i==23 || i==40){
            printf("|");
        }else if(i==26){
            printf("Hexadecimal");
        }else if((i>23 && i<26) || (i>25+strlen("Hexadecimal") && i<39)){
            printf(" ");
        }
    }

}
int main(){
    
    dash();
    printf("\n");
    line_print();
    printf("\n");
    dash();
    printf("\n");

    for(int j=0; j<8; j++){
        line_num_7(j);
        printf("\n");
    }

    for(int j=8; j<10; j++){
        line_num_9(j);
        printf("\n");
    }

    for(int j=10; j<16; j++){
        line_num_15(j);
        printf("\n");
    }




    dash();
    printf("\n");

    
}