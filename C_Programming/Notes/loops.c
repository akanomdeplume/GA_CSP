//GA 7th loops
#include <stdio.h>

int main(void){
    int nums[] = {1,2,3,4,5,6,7};
    char candies[][20] = {"Kitkat", "Skittles", "nerds", "Chocolate", "Gummy"};


    for(int x = 0; x < 7; x++){
        printf("%d\n", nums[x]);
    }

    for(int i = 0; i < 5; i++){
        printf("%s, is my favorite candy!\n", candies[i]);
    }
    for(int num = 1; num < 11; num++){
        printf("%d\n", num);
    }

    int num = 0;
    while(num < 11){
        printf("%d\n", num);
        num++;
    }

    return 0;
}
/*
What is a kiio
    something that does go on
two types of loops
    for loops
    while loops
What is iteration
    Amount of times it loops pone instant of a loop num - 0- to num =1
    what are arrays the dsame thing as a list in python becaues they are vairables set right next to eachother in the memory
How do you make lists in C?
    Everything has to have the same exact data type  int nums[] = {1,2,3,4,5,6,7};














*/