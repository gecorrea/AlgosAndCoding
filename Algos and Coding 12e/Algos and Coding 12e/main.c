//
//  Algos and Coding 12e
//
//  Created by George E. Correa on 11/16/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // s = 1+2+3+ ... +100
    // Find the sum of the first 100 integers
    
    // First declare the variable s, n and MAX.
    int s = 0;
    
    int n;
    int MAX = 100;
    
    /* Write a for loop to add the first 100 integers using n as the counter and MAX to determine the termination point.*/
    
    for(n = 1; n <= MAX; n++)
    {
        // In here we will add the the value of n to s each time the loop is executed.
        s = s + n;
    }
    
    // Print out the total of the sum, s, of the first 100 integers which should be 5050.
    printf("The sum of the first 100 integers is %d\n", s);
    
    return 0;
}
