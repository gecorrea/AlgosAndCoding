//
//  Algos and Coding 17.b.j
//
//  Created by George E. Correa on 12/7/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//
/*  s = 1/(3*5) + 1/(7*9) + ... + 1/(95*97). Find the sum of 1/(n*(n+2)) where n begins at 3 and ends at 95. n will increase by 4 each time. */

#include <stdio.h>

double sum(double start, double end, double total)
{
    if(start <= end)
    {
        total += 1/(start * (start + 2));
        return sum(start + 4, end, total);
    }
    else
        return total;
}

int main(int argc, const char * argv[]) {
    double n = 3;
    double max = 95;
    double s = 0;
    
    s = sum(n, max, s);
    printf("The sum of 1/(n*(n+2)) for n equal to %.0f through %.0f where n increases by 4 each iteration is %.5f.\n", n, max, s);
    return 0;
}
