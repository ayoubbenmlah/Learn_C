#include <stdio.h>
//in floats somtimes we get large floats in this case we use large floats aka lf
// another thing, when we are wroking with more presicion we need to use double instead of float alongside the lf data type
int main(){
    double pi=3.1456126262626561;
    double e=2.718286848894894894;
    printf("This is Pi: %.15lf \n",pi);
    printf("This is e: %.7lf \n",e);
    return 0;
}