//
//  Algos and Coding 13b
//
//  Created by George E. Correa on 11/17/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//

#include <stdio.h>
#include <math.h> // To find the square root we will need the math header.

int main(int argc, const char * argv[]) {
    // Evaluate s using n = 100 terms where
    // s = sqrt(6*(1 + (1/(2^2)) + (1/(3^2)) + ... + (1/(100^2))))
    
    // First lets delcare variables s, p, n, and MAX as type double.
    
    double s;
    double p = 0;
    double n;
    double MAX = 100;
    
    // Now lets write a loop to handle the sum of (1/(n^2)) from n = 1 to 100.
    // We will use p to hold our value of this result.
    
    for( n = 1; n <= MAX; n++)
    {
        p = p + (1/(n*n));
    }
    // Variable p now has the value of the sum calculated in the loop above.
    // Now will calculate the value of s by multiplying p by 6 and then taking the square root.
    
    s = sqrt(6 *p);
    // Lastly, we display the result.
    printf("The value of s for sqrt(6*(1 + (1/(2^2)) + (1/(3^2)) + ... + (1/(100^2)))) is %f\n", s);
    
    return 0;
}
