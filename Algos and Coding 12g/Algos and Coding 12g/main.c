//
//  Algos and Coding 12g
//
//  Created by George E. Correa on 11/16/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // s = 1/2 + 1/3 + ... + 1/100
    // Find the sum of 1/n where n begins at 2 and ends at 100
    
    /* First declare the variable s, n and MAX. Since we want the end result to have a decimal point, we will declare the variables as double type. */
    double s = 0;
    
    double n;
    double MAX = 100;
    
    /* Write a for loop to add 1/2 + 1/3 + ... + 1/100. Since we are starting at 1/2, n will start at 2 instead of 1. */
    
    for(n = 2; n <= MAX; n++)
    {
        // In here we will add the the value of 1/n to sum, s, each time the loop is executed.
        s = s + (1/n);
    }
    
    // Print out the total sum, s, which should be 4.18737751.
    printf("The sum of 1/2 + 1/3 + ... + 1/100 is %.8f\n", s);
    
    return 0;
}
