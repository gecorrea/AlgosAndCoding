//
//  Algos and Coding 16.a
//
//  Created by George E. Correa on 12/5/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//
/*  a) Write a function to swap two integers. Do this in three different ways
        a. Using a temp variable
        b. Without using a temp variable
        c. Using bit shift operators */

void aFunction(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    
    printf("Number stored in position 1 is %d and in position 2 is %d.\n", a, b);
}

void bFunction(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("Number stored in position 1 is %d and in position 2 is %d.\n", a, b);
}

void cFunction(int a, int b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    printf("Number stored in position 1 is %d and in position 2 is %d.\n", a, b);
}

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int x = 10;
    int y = 15;
    
    printf("Number stored in position 1 is %d and in position 2 is %d.\n", x, y);
    
    aFunction(x, y);
    
    bFunction(x, y);
    
    cFunction(x, y);
    
    return 0;
}
