//GA 7th 
#include <stdio.h>
#include <string.h>
                

int main(void) {
    char family[4][20] = {"Qiya", "Rafael", "Anna", "Gyan"};

    for (int i = 0; i < 4; i++)
        printf("Hello, %s!\n", family[i]);
    
    return 0;
}