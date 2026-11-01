#include <stdio.h>

int main(){
    int dayoftheweek=0;
    printf("Enter day of the week: ");
    scanf("%d",&dayoftheweek);
    switch (dayoftheweek)
    {
    case 1:
        printf("It's Monday\n");
        break;
    case 2:
        printf("It's tuesday\n");
        break;
    case 3:
        printf("It's wednesday\n");
        break;
    case 4:
        printf("It's thursday\n");
        break;
    case 5:
        printf("It's firday\n");
        break;
    case 6:
        printf("It's sturday\n");
        break;
    case 7:
        printf("It's sunday\n");
        break;
    default:
        printf("Never heard of the day :(");
        break;
    }
}