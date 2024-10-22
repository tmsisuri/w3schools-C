#include <stdio.h>
int main() {
    //When print a floating point number, the output will show many digits after the decimal point
    //To remove the extra zeros(set decimal precision), you can use a dot followed by a number that specifies how many digits that should be shown after the decimal point

    float myFloatNum = 3.5;
    printf("%f\n" ,myFloatNum);  // Default will show 6 digits after the decimal point
    printf("%.1f\n" ,myFloatNum);  // Only show 1 digit
    printf("%.2f\n" ,myFloatNum);  // Only show 2 digits
    printf("%.4f\n" ,myFloatNum);  // Only show 4 digits

    return 0;
}