#include <stdio.h>
int main(){

  int a[100][100], b[100][100], c[100][100];
  int n, m;
  printf("Enter row numbers:");
  scanf("%d", &n);
  printf("Enter column numbers:");
  scanf("%d", &m);

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
    printf("Enter a[%d][%d]:" ,i, j);
    scanf("%d", &a[i][j]);
    }
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
    printf("Enter b[%d][%d]:" ,i, j);
    scanf("%d", &b[i][j]);
    }
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
    c[i][j] = a[i][j] + b[i][j];
    }
  }
  for(int i =0 ;i<n; i++)
  {
    for(int j=0 ;j<m; j++)
    {
    printf("%4d ", c[i][j]);
    }printf("\n");
  }

}
