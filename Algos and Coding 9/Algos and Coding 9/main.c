//
//  Algos and Coding 9
//
//  Created by George E. Correa on 11/16/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>

int main(int argc, const char * argv[]) {
    // 9.a) Declare the number 9 and the character 9
    int x = 9;
    char A = '9';
    // 9.b) What is the value of character '9'+1? Is that the same as 10?
    if (A+1 == x+1){
        printf("The value of char '%c' + 1 is equal to %d,\n", A, 10);
    }
    else {
        printf("The value of char '%c' + 1 is not equal to %d,\n", A, 10);
    }
    
    // 9.c) Declare an array of 10 numbers using int[] notation.
    
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    // Can you mix different data types in a single array?
    /* Since the type of data being entered into the array must be declared you can only put one data type in per array in C.*/
    
    // 9.d) Create your own data type that can only take on values equal to the 4 seasons only.
    
    enum season {spring, summer, fall, winter};
    
    // 9.e)
    double pi = 3.14159265; //Could be const
    int age = 33;
    float bankBal = 12053.98;
    char name = "George"; //Could be const
    float balanceDue = 34.55;
    enum color {Red, Blue, Green}; //Could  be const
    enum carBrand{Honda, Hyundai, BMW, Cadilac, Nissan}; //Could be const
    
    return 0;
}
