//
//  arrays.c
//  
//
//  Created by Irwan on 8/1/19.
//
//

#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12

int main(void){
    float expenses[] = { 10.3, 9, 7.5, 4.3, 10.5, 7.5, 7.5, 8, 9.9, 10.2, 11.5, 7.8 };
    
    int count, month;
    float total;
    
    for (month=0, total=0.0; month < 12; month++){
        total += (expenses[month]) ;
    }
    
    for (count=0; count < 12; count++){
        printf("Month %2d = %6.2f K$\n", count+1, expenses[count]);
    }
    printf("Total    = %6.2f K$, Average = %.2f K$\n\n", total, total/MONTHS);
    
} /* End of Main program */
