//GA 7th name decorator

#include <stdio.h>
#include <string.h>

    char name [50];
   
int main(void){
    printf("wassup chat ts a name decorated\n");
    printf("what is your name?\n");
    scanf ("%s", name);
    
    char decor1 [] =("xxx_");
    char decor2 [] = ("_xxx");

   
    strcat(decor1,name);
    
    strcat(decor1, decor2);
    
    printf("%s",decor1);
    return 0; 
}