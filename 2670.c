#include <stdio.h>


int main(){
    unsigned int time[5];
    unsigned int first_floor, second_floor, third_floor;
    

    scanf("%hd %hd %hd", &first_floor, &second_floor, &third_floor);
   
        time[0] = (second_floor*2) + (third_floor*4);
        time[1] = (first_floor*2) + (third_floor*2);
        time[2] = (first_floor*4) + (second_floor*2);

unsigned int min_time = time[0];
    
    for(int i=1;i<3;i++)
    {
        if(min_time > time[i]){
            min_time = time[i];
        }
    }

    printf("%hd\n", min_time);


}