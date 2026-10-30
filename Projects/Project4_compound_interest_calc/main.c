#include <stdio.h>
#include <math.h>
int main(){
    double principal=0.0;
    double rate=0.0;
    int years=0.0;
    int times_Compounded=0.0;
    double total=0.0;
    printf("----------------Compound interest Clculator----------------\n");
    printf("Enter the principal (P): ");
    scanf("%lf",&principal);
    printf("Enter interest rate % (r): ");
    scanf("%lf",&rate);
    rate/=100;
    printf("Enter number of years (t): ");
    scanf("%d",&years);
    printf("Enter times compounded per year (n): ");
    scanf("%d",&times_Compounded);
    total=principal*pow(1+(rate/times_Compounded),years);
    printf("After %d years, the total will be: $%.2lf\n",years,total);
    return 0;
}