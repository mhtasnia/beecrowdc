#include <stdio.h>

int winnerfind(char s[10], char r[10]){
    if (s[0] == r[0] && s[1] == r[1] && s[2] == r[2]) return 0;
    else if (s[0] == 't'  && r[0] == 'p' && r[1] == 'a') return 1; // scissors cuts paper;
    else if (s[0] == 'p' &&  s[1] == 'a' && r[0] == 'p' && r[1] == 'e') return 1; //paper covers rock
    else if (s[0] == 'p' &&  s[1] == 'e' && r[0] == 'l') return 1;//rock crushes lizard;
    else if (s[0] == 'l' &&  r[0] == 'S') return 1;//lizard poisons Spock;
    else if (s[0] == 'S' &&  r[0] == 't') return 1;//Spock smashes scissors;
    else if (s[0] == 't' &&  r[0] == 'l') return 1;//scissors decapitates lizard;
    else if (s[0] == 'l' &&  r[0] == 'p' && r[1] == 'a') return 1;//lizard eats paper;
    else if (s[0] == 'p' &&  s[1] == 'a' && r[0] == 'S') return 1;//paper disproves Spock;
    else if (s[0] == 'S' &&  r[0] == 'p' &&  r[1] == 'e') return 1;//Spock vaporizes rock;
    else if (s[0] == 'p' &&  s[1] == 'e' && r[0] == 't')  return 1;//rock crushes scissors.
    else if (s[0] == 't' &&  r[0] == 'p' && r[1] == 'a') return 1; // scissors cuts paper;

    else return -1;
}

int main(){
    int numoftestcase;
    scanf("%d", &numoftestcase);
    for(int i=0;i<numoftestcase;i++){
        char sheldon[10], raj[10];
        scanf("%s %s",sheldon,raj);
        printf("Caso #%d: ",i+1);
        if(winnerfind(sheldon,raj)==1){
             printf("Bazinga!\n");
        }else if (winnerfind(sheldon,raj)==-1){
            printf("Raj trapaceou!\n");
        }else if(winnerfind(sheldon,raj)==0){
            printf("De novo!\n");
        }
    }  
}