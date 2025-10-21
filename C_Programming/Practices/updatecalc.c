//GA 7th update calculator
#include <stdio.h>
#include <math.h>

float user_input(char *prompt){
    float value;
    printf("%s",prompt);
    scanf("%f",&value);
    return value;
}

void print_result(char*item_name, float amount, float income){
    float percentage= (amount/income)*100;
    printf("Your %s are $%.2f which is %.2f%% of your income.\n", item_name, amount, percentage);
}



int main(){
    float income,rent,utilities, groceries, transportation,savings,spendings;
    printf("This is a financial Calculator!\n");
    income= user_input("What is your income?\n");
    rent= user_input("How much do you pay for rent?\n");
    utilities= user_input("What do you spend on Utilities?\n");
    groceries= user_input("What do you spend on groceries?\n");
    transportation= user_input ("What do you spend on transportation?\n");

    
    savings= income*0.1;
    spendings= income-savings-rent-utilities-groceries-transportation;



    print_result("rent",rent, income); 
    print_result("utilities",utilities, income); 
    print_result("groceries",groceries, income); 
    print_result("transportation",transportation, income); 
    print_result("savings",savings, income); 
    print_result("spendings",spendings, income); 
    return 0;
}