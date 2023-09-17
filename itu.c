#include <stdio.h>
int main(){
    struct student{
        int code;
        char name[50];
        float fee;
        struct adate{
            int date;
            int month;
            int year;
        };
        struct adate d;
    }; 
    struct student s[10];

    for(int i=0;i<10; i++){
        scanf("%d %s %f",&s[i].code, &s[i].name, &s[i].fee);
        
            scanf("%d %d %d", &s[i].d.date, &s[i].d.month, &s[i].d.year);        }
    
    for(int i=0;i<10; i++){
        printf("%d %s %f\n",s[i].code, s[i].name, s[i].fee);
        
            printf("%d-%d-%d", s[i].d.date, s[i].d.month, s[i].d.year);        }
    
}