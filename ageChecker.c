#include <stdio.h>

void ageCheck(int age){
    if(age <= 20)
    {
        printf("TOO YOUNG");
    }else
    {
        printf("TOO OLD");
    }
    
}
void printCreds(){
    int age;
    char name[10];
    printf("Welcom to age checker! What is your name?\n");
    scanf(" %s", &name);

    printf("What is your age?\n");
    scanf(" %d", &age);

    printf("Hello %s! you are ", name);
    ageCheck(age);
}

int main()
{
    printCreds();
    return 0;
}
