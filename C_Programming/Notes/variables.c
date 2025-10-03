// GA 7th Variable Notes
#include <stdio.h>

int main(void){
    int grade = 95; //4 bytes
    float pi = 3.14; //4 bytes
    double long_pi = 3.1415926358; // 8 Bytes
    char letter_grade = 'A';
    char name[] = "Gyan";
        printf("%s you did it!", name);
        printf(" you have a %d, in this class. That is an %C", grade, letter_grade);
    return 0;
}
// grade = 95
//grade ="A"
// all variables take some amount of space, dyanic typed language
//C wants to use minimal space
//floats take 4 bytes of space
//%s = string, %d = interger %c = single character
