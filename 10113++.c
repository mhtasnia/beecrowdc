#include <stdio.h>
#include <math.h>
int main()
{
    /*int my_age;
    printf("Enter your age:");
    scanf("%d",&my_age);

    if(my_age<0)
    {
        printf("Invalid input\n");
    }
    else
    {
        if(my_age >= 18)
        {
            printf("You are eligible to vote\n");
        }
        else
        {
            printf("You are not eligible to vote\n");
        }
    }*/

   /*
    int m,n;
    printf("Enter the value of m:");
    scanf("%d",&m);

    if(m==0) n=0;
    else if (m>0) n=1;
    else n=-1;

    printf("The value of m:%d\n",m);
    printf("The value of n:%d",n);
    */
   /*
   float h;
   printf("Enter your height :");
   scanf("%f",&h);

   if( h>0 && h<150) printf("You are a dwarf\n");
   else if (h>=150 && h<165) printf("You have a average height\n");
   else if (h>=165 && h<195) printf("You are tall\n");
   else printf("Abnormal height\n");
   */
/*
  int a,b,c;
  printf("Enter three numnbers: ");
  scanf("%d %d %d",&a,&b,&c);

  printf("The 1st number:%d\nThe 2nd number:%d\nThe 3rd number:%d\n",a,b,c);

  if(a>c && a>b)
  {
    printf("The 1st number is the greatest of the three numbers\n");
  }
  else if(b>c && b>a)
  {
    printf("The 2nd number is the greatest of the three numbers\n");
  }
  else
  {
    printf("The 3rd number is the greatest of the three numbers\n");
  }
  
int x,y;
printf("Enter the x coordinate:");
scanf("%d",&x);
printf("Enter the y coordinate:");
scanf("%d",&y);

if(x>0 && y>0)
{
    printf("The coordination point (%d,%d) lies at the 1st quandrant\n",x,y);
}
else if(x<0 && y>0)
{
    printf("The coordination point (%d,%d) lies at the 2nd quandrant\n",x,y);
}
else if(x<0 && y<0)
{
    printf("The coordination point (%d,%d) lies at the 3rd quandrant\n",x,y);
}
else if(x>0 && y<0)
{
    printf("The coordination point (%d,%d) lies at the 4t\h quandrant\n",x,y);
}
else if (x==0 && y==0)
{
    printf("The coordination point (%d,%d) lies at the origin\n",x,y);
}

int m,p,c;
scanf("%d %d %d",&m,&p,&c);
if(m<65)
{
    //printf("The candidate is not eligible for admission\n");

 if(p<55)
{
     //printf("The candidate is not eligible for admission\n");

 if(c<50)
{
     //printf("The candidate is not eligible for admission\n");

 if((m+p+c)<190 || (m+p)<140)
{
    printf("The candidate is not eligible for admission\n");
}
}
}
}
else
{
    printf("The candidate is  eligible for admission\n");
}
*/
/*
int x;
scanf("%d",&x);

if(x%2==0) printf("Even\n");
else printf("odd\n");
*/
/*
int a,b,c;

scanf("%d %d %d",&a,&b,&c);

float r1,r2;
float x;

x=(b*b)-(4*a*c);

if (x<0)
{
    printf("The roots are imaginary\n");
}
else{
r1 = (-b-sqrt(x))/(2*a);
r1 = (-b+sqrt(x))/(2*a);


printf("Root1 =%.2f\n",r1);
printf("Root2 =%.2f\n",r2);
}
*/
/*
int a,b,c,x;
char name[100];

printf("Input the Roll Number of the student :");
scanf("%d",&x);

printf("Input the Name of the Student :");
scanf("%s",&name);

printf("Input the marks of Physics, Chemistry and Computer Application :");
scanf("%d %d %d",&a,&b,&c);

float p = (a+b+c)/3;
printf("Roll No : %d\n",x);
printf("Name of Student : %s\n",name);
printf("Marks in Physics : %d\n",a);
printf("Marks in Chemistry : %d\n",b);
printf("Marks in Computer Application : %d\n",c);
printf("Total Marks: %d\n",a+b+c);
printf("Percentage = %f\n",p);

if(p<40) printf("Division:Fail\n");
if(p>=40 && p<80) printf("Division:Second\n");
if(p>=80 && p<=100) printf("Division:irst\n");
if(p>100 || p<0) printf ("Invalid\n");
*/
/*
float temp;

printf("Enter the temparature:");
scanf("%f", &temp);

if (temp<0) printf("Freezing weather\n");
if(temp >= 0 && temp <10) printf("Very Cold Weather\n");
if(temp >= 10 && temp <20) printf("Cold Weather\n");
if(temp >= 20 && temp < 30) printf("Normal in Temp\n");
if(temp >= 30 && temp < 40) printf("Its Hot\n");
if(temp >40) printf("Its Very Hot\n");
*/
/*
float a,b,c;
printf("Enter the length of three sides of the triangle:");
scanf("%f %f %f",&a,&b,&c);

if ( a==b && b==c)
{
    printf("Equilateral triangle\n");
}
else if (a==b || b==c || a==c)
{
    printf("Isosceles triangle\n");
}
else
{
    printf("Scalene triangle\n");
}
*/
    return 0;
}