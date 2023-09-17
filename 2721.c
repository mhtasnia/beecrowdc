#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double n;
    scanf("%lf", &n);
    
    double m = (((2*n)+4)/2)-n;
    
    if(m%1.0 == 0){
        printf("%d\n", m);
    }
    else printf("%.1lf\n", m);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
