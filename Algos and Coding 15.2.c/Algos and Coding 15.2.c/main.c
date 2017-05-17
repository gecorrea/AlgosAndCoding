//
//  Algos and Coding 15.2.c
//
//  Created by George E. Correa on 11/28/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//
/*  Write a function to find the length of the above string
    Note: Do not use strlen */

#include <stdio.h>

void stringLength(char *string)
{
    int i = 0;
    
    while(string[i] != '\0')
    {
        i++;
    }
    
    printf("The length of myQuote is %d characters.\n", i);
}

int main(int argc, const char * argv[]) {
    
    char *myQuote;
    
    myQuote = "\"Mr. Fay, is this going to be a battle of wits?\"\n\"If it is,\" was the indifferent retort, \"you have come unarmed!\"";
    
    printf("%s\n", myQuote);
    
    stringLength(myQuote);
    
    return 0;
}
