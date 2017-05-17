//
//  Algos and Coding 17.b.g
//
//  Created by George E. Correa on 12/7/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//
//  s = 1/2 + 1/3 + ... + 1/100. Find the sum of 1/n where n begins at 2 and ends at 100.

#include <stdio.h>

double sum(double start, double end, double total)
{
    if(start <= end)
    {
        total += (1/start);
        return sum(start + 1, end, total);
    }
    else
        return total;
}

int main(int argc, const char * argv[]) {
    double n = 2;
    double max = 100;
    double s = 0;
    
    s = sum(n, max, s);
    printf("The sum of 1/n for n equal to %.0f through %.0f is %.8f.\n", n, max, s);
    return 0;
}
