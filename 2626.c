#include <stdio.h>
#include <string.h>


int out_put(int sum_of_button){
  switch(sum_of_button){
      case 0:
        printf("PROXYCITY\n");
        break; 
      case 1:
        printf("P.Y.N.G.\n");
        break; 
      case 2:
        printf("DNSUEY!\n");
        break; 
      case 3:
        printf("SERVERS\n");
        break; 
      case 4:
        printf("HOST!\n");
        break; 
      case 5:
        printf("CRIPTONIZE\n");
        break; 
      case 6:
        printf("OFFLINE DAY\n");
        break; 
      case 7:
        printf("SALT\n");
        break; 
      case 8:
        printf("ANSWER!\n");
        break; 
      case 9:
        printf("RAR?\n");
        break; 
      case 10:
        printf("WIFI ANTENNAS\n");
        break; 
      
    }
}


int main() {
  int num_of_case;
  int button_1, button_2;
  
  scanf("%d",&num_of_case);
  while(num_of_case){
    scanf("%d %d",&button_1, &button_2);
    int sum = button_1 + button_2;
    out_put(sum);
    num_of_case--;

  }
return 0;
}


