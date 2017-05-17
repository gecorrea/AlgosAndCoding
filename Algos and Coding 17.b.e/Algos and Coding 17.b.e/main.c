//
//  Algos and Coding 17.b.e
//
//  Created by George E. Correa on 12/7/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//
// s = 1+2+3+ ... +100. Find the sum of the first 100 integers.

#include <stdio.h>

int sum(int start, int end, int total)
{
    if(start <= end)
    {
        total += start;
        return sum(start + 1, end, total);
    }
    else
        return total;
}

int main(int argc, const char * argv[]) {
    int n = 1;
    int max = 100;
    int s = 0;
    
    s = sum(n, max, s);
    printf("The sum of integers %d through %d is %d.\n", n, max, s);
    return 0;
}
