#include <stdio.h>
void main()
{
    char name[10];
    int height;
    printf("Enter name : ");
    scanf("%s",&name);
    printf("Enter heigh (cm.) : ");
    scanf("%d",&height);
    printf("Output =\n\tName \t%s\n\tHeight \t%d cm",name,height);
}