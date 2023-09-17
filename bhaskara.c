#include <stdio.h>

int main() {
//2534
/*
 int n,a,m;
 while(scanf("%d %d", &n, &m) != EOF) {

 int num[n], pos[m];
 for(int i=0;i<n; i++){
    scanf("%d", &num[i]);
 }
 for(int i= 0; i<m; i++){
    scanf("%d", &pos[i]);
 }
 for(int i=0; i<n; i++)
  {
 for(int j=i+1; j<n; j++)
   {
 if(num[i] < num[j])
    {
      a= num[i];
      num[i] =num[j];
      num[j] =a;
    }
   }
  }
  for(int i=0; i<m; i++){
    printf("%d\n", num[pos[i]-1]);
  }
 }*/
//2540
/*
 int n;
 
 while (scanf("%d", &n) != EOF)
 {
    int arr[n];
    int imp=0 ;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] ==1)
        {
            imp++;
        }
    }
    double v = ((2*(float)n)/3);
   
    
    if(imp > v || imp==v)
    {
        printf("impeachment\n");
    }
    else
    {
        printf("acusacao arquivada\n");
    }
 }*/

 int n,m, p,q;
 while(scanf("%d %d",&n,&m)!=EOF)
 {
    int count =0;
    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&p, &q);
        if(p ==m){
            if(q==0){
                count++;
            }
        }

    }
    printf("%d\n",count);
 }
 
    return 0;
}
