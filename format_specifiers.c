#include <stdio.h>
int main() {
    //Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing
    //It is basically a placeholder for the variable value

    //A format specifier starts with a percentage sign %, followed by a character
    //to output the value of an int variable, use the format specifier %d surrounded by double quotes (""), inside the printf() function

    int num = 14;
    printf("%d\n" , num);

    //To print other types, use %c for char and %f for float

    int myNum = 7;  // Integer (whole number)
    float myFloatNum = 3.567;  // Floating point number
    char myChar = 'j';  // Character

    printf("%d\n" , myNum);
    printf("%f\n" , myFloatNum);
    printf("%c\n" ,myChar);

    //To combine both text and a variable, separate them with a comma inside the printf() function
    printf("My favorite number is : %d\n" , myNum);

    //To print different types in a single printf() function, you can use the following
    printf("My number is %d and my letter is : %c\n" , myNum , myChar);

    //You can also just print a value without storing it in a variable, as long as you use the correct format specifier
    printf("My favorite number is : %d\n" , 12);
    printf("My favorite letter is : %c\n" , 'p');

    return 0;
}