#include <stdio.h>
int main(){
    //there is multiple types of loops in c
    //first type is what we call a for loop :
    /*
    for (init_expression; loop_condition; loop_expression) {
    // Program statements here
    }
    */
    for (int i=0;i<100;i++){
        printf("hello world\n");
    }
    //in this case to logic boils down to 
    //we initialise i to 0 and as long as it is lower than 100 we keep printing hello world until we reach i=100

    //more examples for you to learn from :)
    printf("----------------------------------------------------");
    int num=0;
    for (int i=1; i<=100;i++){
        num=num+1;
        printf("Number: %d\n",num);
    }
    return 0;
}