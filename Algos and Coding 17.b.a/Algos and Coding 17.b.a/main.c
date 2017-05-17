//
//  Algos and Coding 17.b.a
//
//  Created by George E. Correa on 12/7/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//
//  Write the FizzBuzz program using recursion

#include <stdio.h>

void fizzbuzz(int i, int max)
{
    if(i % 5 == 0 && i % 3 == 0 && i <= max)
    {
        printf("FizzBuzz\n");
        fizzbuzz(i + 1,max);
    }
    else if(i % 3 == 0 && i <= max)
    {
        printf("Fizz\n");
        fizzbuzz(i + 1, max);
    }
    else if(i % 5 == 0 && i <= max)
    {
        printf("Buzz\n");
        fizzbuzz(i + 1, max);
    }
    else if(i <=max)
    {
        printf("%d\n", i);
        fizzbuzz(i + 1, max);
    }
}

int main(int argc, const char * argv[]) {
    int start = 1;
    int end = 100;
    fizzbuzz(start, end);
    return 0;
}
