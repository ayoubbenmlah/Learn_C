#include <stdio.h>
//for booleans we use header file <stdool.h> before we can use it in our code
#include <stdbool.h>

int main(){
    /*booleans are a data type representing true/false or 0/1 in binary
      to use a boolean we use "bool"
      and since it is a binary number we call it using %d
      and it returns 1 or 0 not like python where we get True or False :)
      */
    bool isOnline=true;
    bool isStudent=false;
    bool forSale=true;
    printf("%d\n",isOnline);
    //now this is not part of the lessong as if statements are a later subject tho it is a fun way you can make use of booleans.
    // you can experiment with the booleans presented and plug the variables in the if statments and modify to your hearts content.

    if(isOnline){

        printf("You are online ");
    }
    else{
        printf("Your are not online ");
    }
    return 0;
}