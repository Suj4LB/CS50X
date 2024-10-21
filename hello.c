#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What is your name: "); // takes user input for the Name
    printf("hello, %s\n", name); //prints the name 
}
