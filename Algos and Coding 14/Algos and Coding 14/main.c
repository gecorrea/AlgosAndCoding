//
//  Algos and Coding 14
//
//  Created by George E. Correa on 11/17/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /* Calculate s = (1*1 + 1*2 + ... + 1*50) + (2*1 + 2*2 + ... + 2*50) + ... + (100*1 + 100*2 + ... + 100*50) */
    
    // First declare the variable needed. j, jMax, i, iMax and sum.
    
    int j;
    int jMax = 100;
    int i;
    int iMax = 50;
    long sum = 0;
    
    for(j = 1; j <= jMax; j++)
    {
        for(i = 1; i <= iMax; i++)
        {
            sum = sum + (j * i);
        }
    }
    
    // Print the sum of the nested loop. It should be 6438750.
    printf("The sum of (1*1 + 1*2 + ... + 1*50) + (2*1 + 2*2 + ... + 2*50) + ... + (100*1 + 100*2 + ... + 100*50) is %ld\n.", sum);
    
    return 0;
}
