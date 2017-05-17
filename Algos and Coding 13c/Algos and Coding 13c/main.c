//
//  Algos and Coding 13c
//
//  Created by George E. Correa on 11/17/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//

#include <stdio.h>
#include <math.h> // To find the square root we will need the math header.

int main(int argc, const char * argv[]) {
    // s = sqrt(6*(1 + (1/(2^2)) + (1/(3^2)) + ... + (1/(n^2))))
    // Calculate the value of n above if it is given that s is equal to PI to 6 decimal places.
    
    /* First lets delcare variables s, p, n, and MAX as type double. We know that s is going to be equal to PI to 6 decimal places. We will set MAX to be the value of PI to 6 decimal places and we want s to get to the value of MAX. */
    
    double s = 0;
    double p = 0;
    double n;
    double MAX = 3.141592;
    
    /* We will do the loop similar to the last answer except that we will now compare the value of s to MAX. We are also moving the calculation of s into the loop so that it can be evaluated and then compared to MAX after each iteration of the loop. */
    
    for(n = 1; s <= MAX; n++)
    {
        p = p + (1/(n*n));
        
        s = sqrt(6 * p);
    }
    
    /* Lastly, we display the value of n that caused s <= MAX to become false and terminate the loop. */
    printf("The value of n that causes s to equal PI to 6 decimal places is %.0f.\n", n);
    
    return 0;
}
