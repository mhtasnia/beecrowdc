#include <stdio.h>
int main(){

int n, r, res=0, q;

printf("enter your number\n",n);
scanf("%d",&n);
q=n;
while(q!=0)
    {
    r=q%10;
res=res*10 +r;
q=q/10;


}
if(res==n)
    printf("palindrom\n");
else printf("n0");
return 0;













}
