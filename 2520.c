#include <stdio.h>

int main() {
    //2520
     /*
 char str[100];
 while(scanf("%s" , &str) != EOF)
 { 

    int n;
    scanf("%d", &n);

    int arr[n];
    
    for(int i =0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int j = 0; j<n; j++)
    {
        printf("%c", str[arr[j]-1]);
    }
    printf("\n");
    }
    */

int n;
while (scanf("%d" ,&n) != EOF)
{
    double a = 0.0;
    double b = 0.0;
    double arr_n[100];
    double arr_c[100];
    for(int i= 0; i<n; i++)
    {
        scanf("%lf %lf",&arr_n[i], &arr_c[i]);
        a += arr_n[i] * arr_c[i];
        b += arr_c[i];
    }
    //an additional 0.0005 is being added to the res
    double res = a/(b*100);
    printf("%0.4lf", res);
}


 }







