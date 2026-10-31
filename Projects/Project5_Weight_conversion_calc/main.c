#include <stdio.h>
#include <math.h>

int main(){
    printf("Weight conversion calculator\n");
    printf("1. kg to lbs\n");
    printf("2. lbs to kg\n");
    int user_choice=0;
    float pounds=0.0f;
    float kilogram=0.0f;
    float converted_weight=0.0f;
    printf("Choose 1 or 2: ");
    scanf("%d",&user_choice);
    
    switch(user_choice){
        case 1:
            printf("Enter Weight in kg: ");
            scanf("%f",&kilogram);
            converted_weight=kilogram*2.20462;
            printf("The converted weight is ---> %.3f lbs\n",converted_weight);
            break;
        case 2:
            printf("Enter Weight in lb: ");
            scanf("%f",&pounds);
            converted_weight=pounds*0.45359237;
            printf("The converted weight is ---> %.3f kg\n",converted_weight);
            break;
        default:
            printf("You didin't choose 1 or 2 !!\n");
    }
}