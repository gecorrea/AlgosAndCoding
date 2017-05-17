//
//  Algos and Coding 17.a
//
//  Created by George E. Correa on 12/7/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//
//  a. Calculate factorial of a number using recursion

#include <stdio.h>

int factorial(int i)
{
    if(i <= 1)
        return 1;
    else
        return i = i * factorial(i-1);
}

int main(int argc, const char * argv[]) {
    
    int number = 7;
    
    int numberFactorial = factorial(number);
    
    printf("%d! = %d.\n", number, numberFactorial);
    
    return 0;
}
