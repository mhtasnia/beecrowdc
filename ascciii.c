  #include <stdio.h>
#include <math.h>
int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        char c1, c2;
        scanf(" %c %c", &c1, &c2);  
        
        int gap = (int)c2 - (int)c1; 
        //printf("%d\n", product);
        
        
        int row = 1;
        for (int i =1; i<=gap; i++){
            if(gap % i == 0){
                row = i;
                if(row * (94/row) >= 94){
                printf("%d %d\n", row, 94/row);
                }else{
                    printf("%d %d\n", row, 94/row + 1 );
                }
            }
        }
    }
    
    return 0;
}