//this lesson cover how to use basic arethmetic operators
#include <stdio.h>
#include <math.h>

int main(){
    int a=2;
    int b=3;
    
    int res1=0;
    int res2=0;
    int res3=0;

    res1=a+b;
    res2=a-b;
    res3=a*b;
    
    printf("%d\n",res1);
    printf("%d\n",res2);
    printf("%d\n",res3);
    
    //as you can c this z=x+y ; by using + we added two variables together x and y into one variable z and printed it using %d format specifier 
    //this logic applies too all other operators except for division ;)

    //for division the case is abit different :
    //                in order for division to function correctly we need to be using floats across the entire equation otherwise we won't be able to retain the number after the decimal numbers

    a=15;
    b=5;
    float result=a/b;
    printf("%.2f\n",result);   
    
    return 0;
}