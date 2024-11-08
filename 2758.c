#include<stdio.h>
int main()
{
    float A,B;
    double C,D;
    scanf("%f %f",&A,&B);
    scanf("%lf %lf",&C,&D);

    printf("A = %f, B = %f\n",A,B);
    printf("C = %lf, D = %lf\n",C,D);

    printf("A = %.1f, B = %.1f\n",A,B);
    printf("C = %.1lf, D = %.1lf\n",C,D);

    printf("A = %.2f, B = %.2f\n",A,B);
    printf("C = %.2lf, D = %.2lf\n",C,D);

    printf("A = %.3f, B = %.3f\n",A,B);
    printf("C = %.3lf, D = %.3lf\n",C,D);

    printf("A = %.03lE, B = %.03lE\nC = %.3E, D = %.3E\n",A,B,C,D);

    printf("A = %d, B = %d\n",(int)A,(int)B);
    printf("C = %06d, D = %d\n",(int)C,(int)D);

    return 0;
}