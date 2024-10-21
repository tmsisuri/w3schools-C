#include <stdio.h>
int main() {
    //Declare Multiple Variables
    //To declare more than one variable of the same type, use a comma-separated list
    int x = 5, y = 6, z = 50;
    printf("%d\n" , x+y+z);

    //You can also assign the same value to multiple variables of the same type
    int a, b, c;
    a = b = c = 50;
    printf("%d", a + b + c);

    return 0;
}