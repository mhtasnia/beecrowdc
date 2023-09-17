#include <stdio.h>

char toorg_answer(){
    printf("I am Toorg!\n");
}

int main(){
    int num_of_question;
    scanf("%d", &num_of_question);
    char question[1000];
    while(num_of_question){
        fgets(question, 998, stdin);
        toorg_answer();
        num_of_question--;
    }

}