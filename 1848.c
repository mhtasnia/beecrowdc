#include <stdio.h>
#include <math.h>
#include <string.h>
//1848
int binaryToDecimal(int binaryNumber) {
    int decimalNumber = 0, i = 0, remainder;
    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }
    return decimalNumber;
}

int number(char num[30]){
    int sum =0;
    for(int i =0; i<strlen(num); i++){
        if(num[i] == '*'){
            sum*=10;
            sum+=1;
        }else if(num[i] == '-'){
            sum*=10;
        }
        
    }
    
    return sum; 
}

int main(){
    char num[30];
    int p;
    int n=0;
    long long int res = 0;
while(gets(num)){
    if(strcmp("caw caw", num) !=0){
        res+=binaryToDecimal(number(num));
    }
    if(strcmp("caw caw", num) == 0){
        printf("%d\n", res);
        res = 0;
    }
  }


}