#include <stdio.h>

int main() {
    /*int n;
    scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i-1; j++) {
      printf(" ");
    }
    for (int j = 0; j <= i; j++) {
      if(j<i)printf("* ");
      else printf("*");}
    printf("\n");
  }printf("\n");*/

  int arr[3][3]= {{1,2,4}, {2,3,4}, {2,6,9}};
  for(int i=0; i<3; i++){
    for(int j= 0; j<3; j++){
      if(arr[i][j] %2 ==0){
        arr[i][j] = 0;
      }else{
        arr[i][j]=1;
      }
    }
  }

  for(int i=0; i<3; i++){
    for(int j= 0; j<3; j++){
     printf("%d ",arr[i][j]);
    }printf("\n");
  }
  return 0;
}
