//
//  Algos and Coding 17.c
//
//  Created by George E. Correa on 12/7/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//
//  Reverse a string using recursion

#include <stdio.h>
#include <stdlib.h>

int stringLength(char *string)
{
    int i = 0;
    
    while(string[i] != '\0')
    {
        i++;
    }
    
    return i;
}

void reverseString(char *strng, int strngLngth, int i, char *newStrng)
{
    if(i > 0)
    {
        newStrng[strngLngth - i] = strng[i - 1];
        reverseString(strng, strngLngth, i - 1, newStrng);
    }
    else
    {
        newStrng[strngLngth - i] = '\0';
        printf("%s\n", newStrng);
    }
}

int main(int argc, const char * argv[]) {
    
    char *string = {"Reverse this string."};
    
    printf("%s\n", string);
    
    int stringSize = stringLength(string);
                 
    int position = stringSize;
    
    char *revString = malloc(sizeof(char) * stringSize);
    
    reverseString(string, stringSize, position, revString);
    
    return 0;
}
