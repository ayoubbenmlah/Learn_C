#include <stdio.h>

int main(){
    int age=0;
    printf("Give me your age: ");
    scanf("%d",&age);
    if(age>=18 && age<65){
        printf("You are not an adult");
    }else if(age>=65){
        printf("You are a senior citizen");
    }
    else if(age<0){
        printf("You haven't been born yet");
    }
    else if(age==0){
        printf("You are a new born");
    }
    else{
        printf("You are a child");
    }
    return 0;
}