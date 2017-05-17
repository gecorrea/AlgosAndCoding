//
//  Algos and Coding 12f
//
//  Created by George E. Correa on 11/16/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // s = -1-2-3-4 ... -200
    // Find the sum of the first 200 negative integers
    
    // First declare the variable s, n and MIN.
    int s = 0;
    
    int n;
    int MIN = -200;
    
    /* Write a for loop to add the first 200 negative integers using n as the counter and MIN to determine the termination point.*/
    
    for(n = -1; n >= MIN; n--)
    {
        // In here we will add the the value of n to the sum, s, each time the loop is executed.
        s = s + n;
    }
    
    /* Print out the total of the sum, s, of the first 200 negative integers which should be -20100. */
    printf("The sum of the first 200 negative integers is %d\n", s);
    
    return 0;
}
