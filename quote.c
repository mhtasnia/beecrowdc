#include <stdio.h>
 
int main() {
    /*char quote[100]="LIFE IS NOT A PROBLEM TO BE SOLVED";
    int n;
    
   
    while(scanf("%d",&n)!=EOF)
    {
   for(int i=0;i<n;i++)
   {
    printf("%c",quote[i]);
   
   }
     printf("\n");
    }
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     
 int C,n;
 
 scanf("%d",&C);

 for(int i=0;i<C;i++)
 {
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("0\n");
    }
    if(n%2!=0)
    {
        printf("1\n");
    }
 }

 int n,a,b;
 char player_1[100];
 char player_2[100];
 char p1Par[50];
 char p2Par[50];

scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
    scanf("%s %s %s %s",&player_1,&p1Par,&player_2,&p2Par);
    scanf("%d %d",&a,&b);
    if((a+b)%2==0)
    {
        if(p1Par[0]=='P')
        {
            printf("%s\n",player_1);
        }
        else
        {
            printf("%s\n",player_2);
        }
    }
    else 
    {
        if(p1Par[0]=='I')
        {
            printf("%s\n",player_1);
        }
        else
        {
            printf("%s\n",player_2);
        }
    }

 }

 int n;
 scanf("%d",&n);

 char sub[100];
getchar();
 for(int i=0;i<n;i++)
 {
    gets(sub);
 }
 printf("Ciencia da Computacao\n");
 

int a, b, c, d, aux;
 
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a < b) {aux=a;a=b;b=aux;}
if(a < c) {aux=a;a=c;c=aux;}
if(a < d) {aux=a;a=d;d=aux;}
if(b < c) {aux=b;b=c;c=aux;}
if(b < d) {aux=b;b=d;d=aux;}
if(c < d) {aux=c;c=d;d=aux;}
if(a<(b+c) || b<(c+d) )
{
    printf("S\n");
}
else
{
    printf("N\n");
}

int a,b,c,d;
scanf("%d %d %d %d",&a, &b, &c, &d);
printf("%d\n",a+b+c+d-3);

int a,b,aux;
scanf("%d %d",&a,&b);
if(a>b)
{
    aux=a;
}
else
{
    aux=b;
}
printf("%d",aux);

int a; 
scanf("%d",&a);
printf("%X",a);


long double a;
scanf("%LE",&a);
char arr[120];
sprintf(arr,"%LE",a);
if(arr[0]!='-')printf("+");
printf("%.4LE\n",a);

long long int a,b;
scanf("%lld %lld",&a,&b);

printf("%lld\n",a*b);


int pgn;
scanf("%d",&pgn);

while(pgn!=0)
{
    if(pgn>=1000)
    {
        printf("M");
        pgn-=1000;
    }
    if(pgn>=900)
    {
        printf("CM");
        pgn-=900;
    }
    else if(pgn>=500)
    {
        printf("D");
        pgn-=500;
    }
    else if(pgn>=400)
    {
        printf("CD");
        pgn-=400;
    }
    else if(pgn>=100)
    {
        printf("C");
        pgn-=100;
    }
    else if(pgn>=90)
    {
        printf("XC");
        pgn-=90;
    }
    else if(pgn>=50)
    {
        printf("L");
        pgn-=50;
    }
    else if(pgn>=40)
    {
        printf("XL");
        pgn-=40;
    }
    else if(pgn>=10)
    {
        printf("X");
        pgn-=10;
    }
    else if(pgn>=9)
    {
        printf("IX");
        pgn-=9;
    }
    else if(pgn>=5)
    {
        printf("V");
        pgn-=5;
    }
    else if(pgn>=4)
    {
        printf("IV");
        pgn-=4;
    }
    else if(pgn>=1)
    {
        printf("I");
        pgn-=1;
    }



}
printf("\n");


int h,num,d;
int k=0;
scanf("%d %d",&h,&num);
int j[100];
for(int i=0;i<num;i++)
{
scanf("%d",&j[i]);
}
for(int o=0;o<num-1;o++)
{
    if (j[o]>j[o+1])
    d=j[o]-j[o+1];
    else  d=j[o+1]-j[o];
    if( d > h )
    {
        printf("GAME OVER\n");
        break;
    }
    else 
    {
        k++;
        if(k==num-1)printf("YOU WIN\n");
        
    }
}

int n, yr;
scanf("%d",&n);
for(int i=0;i<n; i++)
{
    scanf("%d",&yr);
    int yr2=2015-yr;
    if(yr2<=0)
    {
        yr2*=-1;
        yr2+=1;
        printf("%d A.C.\n",yr2);
    }
    else
    {
        printf("%d D.C.\n",yr2);

    }
}

double a,b;

scanf("%lf %lf",&a,&b);
double c=(b-a)/a;
printf("%.2lf%%\n",c*100);

int a;
long long int stud[1000];
double note[1000];
double max;
scanf("%d",&a);
for(int i=0; i<a; i++)
{
    scanf("%lld %lf",&stud[i],&note[i]);
}
for (int j=0; j<a-1;j++)
{
    if (note[j]>note[j+1])
    {
        max = note[j];
    }
    else max=note[j+1];
}
if(max < 8)
{
    printf("Minimum note not reached\n");
}
else
{
    for (int k=0;k<a;k++)
    {
        if(max == note[k])break;
    
    printf("%lld\n",stud[k]);
    }
}
long long int  a;
scanf("%lld",&a);
long long int r=a;
long long int q;
while(r!=0)
{
    q=r%10;
    r-=q;
    r/=10;
    printf("%lld",q);
}
printf("\n");


*/
int a, i, j, count=0;
    while(scanf("%d", &a) != EOF)
    {
        int num = 1;
        count++;
        num += ((a*(a + 1)) / 2);
        if(a == 0) printf("Caso %d: %d numero\n", count, num);
        else printf("Caso %d: %d numeros\n", count, num);
        printf("0");
        for(i=1; i<=a; i++)
        {
            for(j=1; j<=i; j++)
                printf(" %d", i);
        }
        printf("\n\n");
    }
    return 0;
}