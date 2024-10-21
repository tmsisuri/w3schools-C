#include <stdio.h>
int main() {
    //If you assign a new value to an existing variable, it will overwrite the previous value
    int Num = 15;  // Num is 15
    Num = 10;  // Now Num is 10

    //You can also assign the value of one variable to another 

    int Num1 = 15;
    int OtherNum1 = 23;
    // Assign the value of OtherNum1 (23) to Num1
    Num1 = OtherNum1;
    // Num1 is now 23, instead of 15
    printf("%d\n", Num1);

    //Or copy values to empty variables

    // Create a variable and assign the value 15 to it
    int Num2 = 15;
    // Declare a variable without assigning it a value
    int OtherNum2;
    // Assign the value of Num2 to OtherNum2
    OtherNum2 = Num2;
    // OtherNum2 now has 15 as a value
    printf("%d\n", OtherNum2);

    //To add a variable to another variable, you can use the + operator
    int x = 5;
    int y = 6;
    int sum = x + y;
    printf("%d\n", sum);

}