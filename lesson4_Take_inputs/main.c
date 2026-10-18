#include <stdio.h>
#include <string.h>
int main(){
    int age=0;
    float gpa=0.0f;
    char grade='\0';
    char name[30]="";
    
    printf("give me your age: ");
    scanf("%d",&age);

    printf("give me your gpa: ");
    scanf("%f",&gpa);

    printf("give me your grade: ");
    scanf(" %c",&grade);

    getchar();
    printf("give me your name: ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0';
    
    printf("age: %d\n",age);
    printf("grade: %.2f\n",gpa);
    printf("grade: %c\n",grade);
    printf("name: %s\n",name);
    return 0;

}