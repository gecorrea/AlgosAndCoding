//
//  Algos and Coding 7
//
//  Created by George E. Correa on 11/16/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//

#include <stdio.h>
#include <limits.h>

int main(int argc, const char * argv[]) {
    // Find the largest number you can work with in C.
    
    printf("The largest number you can work with in C is %lu.\n", ULONG_MAX);
    // A 64 bit build would be able to produce a larger number than a 32 bit build.
    
    // How would you represent at Person (name, age, address) using primative data types?
    /* Using primative data types you would need to store the name as a string type, store the age as an int type, and store the address as a sting type. They can be stored in an array.*/
    return 0;
}
