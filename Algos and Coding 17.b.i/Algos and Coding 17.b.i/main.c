//
//  Algos and Coding 17.b.i
//
//  Created by George E. Correa on 12/7/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//
/*  s = 1/(2*3) + 1/(3*4) + 1/(4*5) + ... + 1/(99*100). Find the sum of 1/(n*(n+1)) where n begins at 2 and ends at 99. */

#include <stdio.h>

double sum(double start, double end, double total)
{
    if(start <= end)
    {
        total += 1/(start * (start + 1));
        return sum(start + 1, end, total);
    }
    else
        return total;
}

int main(int argc, const char * argv[]) {
    double n = 2;
    double max = 99;
    double s = 0;
    
    s = sum(n, max, s);
    printf("The sum of 1/(n*(n+1)) for n equal to %.0f through %.0f is %.2f.\n", n, max, s);
    return 0;
}
