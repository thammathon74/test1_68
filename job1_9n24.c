#include <stdio.h>
void main()
{
    float num1,num2,num3=0;
    printf("Enter number num1 : ");
    scanf("%f",&num1);
    printf("Enter number num2 : ");
    scanf("%f",&num2);
    printf("Enter number num3 : ");
    scanf("%f",&num3);
    printf("Output =\n\t%10.2f\n\t%-10.2f\n\t%10.2f",num1,num2,num3);
    
}