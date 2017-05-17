//
//  Algos and Coding 17.b.h
//
//  Created by George E. Correa on 12/7/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//
//  s = 1^2 + 2^2 + 3^2 +⋯+ 100^2. Find the sum of the square of the first 100 integers

#include <stdio.h>

int sum(int start, int end, int total)
{
    if(start <= end)
    {
        total += start * start;
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
    printf("The sum of the square of the first %d integers is %d.\n", max, s);
    return 0;
}
