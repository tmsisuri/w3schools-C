#include<stdio.h>
int main() {
    //you can go to a new line by using the newline character (\n)

    ////after printing "Hello, World!", the \n moves the cursor to the next line, so the next printf() starts its output on a new line
    //You can use \n anywhere in the string to create line breaks
    printf("Hello World!\n");
    printf("This is a new line\n\n");
    
    //Two \n characters after each other will create a blank line

    //You can also output multiple lines with a single printf() function
    printf("Hello World!\nI am learning C.\nAnd it is awesome!\n\n");

    //The newline character (\n) is called an escape sequence, and it forces the cursor to change its position to the beginning of the next line on the screen
    //This results in a new line

    //  Escape Sequence	       Description
    //       \t	           Creates a horizontal tab	
    //       \\	           Inserts a backslash character (\)	
    //       \"	           Inserts a double quote character

    printf("Hello World!\t");
    printf("I am learning C.\n\n");

    printf("Hello World!\\");
    printf("I am learning C.\n\n");

    printf("They call him \"Johnny\".");



    return 0;

}