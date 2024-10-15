#include<stdio.h>
int main() {
    //you can go to a new line by using the newline character (\n)

    ////after printing "Hello, World!", the \n moves the cursor to the next line, so the next printf() starts its output on a new line
    //You can use \n anywhere in the string to create line breaks
    printf("Hello World!\n");
    printf("This is a new line\n\n");
    
    //Two \n characters after each other will create a blank line

    //You can also output multiple lines with a single printf() function
    printf("Hello World!\nI am learning C.\nAnd it is awesome!");

    return 0;

}