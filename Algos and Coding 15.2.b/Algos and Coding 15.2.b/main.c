//
//  Algos and Coding 15.2.b
//
//  Created by George E. Correa on 11/28/16.
//  Copyright © 2016 Turn To Tech. All rights reserved.
//
/*  Create a single variable named myQuote of the appropriate type that can hold the following sentence:
    "Mr. Fay, is this going to be a battle of wits?"
    "If it is," was the indifferent retort, "you have come unarmed!" */

#include <stdio.h>

int main(int argc, const char * argv[]) {
   
 char *myQuote;
    
    myQuote = "\"Mr. Fay, is this going to be a battle of wits?\"\n\"If it is,\" was the indifferent retort, \"you have come unarmed!\"";
    
    printf("%s\n", myQuote);
    
    return 0;
}
