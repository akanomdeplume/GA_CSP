// GA 7th Function Notes
#include <stdio.h>
void birthday(char* name, int age){
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday to you!\n");
    printf("Happy Birthday dear %s!\n", name);
    printf("Happy Birthday to you!\n");
    printf("Happy birthday %s you are %d\n", name, age);
}

int mul(int x, int y){
    return x *y;
}

float get_number(char* type){
    float value;
    printf("how many %s do you have", type);
    scanf("%f", &value);
    return value;
}

int main(void){

  birthday("Jesus", 15);
  birthday("Gwen", 14);
  birthday("Cecily", 16);
  int product = mul(8,5);
  printf("%d\n", product);
  printf("%d\n", mul(41,67));
  float pencils = get_number("pencils");
  float notebooks = get_number("notebooks");
  printf("you have %.2f pencils and %2f notebooks!", pencils, notebooks);


    return 0;
}
/*
What a function is
    A thing you can set to do when called for
Why we use functions
    to shorten or simply a long repeating task.
How to write a function in C
    never define a function in a function
    needs to be written above main function
    needs to have write the data type that is going to be returner
    void means nothing
What are arguments and parameters?
    parameters are varibales used ewhn defining the function (must set data type)
    aurguments are the actual vlues when using the function called.
How do arguments and parameters work together?
    When you're making a function you have to set a "name" for it which is trhe parameter, once you've set a peramater, and arguement calls the function
How to use parameters and arguments in C
    styff ubsude tgat fybctuib tgat will be printed when called
What are return statements?
    you take a specific value and put it where you called a function
How do return statements change how you define a function in C?
    you hav eto state whgat ype of data your funciton is returning
What do return statements do with the information?
    

*/