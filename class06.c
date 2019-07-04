//
//  class06.c
//
//  Demo for Class on operators and expressions
//  Created by Irwan on 7/4/19.
//
//

#include <stdio.h>

// Function declaration for user defined function
void enter2continue();

// Main program function
int main(){
    
    // Declare and initialize
    char val = 250;
    int	 ans;
    
    // Could use this expressions later, but to begin with, we can start
    // using simplified expression
    // ans =  val +  !val + ~val + ++val;
    ans = val;
    
    // print out the values of val and ans
    printf("Content of the value: ");
    printf("%c %d\n\n", val, ans);
    
    enter2continue();
    
    //
    // Increment operators
    //
    printf("Pre-increment operator: value is %d\n", ++ans);
    printf("Post-increment operator: value is %d\n", ans++);
    printf("Current value is %d\n", ans);
    
    enter2continue();
    
    //
    // Shifting Operators
    //
    // Declare and define how many bit to shift
    int num_of_bit_shifting = 1;
    // Do the bit-shifting
    ans = ans << num_of_bit_shifting;
    printf("Value after %d bit-shifting: %d\n", num_of_bit_shifting, ans);
    
    // Do another bit-shifting, now using update forms
    ans <<= num_of_bit_shifting;
    printf("Value after another %d bit-shifting: %d\n", num_of_bit_shifting, ans);
    
    enter2continue();
    
    //
    // Operations on bits
    //
    
    // Declare and define variables
    int x = 0xfff0;
    int y = 0x002f;
    // Print out to check the values
    printf("The decimal values are %d and %d\n", x, y);
    printf("While the hex values are 0x%X and 0x%X\n", x, y);

    
    // Bitwise logical operations
    printf("Their bitwise AND is: %d\t(0x%X)\n", x&y, x&y);
    printf("      bitwise OR  is: %d\t(0x%X)\n", x|y, x|y);
    printf("      bitwise XOR is: %d\t(0x%X)\n", x^y, x^y);
    printf("Complement of %d is %d\t(0x%X)\n", y, ~y, ~y);
    
    // Simple check on the machine
    printf("Size of int on this machine is = %d byte(s)\n", sizeof(int));
    
    //
    // End the programm
    //
    printf("\nDone...!\n");
    return 0;
    
}

// Function definition for user defined functions

void enter2continue(){
    // This simple function only displays message to the user to
    // press Enter/Return key to continue the program running
    printf("Press Enter to continue...\n");
    getchar();
}

