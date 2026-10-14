#include <stdio.h>

int main(){
    //-the char variable stores charachters and you put said charachters inside of '' not "" .
    //-you can't put more than one charachter in this type of char variable.
    //--we also use %c (charachter) 
    char grade ='A';
    char symbol ='!';
    char currency='$';
    printf("Your grade is: %c\n",grade);
    printf("Your favorite symbol is: %c\n",symbol);
    printf("Your currency is: %c\n",currency);
    /*
    ---------------------------------------------------------------
    -if you want to add multiple charachters to a char variable you will have to initialise an empty [] this will contain the size of your string you can leave it empty or set it to an x value.
    -in this case we use "" instead of ''0
    -we also use %s (string) instead of %c (charachter) 
    Examples: 
    */
    char name[]="Ayoub ben Mlah";
    char food[]="Pizza";
    char email[]="Fake123@issatm.ucar.tn";
    printf("Hello %s\n",name);
    printf("Your favorite food is %s\n",food);
    printf("Your email is %s\n",email);
    
    return 0;
}