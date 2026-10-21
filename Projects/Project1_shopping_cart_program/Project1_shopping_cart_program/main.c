#include <stdio.h>
#include <string.h>

int main(){
    char item[30]="";
    float price=0.0f;
    int quantity=0;
    float total=0.0f;
    printf("what is your item: ");
    
    fgets(item,sizeof(item),stdin);
    item[strlen(item)-1]='\0';
    printf("what is the price of the item: ");
    scanf("%f",&price);
    printf("how many of this item will you purchase: ");

    scanf("%d",&quantity);
    total=quantity*price;
    printf("Your total is: $%.2f",total);

    return 0;
}