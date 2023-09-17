#include <stdio.h>
#include <string.h>
int main()
{
    char str2[] ="Bangladesh";
    char str3[50];

    strncpy ( str3, str2, 5 );
    printf("%s", str3);

}