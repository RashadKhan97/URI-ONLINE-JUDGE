#include<stdio.h>
int main()
{
int  code, unit;
double price, amount1,amount2;
scanf("%d %d %lf", &code, &unit, &price);
amount1 = (unit*price);
scanf("%d %d %lf", &code, &unit, &price);
amount2=amount1+(unit*price);
printf("VALOR A PAGAR: R$ %0.2lf\n", amount2);
return 0;
}
