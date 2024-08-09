#include <stdio.h>

long long int josephus(int n, int k){
    if (n == 1) return 1;
    else return (josephus(n-1, k) + (k-1) ) % n + 1;
} 

int main(){
    int number_of_cases;
    scanf("%d", &number_of_cases);


    long long int n, k;
    //n is the number of soldiers 
    //k is the steps
    for (int i=0; i<number_of_cases; i++)
    {
        scanf("%lld %lld", &n, &k);
        printf("Case %d: %lld\n", i+1, josephus(n, k));
    }
}

