//
//  Algos and Coding 12i
//
//  Created by George E. Correa on 11/17/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // s = 1/(2*3) + 1/(3*4) + 1/(4*5) + ... + 1/(99*100)
    // Find the sum of 1/(n*(n+1)) where n begins at 2 and ends at 99
    
    /* First declare the variable s, n and MAX. Since we want the end result to have a decimal point, we will declare the variables as float type. */
    float s = 0;
    
    float n;
    float MAX = 99;
    
    /* Write a for loop to add 1/(2*3) + 1/(3*4) + 1/(4*5) + ... + 1/(99*100). Since we are starting at 1/(2*3), n will start at 2 instead of 1. */
    
    for(n = 2; n <= MAX; n++)
    {
        // In here we will add the the value of 1/(n*(n+1)) to sum, s, each time the loop is executed.
        s = s + (1/(n*(n+1)));
    }
    
    // Print out the total sum, s, which should be 0.49.
    printf("The sum of 1/(2*3) + 1/(3*4) + 1/(4*5) + ... + 1/(99*100) is %.2f\n", s);
    
    return 0;
}
