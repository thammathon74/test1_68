#include <stdio.h>
void main()
{
    float P_price,Vat=0,T_price=0;
    printf("Enter Product price : ");
    scanf("%f",&P_price);
    Vat=P_price*0.07;
    T_price=P_price+Vat;
    printf("\nVat= %.2f",Vat);
    printf("\nTotsl price = %.2f",T_price);
}