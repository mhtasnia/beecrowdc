// #include <stdio.h>
// #include <math.h>

// int main(){
//     double sa;
    
//     while(scanf("%lf", &sa) != EOF && sa != -1){
//         double vol = pow((sqrt(sa / (1 + sqrt(3)))), 3) / (3 * sqrt(2));
//         printf("%.4lf\n", vol);
//     }
// }

#include <stdio.h>
#include <math.h>

int main() {
    double sa;
    const double c1 = 1 + sqrt(3);
    const double c2 = 3 * sqrt(2);

    while (scanf("%lf", &sa) != EOF && sa != -1) {
        double a = sqrt(sa / c1);
        double vol = pow(a, 3) / c2;
        printf("%.4lf\n", vol);
    }

    return 0;
}