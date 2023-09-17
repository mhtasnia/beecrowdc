#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char sen[1000];
    scanf("%s", sen);
    int p =strlen(sen);
    int count;
    for(int j=48; j<=57; j++)
    {
        count =0;
        for(int i=0; i<p; i++)
        {
            if(sen[i] == j) count++;
        }
        printf("%d ",count);
    }
   

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
