//GA 7th Strings
#include <stdio.h>
#include <string.h>

int main(void){
    char name[] = "andrew";

    char last_name[25];
    printf("tell me your last name: \n");
    scanf("%s", last_name);
    char full_name[50];
    full_name[0] = '\0'; // found this online and it made it slightly less broken.
    printf("[%s]\n", full_name);
    strcat(full_name, name);
    printf("[%s]\n", full_name);

    printf("%c", last_name[0]);
    last_name[0] = 'R';
    strcat(full_name, " ");
    printf("[%s]\n", full_name);
    
    strcat(full_name, last_name);
    printf("[%s]\n", full_name);


    printf("your name is %s %s", name, last_name);
    printf("%zu", strlen(name));
    printf("%zu", sizeof(name));
// ayo what the diddy ✌️✌️✌️67 so tuff vro


    return 0;
}