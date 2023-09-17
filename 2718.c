#include <stdio.h>
#include <string.h>

long long convert(int n) {

  long long bin = 0;
  int rem, i = 1;
  while (n != 0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }

  return bin;
}

int repeated_1(char s[100]){
    
    int ans = 1, temp = 1;
 
    // Traverse the string
    for (int i = 1; i < sizeof(s); i++) {
        // If character is same as
        // previous increment temp value
        if (s[i] == s[i - 1]) {
            ++temp;
        }
        else {
            ans = max(ans, temp);
            temp = 1;
        }
    }
    ans = max(ans, temp);
 
    // Return the required answer
    return ans;
}


int main(){
    int n;
    scanf("%d",&n);

    while(n){
    long long int num = convert(n);

    
    printf("Repeated digits in binary representation of number: ");
    }
}