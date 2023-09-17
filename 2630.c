#include <stdio.h>

int mean(int r, int g, int b){
    return (r+g+b)/3; //return the average of three colors 
}

int min(int r, int g, int b){
    if((r<g) && (r<b)){
        return r;   
        }else{
            if(g<b){
                return g;
            }else{
                return b;
            }
        }
}

int max(int r, int g, int b){
   if((r>g) && (r>b)){
        return r;   
        }else{
            if(g>b){
                return g;
            }else{
                return b;
            }
        }
}

/*int eye(int r, int g, int b){
    return  (.30 * r) + (0.59 * g)+ (0.11 * b);
}
*/

int main(){
    int testcase;
    scanf("%d",&testcase);//input number of cases

    char type[100];
    int r, g, b, p;
    
    for(int i = 1; i <= testcase; i++){
        scanf("%s", &type);
        scanf("%d %d %d", &r, &g, &b);
        if(type == "eye"){
            p = (.30 * r) + (0.59 * g)+ (0.11 * b);
        }else if(type == "mean"){
            p = mean(r, g, b);
        }else if(type == "min"){
            p = min(r, g, b);
        }else if(type == "max"){
            p = max(r, g, b);
        }

        printf("Caso #%d: %d\n", i, p);
    }
}