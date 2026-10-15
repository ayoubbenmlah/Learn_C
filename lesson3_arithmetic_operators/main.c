//this lesson cover how to use basic arethmetic operators
#include <stdio.h>
#include <math.h>

int main(){
    int x=2;
    int y=3;
    int z=0;
 
    //z=x+y;
    //z=x-y;
    //z=x*y;
    printf("%d\n",z);
    
    //as you can c this z=x+y ; by using + we added two variables together x and y into one variable z and printed it using %d format specifier 
    //this logic applies too all other operators except for division ;)

    //for division the case is abit different :
    //                in order for division to function correctly we need to be using floats across the entire equation otherwise we won't be able to retain the number after the decimal numbers

    z=x/z;
    printf("%d\n",z);   
    return 0;
}