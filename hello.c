#include <stdio.h>
#include <cs50.h>
float price(regular, discount);
int main(void)
{
    float regural = get_float("regural price : ");
    float discount = get_float("discount price : ");
    float price = sale(regural, discount);
    printf("the real sale is %.2f", price);
};
float price(regular, discount)
{
    return regural * (100 - discount) / 100;
};