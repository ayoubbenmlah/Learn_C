#include <stdio.h>
#include <string.h>
int main(){
    char Adjective[20]="";
    char Noun[20]="";
    char Adjective1[20]="";
    char Verb[20]="";
    char Adjective2[20]="";

    printf("Give me An Adjective(description): ");
    fgets(Adjective,sizeof(Adjective),stdin);
    Adjective[strlen(Adjective)-1]='\0';

    printf("Give me a noun(animal or person): ");
    fgets(Noun,sizeof(Noun),stdin);
    Noun[strlen(Noun)-1]='\0';
    
    printf("Give me An Adjective(description): ");
    fgets(Adjective1,sizeof(Adjective1),stdin);
    Adjective1[strlen(Adjective1)-1]='\0';

    printf("Give me An Adjective(ending w/-ing): ");
    fgets(Verb,sizeof(Verb),stdin);
    Verb[strlen(Verb)-1]='\0';

    printf("Enter an adjective (description): ");  
    fgets(Adjective2,sizeof(Adjective2),stdin);
    Adjective2[strlen(Adjective2)-1]='\0';

    printf("Today I went to a %s zoo.\n",Adjective);
    printf("In an exhibit,I saw a %s. \n",Noun);
    printf("%s was %s and %s!\n",Noun,Adjective1,Verb);
    printf("I was %s!\n",Adjective2);

    return 0;
}    