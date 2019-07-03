//
//  example03.c
//  
//  Program to calculate the product of two numbers.
//  Taken from the example 3 on lecture slides
//
//  Taken from the example


#include <stdio.h>

int product(int x, int y);

int main (){
    
    int a,b,c;
    
    /* Input the first number */
    printf ("Enter a number between 1 and 100: ");
    scanf ("%d", &a);
    
    /* Input the second number */
    printf ("Enter a number between 1 and 100: ");
    scanf ("%d", &b);

    /* Calculate and display the product */
    c = product(a,b);
    printf("%d times %d = %d\n", a, b, c);
    return 0;
    
} // End of Main Program


/* Functions returns the product of its two arguments */

int product(int x, int y)
{
    return (x*y);
}