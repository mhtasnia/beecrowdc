#include <stdio.h>

int main() {
  float x;
 scanf("%f", &x);
float y,z;

 if(x<=400.0){
 y=15.0;
z=x*(y/100);
     printf("Novo salario: %.2f\n", x+z);
     printf("Reajuste ganho: %.2f\n", z);
     printf("Em percentual: %.0f %%\n ", y);
 }
 else if(x>400.0&& x<=800.0){
     float y=12.0;
     z=x*(y/100);
     printf("Novo salario: %.2f\n",x+z);
     printf("Reajuste ganho: %.2f\n", z);
     printf("Em percentual: %.0f %%\n", y);

 }
 else if (x>800.0 && x<=1200.0){
     float y=10.0;
     z=x*(y/100);
     printf("Novo salario: %.2f\n",x+z);
     printf("Reajuste ganho: %.2f\n", z);
     printf("Em percentual: %.0f %%\n", y);
 }
 else if(x>1200.0 && x<=2000.0){
     float y=7.0;
     z=x*(y/100);
     printf("Novo salario: %.2f\n",x+z);
     printf("Reajuste ganho: %.2f\n", z);
     printf("Em percentual: %.0f %%\n", y);
 }
 else {
    float y=4.0;
    z=x*(y/100);
     printf("Novo salario: %.2f\n",x+z);
     printf("Reajuste ganho: %.2f\n", z);
     printf("Em percentual: %.0f %%\n", y);
 }
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    return 0;
}

