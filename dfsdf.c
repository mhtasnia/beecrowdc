#include <stdio.h>
#include <string.h>

int main() {
   char str[100][50], temp[50];
   int n ,m;

   scanf("%d %d", &n, &m);

   // Getting strings input
   for (int i = 0; i <= n; i++) {
      fgets(str[i], sizeof(str[i]), stdin);
   }

   // storing strings in the lexicographical order
   for (int i = 0; i <=m; i++) {
      for (int j = i + 1; j <=m; j++) {

         // swapping strings if they are not in the lexicographical order
         if (strcmp(str[i], str[j]) > 0) {
            strcpy(temp, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp);
         }
      }
   }

   for (int i = 1; i <=m; i++) {
      fputs(str[i], stdout);
   }
   return 0;
}