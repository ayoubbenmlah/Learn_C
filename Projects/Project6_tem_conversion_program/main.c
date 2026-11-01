#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    printf("--------Temp conversion program--------\n");
    printf("C.Fahrenheit to celceius\n");
    printf("F.Celcius to Fahrenheit\n");
    printf("Is the temp in (C) or (F): ");
    char user_input='\0';
    float temp_c=0.0f;
    float temp_f=0.0f;
    scanf("%c",&user_input);
    user_input=toupper(user_input);
    switch (user_input)
    {
    case 'C':
        printf("Enter the temp in (F): ");
        scanf("%f",&temp_f);
        temp_c=(temp_f-32)*5/9;
        printf("your temperature in C is -----> %0.2f(C)\n",temp_c);
        break;
    case 'F':
        printf("Enter the temp in (C): ");
        scanf("%f",&temp_c);
        temp_f=(temp_c*1.8)+32;
        
        printf("your temperature in F is -----> %0.2f(F)\n",temp_f);
        break;
    default:
        printf("You did not select (F) no (C)");
    }
    
    return 0;
}