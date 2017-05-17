//
//  Algos and Coding 12j
//
//  Created by George E. Correa on 11/17/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // s = 1/(3*5) + 1/(7*9) + ... + 1/(95*97)
    /* Find the sum of 1/(n*(n+2)) where n begins at 3 and ends at 95. n will increase by 4 each time the loop is executed. */
    
    /* First declare the variable s, n and MAX. Since we want the end result to have a decimal point, we will declare the variables as float type. */
    float s = 0;
    
    float n;
    float MAX = 95;
    
    /* Write a for loop to add 1/(3*5) + 1/(7*9) + ... + 1/(95*97). Since we are starting at 1/(3*5), n will start at 3. */
    
    for(n = 3; n <= MAX; n= n + 4)
    {
        // In here we will add the the value of 1/(n*(n+2)) to sum, s, each time the loop is executed.
        s = s + (1/(n*(n+2)));
    }
    
    // Print out the total sum, s, which should be 0.10475.
    printf("The sum of 1/(3*5) + 1/(7*9) + ... + 1/(95*97) is %.5f\n", s);
    
    return 0;
}
