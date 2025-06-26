#include<stdio.h>
void main()
{
    float x,y,z,max1,max;
    printf("Enter Number x :");
    scanf("%f",&x);
    printf("Enter Number y :");
    scanf("%f",&y);
    printf("Enter Number z :");
    scanf("%f",&z);
    max1=(x>y)?x:y;
    max=(max1>z)?max1:z;
    printf("Max number = %.2f",max);
}