#include <stdio.h>
#include <math.h>
int main ()
{
    //5
    /*
    int C,D,temp;
    scanf("%d %d",&C,&D);
    temp=C;
    C=D;
    D=temp;
    printf("C and D is respectively %d & %d",C,D);
    */
   //6

  /* double d;
   printf("Input the distance between Ashulia and Mirpur in meter:");
   scanf("%lf",&d);

   printf("Distance in cm:%lf\n",d*100);
   printf("Distance in inches :%lf\n",d*39.37);
   printf("Distance in feet :%lf\n",d*3.21);
   */

  //7
  /*int basic_salary;
  printf("Enter your basic salary: ");
  scanf("%d",&basic_salary);

  int dearness_allowance = basic_salary*.4;
  int house_rent = basic_salary*.2;
  int gross_salary = basic_salary+dearness_allowance+house_rent;

  printf("Your gross salary is : %d\n",gross_salary);
*/

//8
/*int sub_1, sub_2, sub_3 ,sub_4, sub_5;
printf("Enter obtained marks: ");
scanf("%d %d %d %d %d",&sub_1, &sub_2, &sub_3, &sub_4, &sub_5);
int aggregate_mark =sub_1+sub_2+sub_3+sub_4+sub_5;
float average = aggregate_mark/5;

printf("Your aggregate is :%d\nYour average is :%f\n",aggregate_mark,average);

//9
int ascii;
printf("Enter ASCII code: ");
scanf("%d",&ascii);
printf("Your character is :%c",ascii);


int a;
printf("Enter your number:");
scanf("%d",&a);

if(a%2==0)
{
    printf("The number is EVEN\n");
}
else 
{
    printf("The number is ODD\n");
}
char ch;
printf("Enter a character:");
scanf("%c",&ch);
if((ch >='A' && ch <='Z') || (ch >='a' && ch <='z'))
{
    printf("its an alphabet\n");
}
else
{
    printf("Its not an alphabet\n");
}

float base_salary = 1500.00;
float bonus = 200.00;
float computer_price;
int computer_sold;

printf("Computer price:");
scanf("%f",&computer_price);

printf("Computer sold this month:");
scanf("%d",&computer_sold);

float gross_salary = base_salary+(computer_sold*bonus)+(computer_sold*computer_price*.02);
printf("Gross salary:%f\n",gross_salary);

int a,b,c;
printf("Enter the values of a,b,c:");
scanf("%d %d %d",&a,&b,&c);
int d = (b*b)-(4*a*c);
if(d<0) 
{
    printf("Invalid\n");
}
else
{
    float root1=(-b+sqrt(d))/(2*a);
    float root2=(-b-sqrt(d))/(2*a);
    printf("Root 1 = %f\n",root1);
    printf("Root 2 = %f\n",root2);

}

int total_15,total_profit;
printf("Total selling price:");
scanf("%d",&total_15);
printf("\"Total profit earned:\"");
scanf("%d", &total_profit);

float cost_price_of_1 = (total_15 - total_profit)/15;
printf("The cost price of 1 item:%f\n",cost_price_of_1);
*/

float phy, chm, bio, math, com;
char grade;
printf("Obtained marks in physics:");
scanf("%f",&phy);


printf("Obtained marks in chemistry:");
scanf("%f",&chm);


printf("Obtained marks in biology:");
scanf("%f",&bio);


printf("Obtained marks in mathematics:");
scanf("%f",&math);


printf("Obtained marks in computer:");
scanf("%f",&com);

float p=((math+phy+chm+bio+com)/500)*100;
printf("percentage :%f\n",p);
if(p>=90) grade='A';
else if(p>=80) grade='B';
else if(p>=70) grade='C';
else if(p>=60) grade='D';
else if(p>=40) grade='E';
else if(p<40) grade='F';
printf("Your obtained grade is: %c\n",grade);


}
