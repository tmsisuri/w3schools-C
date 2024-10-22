#include <stdio.h>
int main() {
    //Use int when you need to store a whole number without decimals
    //use float or double when you need a floating point number (with decimals)

    //float vs. double

    //The precision of a floating point value indicates how many digits the value can have after the decimal point
    //The precision of float is six or seven decimal digits, while double variables have a precision of about 15 digits
    //Therefore, it is often safer to use double for most calculations - but note that it takes up twice as much memory as float (8 bytes vs. 4 bytes)

    //Scientific Numbers
    //A floating point number can also be a scientific number with an "e" to indicate the power of 10

    float f1 = 35e3;
    double d1 = 12E4;

    printf("%f\n", f1);
    printf("%lf", d1);

    return 0;
}