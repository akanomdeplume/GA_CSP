// GA 7th Expresions Notes

#include <stdio.h>
#include <math.h>

int main(void){
    int year = 2025;
    float pi = 3.14;
    double long_pi = 3.14159265359;

    printf("%d\n", 8/3);
    printf("%f.2\n", 8.0/3);
    printf("%d\n", (int)pow(2,4));

    return 0;
}
// interger vs float
    // Type	Description	Example int	Whole numbers	-5, 42 float	Decimal numbers	3.14, 0.5
// 2. Integer vs Float Division
    //Code	Result
    //5 / 2	2 (int)
    //5.0 / 2 or 5 / 2.0	2.5 (float)
// 3. Arithmetic Operators
    // Operator	Meaning	Example
    // +	Addition	a + b
    // -	Subtraction	a - b
    // *	Multiplication	a * b
    // /	Division	a / b
    // %	Modulus (int only)	a % b
// 4. Modulus Operator

    //Gets the remainder of integer division.

//5. Rounding a Float
    //#include <math.h>

    //round(x);  // Nearest int
    //floor(x);  // Down
    //ceil(x);   // Up

// 6. Type Casting
    //float f = 3.9;
    //int i = (int)f;  // i = 3

// 7. Compound Assignment Operators
    //Operator	Meaning	Example
    //+=	a = a + b	a += b;
    //-=	a = a - b	a -= b;
    //*=	a = a * b	a *= b;

//math.h Library – Common Functions
    //sqrt(x);     // Square root
    //pow(x, y);   // x^y
    //sin(x);      // Sine (radians)
    //round(x);    // Round to nearest int

// 9. Printing Floats with printf()
    //float f = 3.14159;
    //printf("%.2f", f);  // Output: 3.14

// 10. Mixing int and float

    //C promotes int to float, result is float.

    // int a = 5;
    // float b = 2.0;
    // float result = a / b;  // 2.5





