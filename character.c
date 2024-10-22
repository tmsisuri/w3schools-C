#include <stdio.h>
int main() {
    //The char data type is used to store a single character.
    //The character must be surrounded by single quotes, like 'A' or 'c', and we use the %c format specifier to print it

    char myGrade = 'A';
    printf("%c\n" , myGrade);

    //Alternatively, if you are familiar with ASCII, you can use ASCII values to display certain characters
    //Note that these values are not surrounded by quotes (''), as they are numbers

    char a = 65, b = 66, c = 67;
    printf("%c\n", a);
    printf("%c\n", b);
    printf("%c\n", c);  //output ( A , B , C )

    //If you try to store more than a single character, it will only print the last character
    //char myText = 'hello';
    //printf("%c\n" , myText);

    //To store multiple characters (or whole words), use strings
    char text[] = "Hello"; 
    printf("%s\n" , text);

    return 0;
}