#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Asking user for name
    string name = get_string("What is your name?\n");
    //Printing welcome with user's name
    printf("hello, %s\n", name);
}