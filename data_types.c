#include <stdio.h>
int main() {
    //Basic Data Types
    //The data type specifies the size and type of information the variable will store

    // Data Type	 Size	                Description	                                                                                      Example
    //  int	         2 or 4 bytes	 Stores whole numbers, without decimals	                                                                     1
    //  float	     4 bytes	     Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits	     1.99
    //  double	     8 bytes	     Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits	     1.99
    //  char	     1 byte	         Stores a single character/letter/number, or ASCII values	                                                 'A'

    //Basic Format Specifiers
    //There are different format specifiers for each data type

    //  Format Specifier	Data Type	
    //   %d or %i	          int	
    //   %f or %F	          float	
    //   %lf	              double	
    //   %c	                  char	
    //   %s   	              Used for strings (text)

    //Note: It is important that you use the correct format specifier for the specified data type. If not, the program may produce errors or even crash

    int myNum = 5;
    printf("%d\n", myNum);
    printf("%i\n", myNum);

    float myFloatNum = 5.99;
    printf("%f\n", myFloatNum);

    double myDoubleNum = 19.99;
    printf("%lf\n", myDoubleNum);

    char myLetter = 'D'; 
    printf("%c\n", myLetter);

    char greetings[] = "Hello World!";
    printf("%s\n", greetings);

    return 0;
}