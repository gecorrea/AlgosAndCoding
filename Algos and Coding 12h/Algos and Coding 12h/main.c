//
//  Algos and Coding 12h
//
//  Created by George E. Correa on 11/17/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // s = 1^2 + 2^2 + 3^2 +⋯+ 100^2
    // Find the sum of the square of the first 100 integers
    
    // First declare the variable s, n and MAX.
    
    int s = 0;
    
    int n;
    int MAX = 100;
    
    // Write a for loop to add 1^2 + 2^2 + 3^2 + ... + 100^2.
    
    for(n = 1; n <= MAX; n++)
    {
        /* In here we will add the the value of n times itself to s each time the loop is executed. */
        s = s + n * n;
    }
    
    // Print out the total sum, s, which should be 338350.
    printf("The sum of 1^2 + 2^2 + 3^2 +⋯+ 100^2 is %d\n", s);
    
    return 0;
}
