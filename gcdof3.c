#include <stdio.h>

int gcd(int a, int b);

int main(){
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);

    n1 = (n1<0) ? -n1 : n1;
    n2 = (n2<0) ? -n2 : n2;
    n3 = (n3<0) ? -n3 : n3;

    int res = gcd(n1, n2);
    res = gcd(res, n3);
    printf("%d\n", res);
}

int gcd(int a, int b){
    while(a != b){
        if (a > b) a -= b;
        else b -= a;
    }
    return a;
}