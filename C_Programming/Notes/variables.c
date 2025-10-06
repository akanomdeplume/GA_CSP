// GA 7th Variable Notes
#include <stdio.h>

int main(void){
    int grade; //4 bytes
    const float pi = 3.14; //4 bytes
    double long_pi = 3.1415926358; // 8 Bytes
    char letter_grade;
    char name[50];
//user input
printf("what is your name:\n");
fgets(name, sizeof(name), stdin);


printf("what is your grade percentage as a whole number: ");
scanf("%d", &grade);
while (getchar()!= '\n');
{
    /* code */
}


printf("what is your letter grade: ");
scanf(" %c", &letter_grade);

        printf("%s you did it!\n", name);
        printf(" you have a %d, in this class. That is an %C\n", grade, letter_grade);
    return 0;
}
// grade = 95
//grade ="A"
// all variables take some amount of space, dyanic typed language
//C wants to use minimal space
//floats take 4 bytes of space
//%s = string, %d = interger %c = single character
//What is the main difference between declaring variables in Python and C?

//In C, what is the purpose of specifying a data type when declaring a variable?'
    //you have to declare the type of variable so it knows the size.
//List three common data types used in C and their corresponding format specifiers for printf().
    // %d %c %s
//How do you declare and initialize an integer variable named "age" with the value 25 in C?
    //
//What is the difference between printf() and scanf() functions in C?

//How do you add comments in C?
    // use // (double forward slash)
//What is the purpose of the #include <stdio.h> line at the beginning of a C program?
    // it means standard library inputs outputs makes it so you can use inputs, outputs and get information from the user

//In C, what is the significance of the main() function?


//What is the difference between %d and %f format specifiers in printf()?

//How do you print a newline character in C?
    //you need to tell it if you want it to go onto a new line, inside string add \n in ""

//What is the purpose of the & symbol when using scanf() to get user input?

//How do you declare a constant in C? Provide an example.