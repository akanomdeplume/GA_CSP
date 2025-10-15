//GA 7th silly snetences 
#include <stdio.h>// 

char musician[100];
char restaurant[100];
char food[100];

int main(void){

    printf("welcome, this is a silly sentence maker, answer the following questions! (please only one word answers!!)\n");

    printf("who is you favorite musician?\n");
    scanf("%s", musician );
    printf("what is your favorite place to eat?\n");
    scanf("%s", restaurant);
    printf("what is you favorite food?\n");
    scanf("%s", food);
    

    printf("you at a concert for %s saw %s's foodtruck and ate %s", musician, restaurant, food);
    
    return 0;
}