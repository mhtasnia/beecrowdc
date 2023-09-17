#include <stdio.h>
#include <string.h>


int main(){
    char vehicle[100];
    int num_of_passenger;
    int visitor_passenger;
    int v_vehicle;
    v_vehicle=visitor_passenger=0;
    while(1){
        fgets(vehicle, 100, stdin);
        
        if((strcmp(vehicle, "ABEND"))==1){
            printf("a\n");
            break;
        }
    
        scanf("%d", &num_of_passenger);
        if((strcmp(vehicle ,"SALIDA")) == 1){
            printf("s\n");
            v_vehicle++;
            visitor_passenger += num_of_passenger;
        }else if((strcmp(vehicle,"VUELTA")) == 1) {
            printf("V\n");
            v_vehicle--;
            visitor_passenger -= num_of_passenger;
        }
        
    }
    printf("%d\n%d\n",visitor_passenger, v_vehicle);
}