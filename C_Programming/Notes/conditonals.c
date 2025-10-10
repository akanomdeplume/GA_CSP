// GA 7th Conditionals notes
#include <stdio.h>
#include <strings.h>

int main(void){
    int grade;
    char name[50];
    printf("what is your grade percent:");
    scanf("%d", &grade);

    printf("what is your name?");
    scanf("%s", &name);

    if(strcmp(name, "Ms.LaRose") == 0){
        printf("you dont get a grade FREAK you...\n");
    }else if(grade >= 90){
        printf("you are passing! you have an A! 😍🤤😊\n");
    }else if(grade >= 80){
        printf("you are passsing, you have a B\n");
    }else if(grade >= 70){
        printf("you are passsing, you have a C\n");
    }else if(grade >= 60){
        printf("you are passsing, you have a D :()\n");
    }else{
        printf("you are FAILING, you have a F 🤣✌️\n");
    }

    return 0;
}
/*
what puts something inside an if statement?
    curly bracket
How are conditionals written in
    if{} else if{} else{}
how do you write elif conditions in c?
    else if
when do else conditionals run?
    if the if and else if conditionals are wrong
what are the 3 logical operators in c?
    && and
    || or
    ! not
    /*



*/