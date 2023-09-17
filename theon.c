#include <stdio.h>


int min(int arr[],int size)
{
    int min =arr[0];
    for(int i=1;i<size;i++)
    {
        
        if(arr[i] < min)
        min =arr[i];
    }
    return min;
}


int main(){
    int n;
    scanf("%d", &n);
    int t[n];

    for(int i=0 ;i<n; ++i){
        scanf("%d",&t[i]);
    }
    int p = min(t, n);
    
    for(int i=0 ;i<n; ++i){
       if(t[i] == p){
        printf("%d\n", i+1);
        break;
       }
    }

}