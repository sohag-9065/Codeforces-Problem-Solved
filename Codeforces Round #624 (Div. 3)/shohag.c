#include<stdio.h>

int main()
{

    int a=10;
    char ab[10],ac[20],ad[20];
    scanf("%s",&ab);
    scanf(" %[^\n]s",&ac);
    scanf("%s",&ad);
    printf("%s\n %s\n %s\n ", ab ,ac  ,ad );
    return 0;
}


