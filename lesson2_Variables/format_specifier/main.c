#include <stdio.h>
#include <stdbool.h>

int main(){
    int age=25;
    float price= 19.99;
    double pi=3.144894894984;
    char currency='$';
    char name[]="Ayoub Ben Mlah";
    printf("Age: %d\n",age);
    printf("price: %f\n",price);
    printf("pi: %lf\n",pi);
    printf("Currency: %c\n",currency);
    printf("Name: %s\n",name);
    /*
    %d is for decimal
    %f is for floats but not very long floats
    %lf is for larger floats
    %c is for character don't forget within ' '
    %s is for strings with more thant one character don't forget within " "
    */

    //another trick you can do is that you can manipulate the space before and after the result
    int num1=1;
    int num2=10;
    int num3=100;
    
    printf("%3d\n",num1);
    printf("%3d\n",num2);
    printf("%3d\n",num3);
    printf("---------------------------------\n");

    printf("%-3d\n",num1);
    printf("%-3d\n",num2);
    printf("%-3d\n",num3);
     printf("---------------------------------\n");

    printf("%03d\n",num1);
    printf("%03d\n",num2);
    printf("%03d\n",num3);
    printf("---------------------------------\n");

    printf("%+3d\n",num1);
    printf("%+3d\n",num2);
    num3=-100;
    printf("%+3d\n",num3);
    /*the 3 or any other value let us name it x is the number of spaces left before we get to our result in the format
      ---X 
      example:
            if X=5
            we get -----x
      and it can be reversed to the other side. 
            if x=-4
            we get : x----

      -----------------------------------------------------------------------------------
      the space can be filled with characters or numbers in the form of 0000x or $$$x ....
      -----------------------------------------------------------------------------------
      if you want to get the sign of your int just place a +.
      this will put the sign of the number before it could be of use 
      -----------------------------------------------------------------------------------
      finally this is somthing we saw before if you put .1 .2 or .3 ....
      that will set the number of displayed numbers after the 0.
      
    
      */
    return 0;
}
