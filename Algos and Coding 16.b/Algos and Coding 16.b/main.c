//
//  Algos and Coding 16.b
//
//  Created by George E. Correa on 12/6/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//
//  Write a function to find the nth power of an integer from first principles

#include <stdio.h>

long power(int x, int y)
{
    int result = 1;
    int limit = 0;
    
    while(y > limit)
    {
        result = result * x;
        y--;
    }
    
    return result;
}

int main(int argc, const char * argv[]) {
    
    int base = 3;
    int exponent = 5;
    
    long answer = power(base, exponent);
    
    printf("Your result is %ld.\n", answer);
    
    return 0;
}
