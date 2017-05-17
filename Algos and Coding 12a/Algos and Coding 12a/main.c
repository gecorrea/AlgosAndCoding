//
//  Algos and Coding 12a
//
//  Created by George E. Correa on 11/16/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Write the FizzBuzz program
    /* Declare variables MAX and counter. counter is the starting point for our for loop and MAX is the valve that we will compare counter to and determine if the loop should run again.*/
    int MAX = 100;
    int counter;
    // Build the for loop using the declared variables.
    for (counter = 1; counter <= MAX; counter++)
    {
        // In the for loop we will check in counter is a multiple of 3 and/or 5.
        // First we check if the number is a muiltiple of both numbers.
        if (counter % 5 == 0 && counter % 3 == 0)
        {
            // If counter is a multiple of both 3 and 5 then we print FizzBuzz.
            printf("FizzBuzz\n");
        }
        // Next we check if counter is only a multiple of 3.
        else if(counter % 3 == 0)
        {
            // If it is only a multiple of 3 we print Fizz.
            printf("Fizz\n");
        }
        // Next we check if counter is only a multiple of 5.
        else if(counter % 5 == 0)
        {
            // If it is only a multiple of 5 we print Buzz.
            printf("Buzz\n");
        }
        // If counter is not a multiple of both 3 and 5 or either, we print the number.
        else
        {
            printf("%d\n", counter);
        }
    }
    
    return 0;
}
