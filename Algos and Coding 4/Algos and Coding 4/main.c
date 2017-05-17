//
//  Algos and Coding 4
//
//  Created by George E. Correa on 11/16/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Find the sum of the first 200 odd numbers
    
    int MAX = 200;
    int sum = 0;
    
    int counter = 1;
    int term = 1;
    
    while (counter <= MAX)
    {
        sum = sum + term;
        term = term + 2;
        counter++;
    }
    printf("The sum of the first 200 odd numbers is %d\n", sum);
    //4.1) The steps of this algorithm are well defined.
    //4.2) There is clear order to the algorithm.
    //4.3) The algorithm has a well defined termination place.
    //4.4) The algorithm produces the sum of the first 200 odd numbers. Result is 40,000.
    /*4.5) The loop executes 200 times. On the 201 iteration the counter exceeds MAX and terminates the loop.*/
    /*4.6) To make the program calculate the first 1,000 odd numbers, change the value of MAX to 1000.*/
    /*4.7) To change the algorithm to calculate the sum of the first 200 even numbers starting at 2, set term = 2.*/
    /*4.8) To calculate the terms in increments of 5 up to 200, you would have to set term = 5. sum would still be 0. sum would be sum = term + 5. You would not need the counter. you would compare the value of term to MAX, which is = 200. you would execute the loop as long as term <= MAX. Then print the value of sum once term becomes > MAX.*/
    /*4.9) You would have to start with sum = 1. sum would be equal to sum * term. and term would be term++.*/
    /*4.10) First change Max to 100. Next insert an if statement that checks if the term is odd or even. You can do if (term % 2 == 0) subtract the term from sum, else add the term to the sum. You would need a counter starting at 1 that is being compared to MAX and being increased by 1 at the end of the loop each time.*/
}
